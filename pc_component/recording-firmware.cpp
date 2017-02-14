#include <unistd.h>
#include <utility>
#include <memory>
#include <pthread.h>
#include <string>
#include <iostream>
#include <valarray>
#include <sstream>
#include <fstream>
#include <sys/socket.h>
#include <wiringPi.h>
#include <mqueue.h>
#include <fcntl.h>
//#include <sys/time.h>

#include <libsocket/inetserverstream.hpp>
#include <libsocket/inetserverdgram.hpp>
#include <libsocket/exception.hpp>

#include "../matrix-hal/cpp/driver/everloop_image.h"
#include "../matrix-hal/cpp/driver/microphone_array.h"
#include "../matrix-hal/cpp/driver/wishbone_bus.h"

#include "LedController.h"

namespace matrixCreator = matrix_hal;
using namespace std;

#define BUFFER_SAMPLES_PER_CHANNEL	16384 //around 1 second, power of 2 for networking, trucation at PC side
#define HOST_NAME_LENGTH			20 //maximum number of characters for host name
#define COMMAND_LENGTH				1
#define STREAMING_CHANNELS			8 //Maxmium 8 channels

void *record2Remote(void* null);
void *record2Disk(void* null);
void irInterrupt();
void * motionDetection(void * null);
void *udpBroadcastReceiver(void *null);
void * recorder(void * null);

LedController *LedCon;
matrixCreator::MicrophoneArray microphoneArray;

char sysInfo[COMMAND_LENGTH + HOST_NAME_LENGTH];

bool pcConnected = false;
bool recording = false;
//double buffer of SAMPLES_PER_CHANNEL*8 samples each
int16_t buffer[2][BUFFER_SAMPLES_PER_CHANNEL][STREAMING_CHANNELS];

pthread_mutex_t bufferMutex[2] = { PTHREAD_MUTEX_INITIALIZER };

unique_ptr<libsocket::inet_stream> tcpConnection;

char* status = &sysInfo[0];
char* hostname = &sysInfo[1];

int main(int argc, char *argv[]) {

	gethostname(hostname, HOST_NAME_LENGTH);
	*status = 'I';
	matrixCreator::WishboneBus bus;
	bus.SpiInit();

	microphoneArray.Setup(&bus);

	LedCon = new LedController(&bus);
	char command = '\0';

	pthread_t udpThread;
	pthread_create(&udpThread, NULL, udpBroadcastReceiver, NULL);

	if (argc == 1) {
		pthread_t motionDetect;
		pthread_create(&motionDetect, NULL, motionDetection, NULL);
	}	

	//stand by
	libsocket::inet_stream_server tcpServer("0.0.0.0", "8000", LIBSOCKET_IPv4);
	cout << hostname << " - TCP server listening :8000\n";

	for (matrixCreator::LedValue& led : LedCon->Image.leds) {
		led.red = 0; led.green = 0; led.blue = 2;
	}
	LedCon->updateLed();

	//wait for network connection
	while(true){
		try {

			tcpConnection = tcpServer.accept2();

			//connected
			for (matrixCreator::LedValue& led : LedCon->Image.leds) {
				led.red = 0; led.green = 2; led.blue = 0;
			}
			LedCon->updateLed();
			pcConnected = true;

			tcpConnection->snd(sysInfo, COMMAND_LENGTH + HOST_NAME_LENGTH);

			pthread_t recorderThread;

			while (tcpConnection->rcv(&command, 1, MSG_WAITALL)) {
				switch (command) {
				case 'N': {//record to network
					*status = 'N';
					recording = true;
					pthread_create(&recorderThread, NULL, recorder, NULL);
					break;
				}
				case 'L': {//record to disk
					if (*status == 'I') {
						*status = 'L';
						recording = true;
						pthread_create(&recorderThread, NULL, recorder, NULL);
					}
					else if (*status == 'L') {
						*status = 'I';
						recording = false;
						pthread_join(recorderThread, NULL);
						LedCon->updateLed();
					}

					break;
				}
				case 'T': {
					LedCon->turnOffLed(); system("sudo shutdown now");
					break;
				}
				default: cout << "unrecognized command" << endl;
				}
				command = '\0';
				LedCon->turnOffLed();
			}
		}
	
		catch (const libsocket::socket_exception& exc)
		{
			//error
			cout << exc.mesg << endl;
		}
		pcConnected = false;
		cout << "Remote PC at " << tcpConnection->gethost() << ":" << tcpConnection->getport() << " disconnected" << endl;
		tcpConnection->destroy();
		LedCon->turnOffLed();		
	}
	//pthread_join(recorderThread, NULL);

	LedCon->updateLed();
	sleep(1);
	LedCon->turnOffLed();

	return 0;
}




