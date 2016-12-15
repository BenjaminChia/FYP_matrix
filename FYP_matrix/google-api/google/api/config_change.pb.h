// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/config_change.proto

#ifndef PROTOBUF_google_2fapi_2fconfig_5fchange_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fconfig_5fchange_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace api {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fapi_2fconfig_5fchange_2eproto();
void protobuf_InitDefaults_google_2fapi_2fconfig_5fchange_2eproto();
void protobuf_AssignDesc_google_2fapi_2fconfig_5fchange_2eproto();
void protobuf_ShutdownFile_google_2fapi_2fconfig_5fchange_2eproto();

class Advice;
class ConfigChange;

enum ChangeType {
  CHANGE_TYPE_UNSPECIFIED = 0,
  ADDED = 1,
  REMOVED = 2,
  MODIFIED = 3,
  ChangeType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ChangeType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ChangeType_IsValid(int value);
const ChangeType ChangeType_MIN = CHANGE_TYPE_UNSPECIFIED;
const ChangeType ChangeType_MAX = MODIFIED;
const int ChangeType_ARRAYSIZE = ChangeType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ChangeType_descriptor();
inline const ::std::string& ChangeType_Name(ChangeType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ChangeType_descriptor(), value);
}
inline bool ChangeType_Parse(
    const ::std::string& name, ChangeType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ChangeType>(
    ChangeType_descriptor(), name, value);
}
// ===================================================================

class ConfigChange : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.ConfigChange) */ {
 public:
  ConfigChange();
  virtual ~ConfigChange();

  ConfigChange(const ConfigChange& from);

  inline ConfigChange& operator=(const ConfigChange& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ConfigChange& default_instance();

  static const ConfigChange* internal_default_instance();

  void Swap(ConfigChange* other);

  // implements Message ----------------------------------------------

  inline ConfigChange* New() const { return New(NULL); }

  ConfigChange* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConfigChange& from);
  void MergeFrom(const ConfigChange& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ConfigChange* other);
  void UnsafeMergeFrom(const ConfigChange& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string element = 1;
  void clear_element();
  static const int kElementFieldNumber = 1;
  const ::std::string& element() const;
  void set_element(const ::std::string& value);
  void set_element(const char* value);
  void set_element(const char* value, size_t size);
  ::std::string* mutable_element();
  ::std::string* release_element();
  void set_allocated_element(::std::string* element);

  // optional string old_value = 2;
  void clear_old_value();
  static const int kOldValueFieldNumber = 2;
  const ::std::string& old_value() const;
  void set_old_value(const ::std::string& value);
  void set_old_value(const char* value);
  void set_old_value(const char* value, size_t size);
  ::std::string* mutable_old_value();
  ::std::string* release_old_value();
  void set_allocated_old_value(::std::string* old_value);

  // optional string new_value = 3;
  void clear_new_value();
  static const int kNewValueFieldNumber = 3;
  const ::std::string& new_value() const;
  void set_new_value(const ::std::string& value);
  void set_new_value(const char* value);
  void set_new_value(const char* value, size_t size);
  ::std::string* mutable_new_value();
  ::std::string* release_new_value();
  void set_allocated_new_value(::std::string* new_value);

  // optional .google.api.ChangeType change_type = 4;
  void clear_change_type();
  static const int kChangeTypeFieldNumber = 4;
  ::google::api::ChangeType change_type() const;
  void set_change_type(::google::api::ChangeType value);

  // repeated .google.api.Advice advices = 5;
  int advices_size() const;
  void clear_advices();
  static const int kAdvicesFieldNumber = 5;
  const ::google::api::Advice& advices(int index) const;
  ::google::api::Advice* mutable_advices(int index);
  ::google::api::Advice* add_advices();
  ::google::protobuf::RepeatedPtrField< ::google::api::Advice >*
      mutable_advices();
  const ::google::protobuf::RepeatedPtrField< ::google::api::Advice >&
      advices() const;

  // @@protoc_insertion_point(class_scope:google.api.ConfigChange)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::api::Advice > advices_;
  ::google::protobuf::internal::ArenaStringPtr element_;
  ::google::protobuf::internal::ArenaStringPtr old_value_;
  ::google::protobuf::internal::ArenaStringPtr new_value_;
  int change_type_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fapi_2fconfig_5fchange_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fapi_2fconfig_5fchange_2eproto_impl();
  friend void protobuf_AssignDesc_google_2fapi_2fconfig_5fchange_2eproto();
  friend void protobuf_ShutdownFile_google_2fapi_2fconfig_5fchange_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<ConfigChange> ConfigChange_default_instance_;

// -------------------------------------------------------------------

class Advice : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.Advice) */ {
 public:
  Advice();
  virtual ~Advice();

  Advice(const Advice& from);

