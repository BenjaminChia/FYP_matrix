// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/ml/v1beta1/project_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/cloud/ml/v1beta1/project_service.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace cloud {
namespace ml {
namespace v1beta1 {

namespace {

const ::google::protobuf::Descriptor* GetConfigRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GetConfigRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* GetConfigResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GetConfigResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto() {
  protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/cloud/ml/v1beta1/project_service.proto");
  GOOGLE_CHECK(file != NULL);
  GetConfigRequest_descriptor_ = file->message_type(0);
  static const int GetConfigRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetConfigRequest, name_),
  };
  GetConfigRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GetConfigRequest_descriptor_,
      GetConfigRequest::internal_default_instance(),
      GetConfigRequest_offsets_,
      -1,
      -1,
      -1,
      sizeof(GetConfigRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetConfigRequest, _internal_metadata_));
  GetConfigResponse_descriptor_ = file->message_type(1);
  static const int GetConfigResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetConfigResponse, service_account_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetConfigResponse, service_account_project_),
  };
  GetConfigResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GetConfigResponse_descriptor_,
      GetConfigResponse::internal_default_instance(),
      GetConfigResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(GetConfigResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetConfigResponse, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GetConfigRequest_descriptor_, GetConfigRequest::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GetConfigResponse_descriptor_, GetConfigResponse::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto() {
  GetConfigRequest_default_instance_.Shutdown();
  delete GetConfigRequest_reflection_;
  GetConfigResponse_default_instance_.Shutdown();
  delete GetConfigResponse_reflection_;
}

void protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::api::protobuf_InitDefaults_google_2fapi_2fannotations_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  GetConfigRequest_default_instance_.DefaultConstruct();
  ::google::protobuf::internal::GetEmptyString();
  GetConfigResponse_default_instance_.DefaultConstruct();
  GetConfigRequest_default_instance_.get_mutable()->InitAsDefaultInstance();
  GetConfigResponse_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto_once_);
void protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto_once_,
                 &protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto_impl);
}
void protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n-google/cloud/ml/v1beta1/project_servic"
    "e.proto\022\027google.cloud.ml.v1beta1\032\034google"
    "/api/annotations.proto\" \n\020GetConfigReque"
    "st\022\014\n\004name\030\001 \001(\t\"M\n\021GetConfigResponse\022\027\n"
    "\017service_account\030\001 \001(\t\022\037\n\027service_accoun"
    "t_project\030\002 \001(\0032\255\001\n\030ProjectManagementSer"
    "vice\022\220\001\n\tGetConfig\022).google.cloud.ml.v1b"
    "eta1.GetConfigRequest\032*.google.cloud.ml."
    "v1beta1.GetConfigResponse\",\202\323\344\223\002&\022$/v1be"
    "ta1/{name=projects/*}:getConfigBs\n\037com.g"
    "oogle.cloud.ml.api.v1beta1B\023ProjectServi"
    "ceProtoP\001Z9google.golang.org/genproto/go"
    "ogleapis/cloud/ml/v1beta1;mlb\006proto3", 516);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/cloud/ml/v1beta1/project_service.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_AddDesc_google_2fapi_2fannotations_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto_once_);
void protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto_once_,
                 &protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto {
  StaticDescriptorInitializer_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto() {
    protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto();
  }
} static_descriptor_initializer_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetConfigRequest::kNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetConfigRequest::GetConfigRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.ml.v1beta1.GetConfigRequest)
}

void GetConfigRequest::InitAsDefaultInstance() {
}

GetConfigRequest::GetConfigRequest(const GetConfigRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.cloud.ml.v1beta1.GetConfigRequest)
}

void GetConfigRequest::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

GetConfigRequest::~GetConfigRequest() {
  // @@protoc_insertion_point(destructor:google.cloud.ml.v1beta1.GetConfigRequest)
  SharedDtor();
}

void GetConfigRequest::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void GetConfigRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetConfigRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GetConfigRequest_descriptor_;
}