int irPulseCount = 0;

void irInterrupt() {
	irPulseCount++;
}

void *motionDetection(void *null) {
	pthread_t recorderThread;
	//setup
	cout << "Motion detection enabled" << endl;
	//system("gpio edge 16 both");
	pinMode(16, INPUT);
	pinMode(13, OUTPUT);
	pinMode(5, OUTPUT);

	digitalWrite(13, HIGH);
	digitalWrite(5, HIGH);

	//setup pint 16 (IR) as interrupt
	wiringPiISR(16, INT_EDGE_FALLING, &irInterrupt);

	while (true) {
		if (irPulseCount > 20 && irPulseCount < 40) {
			if (*status == 'I') {
				LedCon->turnOffLed();
				*status = 'L';
				recording = true;
				pthread_create(&recorderThread, NULL, recorder, NULL);
			}
			else if (*status == 'L') {
				*status = 'I';
				recording = false;
				pthread_join(recorderThread, NULL);
				LedCon->updateLed();
			}
		}
		irPulseCount = 0;
		sleep(1);		
	}

}

void *udpBroadcastReceiver(void *null) {
	string remoteIP;
	string remotePort;
	string buffer;

	remoteIP.resize(16);
	remotePort.resize(16);
	buffer.resize(32);
	
	//start server
	libsocket::inet_dgram_server udpServer("0.0.0.0", "8001", LIBSOCKET_IPv4);	
	cout << hostname << " - UDP server listening :8001\n";

	while (true) {
		try {
			udpServer.rcvfrom(buffer, remoteIP, remotePort);
			
			if (!pcConnected && buffer.compare("live long and prosper") == 0) {
				cout << "Remote PC at " << remoteIP << endl;
				udpServer.sndto("peace and long life", remoteIP, remotePort);
			}
			
		}
		catch (const libsocket::socket_exception& exc)
		{
			//error
			for (matrixCreator::LedValue& led : LedCon->Image.leds) {
				led.red = 8; led.green = 0; led.blue = 0;
			}
			LedCon->updateLed();

			cout << exc.mesg << endl;
		}
	}
	
}

void *recorder(void* null) {
	cout << "------ Recording starting ------" << endl;
	uint32_t buffer_switch = 0;
	//lock down buffer 0 before spawning streaming thread
	pthread_mutex_lock(&bufferMutex[buffer_switch]);

	pthread_t workerThread;
	switch (*status) {
	case 'N':pthread_create(&workerThread, NULL, record2Remote, NULL); break;
	case 'L':pthread_create(&workerThread, NULL, record2Disk, NULL); break;
	}

	while (recording) {
		uint32_t step = 0;
		while (step < BUFFER_SAMPLES_PER_CHANNEL) {

			/* The reading process is a blocking process that read in 8*128 samples every 8ms */
			microphoneArray.Read();

			for (uint16_t s = 0; s < microphoneArray.NumberOfSamples(); s++) {
				for (uint16_t c = 0; c < STREAMING_CHANNELS; c++) {
					buffer[buffer_switch][step][c] = microphoneArray.At(s, c);
				}
				step++;
			}
		}
		pthread_mutex_lock(&bufferMutex[(buffer_switch + 1) % 2]);
		pthread_mutex_unlock(&bufferMutex[buffer_switch]);
		buffer_switch = (buffer_switch + 1) % 2;
	}
	pthread_mutex_unlock(&bufferMutex[buffer_switch]);
	pthread_join(workerThread, NULL);
	cout << "------ Recording ended ------" << endl;
	pthread_exit(NULL);
}

