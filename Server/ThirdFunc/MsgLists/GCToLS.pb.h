// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GCToLS.proto

#ifndef PROTOBUF_GCToLS_2eproto__INCLUDED
#define PROTOBUF_GCToLS_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace GCToLS {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_GCToLS_2eproto();
void protobuf_AssignDesc_GCToLS_2eproto();
void protobuf_ShutdownFile_GCToLS_2eproto();

class AskLogin;

enum MsgID {
  eMsgToLSFromGC_Begin = 40960,
  eMsgToLSFromGC_AskLogin = 40961,
  eMsgToLSFromGC_End = 40970
};
bool MsgID_IsValid(int value);
const MsgID MsgID_MIN = eMsgToLSFromGC_Begin;
const MsgID MsgID_MAX = eMsgToLSFromGC_End;
const int MsgID_ARRAYSIZE = MsgID_MAX + 1;

const ::google::protobuf::EnumDescriptor* MsgID_descriptor();
inline const ::std::string& MsgID_Name(MsgID value) {
  return ::google::protobuf::internal::NameOfEnum(
    MsgID_descriptor(), value);
}
inline bool MsgID_Parse(
    const ::std::string& name, MsgID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MsgID>(
    MsgID_descriptor(), name, value);
}
// ===================================================================

class AskLogin : public ::google::protobuf::Message {
 public:
  AskLogin();
  virtual ~AskLogin();

  AskLogin(const AskLogin& from);