const GetConfigRequest& GetConfigRequest::default_instance() {
  protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<GetConfigRequest> GetConfigRequest_default_instance_;

GetConfigRequest* GetConfigRequest::New(::google::protobuf::Arena* arena) const {
  GetConfigRequest* n = new GetConfigRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetConfigRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.ml.v1beta1.GetConfigRequest)
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool GetConfigRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.ml.v1beta1.GetConfigRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.cloud.ml.v1beta1.GetConfigRequest.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.cloud.ml.v1beta1.GetConfigRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.ml.v1beta1.GetConfigRequest)
  return false;
#undef DO_
}

void GetConfigRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.ml.v1beta1.GetConfigRequest)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.ml.v1beta1.GetConfigRequest.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.cloud.ml.v1beta1.GetConfigRequest)
}

::google::protobuf::uint8* GetConfigRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.ml.v1beta1.GetConfigRequest)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.ml.v1beta1.GetConfigRequest.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.ml.v1beta1.GetConfigRequest)
  return target;
}

size_t GetConfigRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.ml.v1beta1.GetConfigRequest)
  size_t total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetConfigRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.ml.v1beta1.GetConfigRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const GetConfigRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GetConfigRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.ml.v1beta1.GetConfigRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.ml.v1beta1.GetConfigRequest)
    UnsafeMergeFrom(*source);
  }
}

void GetConfigRequest::MergeFrom(const GetConfigRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.ml.v1beta1.GetConfigRequest)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void GetConfigRequest::UnsafeMergeFrom(const GetConfigRequest& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void GetConfigRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.ml.v1beta1.GetConfigRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetConfigRequest::CopyFrom(const GetConfigRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.ml.v1beta1.GetConfigRequest)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool GetConfigRequest::IsInitialized() const {

  return true;
}

void GetConfigRequest::Swap(GetConfigRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetConfigRequest::InternalSwap(GetConfigRequest* other) {
  name_.Swap(&other->name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GetConfigRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GetConfigRequest_descriptor_;
  metadata.reflection = GetConfigRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetConfigRequest

// optional string name = 1;
void GetConfigRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& GetConfigRequest::name() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1beta1.GetConfigRequest.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void GetConfigRequest::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.ml.v1beta1.GetConfigRequest.name)
}
void GetConfigRequest::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.ml.v1beta1.GetConfigRequest.name)
}
void GetConfigRequest::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.ml.v1beta1.GetConfigRequest.name)
}
::std::string* GetConfigRequest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1beta1.GetConfigRequest.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* GetConfigRequest::release_name() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1beta1.GetConfigRequest.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void GetConfigRequest::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1beta1.GetConfigRequest.name)
}

inline const GetConfigRequest* GetConfigRequest::internal_default_instance() {
  return &GetConfigRequest_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetConfigResponse::kServiceAccountFieldNumber;
const int GetConfigResponse::kServiceAccountProjectFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetConfigResponse::GetConfigResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.ml.v1beta1.GetConfigResponse)
}

void GetConfigResponse::InitAsDefaultInstance() {
}

GetConfigResponse::GetConfigResponse(const GetConfigResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.cloud.ml.v1beta1.GetConfigResponse)
}

void GetConfigResponse::SharedCtor() {
  service_account_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  service_account_project_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

GetConfigResponse::~GetConfigResponse() {
  // @@protoc_insertion_point(destructor:google.cloud.ml.v1beta1.GetConfigResponse)
  SharedDtor();
}

void GetConfigResponse::SharedDtor() {
  service_account_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void GetConfigResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetConfigResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GetConfigResponse_descriptor_;
}

const GetConfigResponse& GetConfigResponse::default_instance() {
  protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2fproject_5fservice_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<GetConfigResponse> GetConfigResponse_default_instance_;

GetConfigResponse* GetConfigResponse::New(::google::protobuf::Arena* arena) const {
  GetConfigResponse* n = new GetConfigResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetConfigResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.ml.v1beta1.GetConfigResponse)
  service_account_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  service_account_project_ = GOOGLE_LONGLONG(0);
}

bool GetConfigResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.ml.v1beta1.GetConfigResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string service_account = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_service_account()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->service_account().data(), this->service_account().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.cloud.ml.v1beta1.GetConfigResponse.service_account"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_service_account_project;
        break;
      }

      // optional int64 service_account_project = 2;
      case 2: {
        if (tag == 16) {
         parse_service_account_project:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &service_account_project_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.cloud.ml.v1beta1.GetConfigResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.ml.v1beta1.GetConfigResponse)
  return false;
#undef DO_
}

void GetConfigResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.ml.v1beta1.GetConfigResponse)
  // optional string service_account = 1;
  if (this->service_account().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->service_account().data(), this->service_account().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.ml.v1beta1.GetConfigResponse.service_account");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->service_account(), output);
  }

  // optional int64 service_account_project = 2;
  if (this->service_account_project() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->service_account_project(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.cloud.ml.v1beta1.GetConfigResponse)
}

::google::protobuf::uint8* GetConfigResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.ml.v1beta1.GetConfigResponse)
  // optional string service_account = 1;
  if (this->service_account().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->service_account().data(), this->service_account().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.ml.v1beta1.GetConfigResponse.service_account");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->service_account(), target);
  }

  // optional int64 service_account_project = 2;
  if (this->service_account_project() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->service_account_project(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.ml.v1beta1.GetConfigResponse)
  return target;
}

size_t GetConfigResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.ml.v1beta1.GetConfigResponse)
  size_t total_size = 0;

  // optional string service_account = 1;
  if (this->service_account().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->service_account());
  }

  // optional int64 service_account_project = 2;
  if (this->service_account_project() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->service_account_project());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetConfigResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.ml.v1beta1.GetConfigResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const GetConfigResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GetConfigResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.ml.v1beta1.GetConfigResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.ml.v1beta1.GetConfigResponse)
    UnsafeMergeFrom(*source);
  }
}

void GetConfigResponse::MergeFrom(const GetConfigResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.ml.v1beta1.GetConfigResponse)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void GetConfigResponse::UnsafeMergeFrom(const GetConfigResponse& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.service_account().size() > 0) {

    service_account_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.service_account_);
  }
  if (from.service_account_project() != 0) {
    set_service_account_project(from.service_account_project());
  }
}

void GetConfigResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.ml.v1beta1.GetConfigResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetConfigResponse::CopyFrom(const GetConfigResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.ml.v1beta1.GetConfigResponse)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool GetConfigResponse::IsInitialized() const {

  return true;
}

void GetConfigResponse::Swap(GetConfigResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetConfigResponse::InternalSwap(GetConfigResponse* other) {
  service_account_.Swap(&other->service_account_);
  std::swap(service_account_project_, other->service_account_project_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GetConfigResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GetConfigResponse_descriptor_;
  metadata.reflection = GetConfigResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetConfigResponse

// optional string service_account = 1;
void GetConfigResponse::clear_service_account() {
  service_account_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& GetConfigResponse::service_account() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1beta1.GetConfigResponse.service_account)
  return service_account_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void GetConfigResponse::set_service_account(const ::std::string& value) {
  
  service_account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.ml.v1beta1.GetConfigResponse.service_account)
}
void GetConfigResponse::set_service_account(const char* value) {
  
  service_account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.ml.v1beta1.GetConfigResponse.service_account)
}
void GetConfigResponse::set_service_account(const char* value, size_t size) {
  
  service_account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.ml.v1beta1.GetConfigResponse.service_account)
}
::std::string* GetConfigResponse::mutable_service_account() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1beta1.GetConfigResponse.service_account)
  return service_account_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* GetConfigResponse::release_service_account() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1beta1.GetConfigResponse.service_account)
  
  return service_account_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void GetConfigResponse::set_allocated_service_account(::std::string* service_account) {
  if (service_account != NULL) {
    
  } else {
    
  }
  service_account_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service_account);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1beta1.GetConfigResponse.service_account)
}

// optional int64 service_account_project = 2;
void GetConfigResponse::clear_service_account_project() {
  service_account_project_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 GetConfigResponse::service_account_project() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1beta1.GetConfigResponse.service_account_project)
  return service_account_project_;
}
void GetConfigResponse::set_service_account_project(::google::protobuf::int64 value) {
  
  service_account_project_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.ml.v1beta1.GetConfigResponse.service_account_project)
}

inline const GetConfigResponse* GetConfigResponse::internal_default_instance() {
  return &GetConfigResponse_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1beta1
}  // namespace ml
}  // namespace cloud
}  // namespace google

// @@protoc_insertion_point(global_scope)