  inline Advice& operator=(const Advice& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Advice& default_instance();

  static const Advice* internal_default_instance();

  void Swap(Advice* other);

  // implements Message ----------------------------------------------

  inline Advice* New() const { return New(NULL); }

  Advice* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Advice& from);
  void MergeFrom(const Advice& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Advice* other);
  void UnsafeMergeFrom(const Advice& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string description = 2;
  void clear_description();
  static const int kDescriptionFieldNumber = 2;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // @@protoc_insertion_point(class_scope:google.api.Advice)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fapi_2fconfig_5fchange_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fapi_2fconfig_5fchange_2eproto_impl();
  friend void protobuf_AssignDesc_google_2fapi_2fconfig_5fchange_2eproto();
  friend void protobuf_ShutdownFile_google_2fapi_2fconfig_5fchange_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Advice> Advice_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ConfigChange

// optional string element = 1;
inline void ConfigChange::clear_element() {
  element_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ConfigChange::element() const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.element)
  return element_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConfigChange::set_element(const ::std::string& value) {
  
  element_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.ConfigChange.element)
}
inline void ConfigChange::set_element(const char* value) {
  
  element_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.ConfigChange.element)
}
inline void ConfigChange::set_element(const char* value, size_t size) {
  
  element_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.ConfigChange.element)
}
inline ::std::string* ConfigChange::mutable_element() {
  
  // @@protoc_insertion_point(field_mutable:google.api.ConfigChange.element)
  return element_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConfigChange::release_element() {
  // @@protoc_insertion_point(field_release:google.api.ConfigChange.element)
  
  return element_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConfigChange::set_allocated_element(::std::string* element) {
  if (element != NULL) {
    
  } else {
    
  }
  element_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), element);
  // @@protoc_insertion_point(field_set_allocated:google.api.ConfigChange.element)
}

// optional string old_value = 2;
inline void ConfigChange::clear_old_value() {
  old_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ConfigChange::old_value() const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.old_value)
  return old_value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConfigChange::set_old_value(const ::std::string& value) {
  
  old_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.ConfigChange.old_value)
}
inline void ConfigChange::set_old_value(const char* value) {
  
  old_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.ConfigChange.old_value)
}
inline void ConfigChange::set_old_value(const char* value, size_t size) {
  
  old_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.ConfigChange.old_value)
}
inline ::std::string* ConfigChange::mutable_old_value() {
  
  // @@protoc_insertion_point(field_mutable:google.api.ConfigChange.old_value)
  return old_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConfigChange::release_old_value() {
  // @@protoc_insertion_point(field_release:google.api.ConfigChange.old_value)
  
  return old_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConfigChange::set_allocated_old_value(::std::string* old_value) {
  if (old_value != NULL) {
    
  } else {
    
  }
  old_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), old_value);
  // @@protoc_insertion_point(field_set_allocated:google.api.ConfigChange.old_value)
}

// optional string new_value = 3;
inline void ConfigChange::clear_new_value() {
  new_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ConfigChange::new_value() const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.new_value)
  return new_value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConfigChange::set_new_value(const ::std::string& value) {
  
  new_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.ConfigChange.new_value)
}
inline void ConfigChange::set_new_value(const char* value) {
  
  new_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.ConfigChange.new_value)
}
inline void ConfigChange::set_new_value(const char* value, size_t size) {
  
  new_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.ConfigChange.new_value)
}
inline ::std::string* ConfigChange::mutable_new_value() {
  
  // @@protoc_insertion_point(field_mutable:google.api.ConfigChange.new_value)
  return new_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConfigChange::release_new_value() {
  // @@protoc_insertion_point(field_release:google.api.ConfigChange.new_value)
  
  return new_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConfigChange::set_allocated_new_value(::std::string* new_value) {
  if (new_value != NULL) {
    
  } else {
    
  }
  new_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), new_value);
  // @@protoc_insertion_point(field_set_allocated:google.api.ConfigChange.new_value)
}

// optional .google.api.ChangeType change_type = 4;
inline void ConfigChange::clear_change_type() {
  change_type_ = 0;
}
inline ::google::api::ChangeType ConfigChange::change_type() const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.change_type)
  return static_cast< ::google::api::ChangeType >(change_type_);
}
inline void ConfigChange::set_change_type(::google::api::ChangeType value) {
  
  change_type_ = value;
  // @@protoc_insertion_point(field_set:google.api.ConfigChange.change_type)
}

// repeated .google.api.Advice advices = 5;
inline int ConfigChange::advices_size() const {
  return advices_.size();
}
inline void ConfigChange::clear_advices() {
  advices_.Clear();
}
inline const ::google::api::Advice& ConfigChange::advices(int index) const {
  // @@protoc_insertion_point(field_get:google.api.ConfigChange.advices)
  return advices_.Get(index);
}
inline ::google::api::Advice* ConfigChange::mutable_advices(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.ConfigChange.advices)
  return advices_.Mutable(index);
}
inline ::google::api::Advice* ConfigChange::add_advices() {
  // @@protoc_insertion_point(field_add:google.api.ConfigChange.advices)
  return advices_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::Advice >*
ConfigChange::mutable_advices() {
  // @@protoc_insertion_point(field_mutable_list:google.api.ConfigChange.advices)
  return &advices_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::Advice >&
ConfigChange::advices() const {
  // @@protoc_insertion_point(field_list:google.api.ConfigChange.advices)
  return advices_;
}

inline const ConfigChange* ConfigChange::internal_default_instance() {
  return &ConfigChange_default_instance_.get();
}
// -------------------------------------------------------------------

// Advice

// optional string description = 2;
inline void Advice::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Advice::description() const {
  // @@protoc_insertion_point(field_get:google.api.Advice.description)
  return description_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Advice::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.Advice.description)
}
inline void Advice::set_description(const char* value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Advice.description)
}
inline void Advice::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Advice.description)
}
inline ::std::string* Advice::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:google.api.Advice.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Advice::release_description() {
  // @@protoc_insertion_point(field_release:google.api.Advice.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Advice::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:google.api.Advice.description)
}

inline const Advice* Advice::internal_default_instance() {
  return &Advice_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::api::ChangeType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::api::ChangeType>() {
  return ::google::api::ChangeType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fconfig_5fchange_2eproto__INCLUDED