  inline AskLogin& operator=(const AskLogin& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AskLogin& default_instance();

  void Swap(AskLogin* other);

  // implements Message ----------------------------------------------

  AskLogin* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AskLogin& from);
  void MergeFrom(const AskLogin& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .GCToLS.MsgID msgid = 1 [default = eMsgToLSFromGC_AskLogin];
  inline bool has_msgid() const;
  inline void clear_msgid();
  static const int kMsgidFieldNumber = 1;
  inline ::GCToLS::MsgID msgid() const;
  inline void set_msgid(::GCToLS::MsgID value);

  // optional uint32 platform = 2;
  inline bool has_platform() const;
  inline void clear_platform();
  static const int kPlatformFieldNumber = 2;
  inline ::google::protobuf::uint32 platform() const;
  inline void set_platform(::google::protobuf::uint32 value);

  // optional string uin = 3;
  inline bool has_uin() const;
  inline void clear_uin();
  static const int kUinFieldNumber = 3;
  inline const ::std::string& uin() const;
  inline void set_uin(const ::std::string& value);
  inline void set_uin(const char* value);
  inline void set_uin(const char* value, size_t size);
  inline ::std::string* mutable_uin();
  inline ::std::string* release_uin();
  inline void set_allocated_uin(::std::string* uin);

  // optional string sessionid = 4;
  inline bool has_sessionid() const;
  inline void clear_sessionid();
  static const int kSessionidFieldNumber = 4;
  inline const ::std::string& sessionid() const;
  inline void set_sessionid(const ::std::string& value);
  inline void set_sessionid(const char* value);
  inline void set_sessionid(const char* value, size_t size);
  inline ::std::string* mutable_sessionid();
  inline ::std::string* release_sessionid();
  inline void set_allocated_sessionid(::std::string* sessionid);

  // @@protoc_insertion_point(class_scope:GCToLS.AskLogin)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_platform();
  inline void clear_has_platform();
  inline void set_has_uin();
  inline void clear_has_uin();
  inline void set_has_sessionid();
  inline void clear_has_sessionid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int msgid_;
  ::google::protobuf::uint32 platform_;
  ::std::string* uin_;
  ::std::string* sessionid_;
  friend void  protobuf_AddDesc_GCToLS_2eproto();
  friend void protobuf_AssignDesc_GCToLS_2eproto();
  friend void protobuf_ShutdownFile_GCToLS_2eproto();

  void InitAsDefaultInstance();
  static AskLogin* default_instance_;
};
// ===================================================================


// ===================================================================

// AskLogin

// optional .GCToLS.MsgID msgid = 1 [default = eMsgToLSFromGC_AskLogin];
inline bool AskLogin::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AskLogin::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AskLogin::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AskLogin::clear_msgid() {
  msgid_ = 40961;
  clear_has_msgid();
}
inline ::GCToLS::MsgID AskLogin::msgid() const {
  // @@protoc_insertion_point(field_get:GCToLS.AskLogin.msgid)
  return static_cast< ::GCToLS::MsgID >(msgid_);
}
inline void AskLogin::set_msgid(::GCToLS::MsgID value) {
  assert(::GCToLS::MsgID_IsValid(value));
  set_has_msgid();
  msgid_ = value;
  // @@protoc_insertion_point(field_set:GCToLS.AskLogin.msgid)
}

// optional uint32 platform = 2;
inline bool AskLogin::has_platform() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AskLogin::set_has_platform() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AskLogin::clear_has_platform() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AskLogin::clear_platform() {
  platform_ = 0u;
  clear_has_platform();
}
inline ::google::protobuf::uint32 AskLogin::platform() const {
  // @@protoc_insertion_point(field_get:GCToLS.AskLogin.platform)
  return platform_;
}
inline void AskLogin::set_platform(::google::protobuf::uint32 value) {
  set_has_platform();
  platform_ = value;
  // @@protoc_insertion_point(field_set:GCToLS.AskLogin.platform)
}

// optional string uin = 3;
inline bool AskLogin::has_uin() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AskLogin::set_has_uin() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AskLogin::clear_has_uin() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AskLogin::clear_uin() {
  if (uin_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uin_->clear();
  }
  clear_has_uin();
}
inline const ::std::string& AskLogin::uin() const {
  // @@protoc_insertion_point(field_get:GCToLS.AskLogin.uin)
  return *uin_;
}
inline void AskLogin::set_uin(const ::std::string& value) {
  set_has_uin();
  if (uin_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uin_ = new ::std::string;
  }
  uin_->assign(value);
  // @@protoc_insertion_point(field_set:GCToLS.AskLogin.uin)
}
inline void AskLogin::set_uin(const char* value) {
  set_has_uin();
  if (uin_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uin_ = new ::std::string;
  }
  uin_->assign(value);
  // @@protoc_insertion_point(field_set_char:GCToLS.AskLogin.uin)
}
inline void AskLogin::set_uin(const char* value, size_t size) {
  set_has_uin();
  if (uin_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uin_ = new ::std::string;
  }
  uin_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:GCToLS.AskLogin.uin)
}
inline ::std::string* AskLogin::mutable_uin() {
  set_has_uin();
  if (uin_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uin_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:GCToLS.AskLogin.uin)
  return uin_;
}
inline ::std::string* AskLogin::release_uin() {
  clear_has_uin();
  if (uin_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = uin_;
    uin_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AskLogin::set_allocated_uin(::std::string* uin) {
  if (uin_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete uin_;
  }
  if (uin) {
    set_has_uin();
    uin_ = uin;
  } else {
    clear_has_uin();
    uin_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:GCToLS.AskLogin.uin)
}

// optional string sessionid = 4;
inline bool AskLogin::has_sessionid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AskLogin::set_has_sessionid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AskLogin::clear_has_sessionid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AskLogin::clear_sessionid() {
  if (sessionid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sessionid_->clear();
  }
  clear_has_sessionid();
}
inline const ::std::string& AskLogin::sessionid() const {
  // @@protoc_insertion_point(field_get:GCToLS.AskLogin.sessionid)
  return *sessionid_;
}
inline void AskLogin::set_sessionid(const ::std::string& value) {
  set_has_sessionid();
  if (sessionid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sessionid_ = new ::std::string;
  }
  sessionid_->assign(value);
  // @@protoc_insertion_point(field_set:GCToLS.AskLogin.sessionid)
}
inline void AskLogin::set_sessionid(const char* value) {
  set_has_sessionid();
  if (sessionid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sessionid_ = new ::std::string;
  }
  sessionid_->assign(value);
  // @@protoc_insertion_point(field_set_char:GCToLS.AskLogin.sessionid)
}
inline void AskLogin::set_sessionid(const char* value, size_t size) {
  set_has_sessionid();
  if (sessionid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sessionid_ = new ::std::string;
  }
  sessionid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:GCToLS.AskLogin.sessionid)
}
inline ::std::string* AskLogin::mutable_sessionid() {
  set_has_sessionid();
  if (sessionid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sessionid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:GCToLS.AskLogin.sessionid)
  return sessionid_;
}
inline ::std::string* AskLogin::release_sessionid() {
  clear_has_sessionid();
  if (sessionid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = sessionid_;
    sessionid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AskLogin::set_allocated_sessionid(::std::string* sessionid) {
  if (sessionid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete sessionid_;
  }
  if (sessionid) {
    set_has_sessionid();
    sessionid_ = sessionid;
  } else {
    clear_has_sessionid();
    sessionid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:GCToLS.AskLogin.sessionid)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace GCToLS

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::GCToLS::MsgID> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::GCToLS::MsgID>() {
  return ::GCToLS::MsgID_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GCToLS_2eproto__INCLUDED