void *record2Disk(void* null) {
	uint32_t bufferSwitch = 0;
	char dateAndTime[16];
	struct tm tm;
	matrixCreator::EverloopImage rotatingRing;

	do {//fix the file size to less than 2GB maximum, create new file when recording continues
		rotatingRing.leds[0].red = 5;
		LedCon->updateLed(rotatingRing);

		uint32_t counter = 0;

		time_t t = time(NULL);
		tm = *localtime(&t);
				
		sprintf(dateAndTime, "%d%02d%02d_%02d%02d%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday,
			tm.tm_hour, tm.tm_min, tm.tm_sec);

		ostringstream filenameStream;
		filenameStream << "/home/pi/Recordings/" << hostname << "_" << dateAndTime << "_8ch.wav";
		string filename = filenameStream.str();

		ofstream file(filename, std::ofstream::binary);

		// WAVE file header format
		struct WaveHeader {
			//RIFF chunk
			char RIFF[4] = { 'R', 'I', 'F', 'F' };
			uint32_t overallSize;						// overall size of file in bytes
			char WAVE[4] = { 'W', 'A', 'V', 'E' };		// WAVE string

														//fmt subchunk
			char fmt[4] = { 'f', 'm', 't', ' ' };		// fmt string with trailing null char
			uint32_t fmtLength = 16;					// length of the format data
			uint16_t audioFormat = 1;					// format type. 1-PCM, 3- IEEE float, 6 - 8bit A law, 7 - 8bit mu law
			uint16_t numChannels = 8;					// no.of channels
			uint32_t samplingRate = 16000;				// sampling rate (blocks per second)
			uint32_t byteRate = 256000;					// SampleRate * NumChannels * BitsPerSample/8
			uint16_t blockAlign = 16;					// NumChannels * BitsPerSample/8
			uint16_t bitsPerSample = 16;				// bits per sample, 8- 8bits, 16- 16 bits etc

														//data subchunk
			char data[4] = { 'd', 'a', 't', 'a' };		// DATA string or FLLR string
			uint32_t dataSize;							// NumSamples * NumChannels * BitsPerSample/8 - size of the next chunk that will be read
		} header;

		file.write((const char*)&header, sizeof(WaveHeader));

		while (recording && counter < 8191) {

			pthread_mutex_lock(&bufferMutex[bufferSwitch]);

			file.write((const char*)buffer[bufferSwitch], STREAMING_CHANNELS * BUFFER_SAMPLES_PER_CHANNEL * 2);
			
			pthread_mutex_unlock(&bufferMutex[bufferSwitch]);
			bufferSwitch = (bufferSwitch + 1) % 2;

			rotatingRing.leds[counter%matrixCreator::kMatrixCreatorNLeds].red = 0;
			counter++;
			rotatingRing.leds[counter%matrixCreator::kMatrixCreatorNLeds].red = 5;
			LedCon->updateLed(rotatingRing);
		}

		header.dataSize = STREAMING_CHANNELS * BUFFER_SAMPLES_PER_CHANNEL * 2 * counter;
		header.overallSize = header.dataSize + 36;
		file.seekp(0);
		file.write((const char*)&header, sizeof(WaveHeader));
		file.close();

	} while (recording);

	pthread_exit(NULL);
}

void *record2Remote(void* null)
{
	uint32_t bufferSwitch = 0;
	while (true) {
		pthread_mutex_lock(&bufferMutex[bufferSwitch]);

		try {
			tcpConnection->snd(buffer[bufferSwitch], STREAMING_CHANNELS * BUFFER_SAMPLES_PER_CHANNEL * 2);
			//cout << "sending" << endl;
		}
		catch (const libsocket::socket_exception& exc)
		{
			//network disconnection means recording completed
			break;
		}

		pthread_mutex_unlock(&bufferMutex[bufferSwitch]);
		//cout << "Buffer " << bufferSwitch << " Sent" << endl;
		bufferSwitch = (bufferSwitch + 1) % 2;
	}

	recording = false; //set flag
	*status = 'I';
	pthread_mutex_unlock(&bufferMutex[bufferSwitch]);//unlock mutex
	pthread_exit(NULL);//terminate itself
}