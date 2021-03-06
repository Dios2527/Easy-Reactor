// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: echoMsg.proto

#ifndef PROTOBUF_echoMsg_2eproto__INCLUDED
#define PROTOBUF_echoMsg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace echo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_echoMsg_2eproto();
void protobuf_AssignDesc_echoMsg_2eproto();
void protobuf_ShutdownFile_echoMsg_2eproto();

class EchoString;

// ===================================================================

class EchoString : public ::google::protobuf::Message {
 public:
  EchoString();
  virtual ~EchoString();

  EchoString(const EchoString& from);

  inline EchoString& operator=(const EchoString& from) {
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
  static const EchoString& default_instance();

  void Swap(EchoString* other);

  // implements Message ----------------------------------------------

  EchoString* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EchoString& from);
  void MergeFrom(const EchoString& from);
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

  // required string content = 1;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 1;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const char* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  inline void set_allocated_content(::std::string* content);

  // required int32 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:echo.EchoString)
 private:
  inline void set_has_content();
  inline void clear_has_content();
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* content_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_AddDesc_echoMsg_2eproto();
  friend void protobuf_AssignDesc_echoMsg_2eproto();
  friend void protobuf_ShutdownFile_echoMsg_2eproto();

  void InitAsDefaultInstance();
  static EchoString* default_instance_;
};
// ===================================================================


// ===================================================================

// EchoString

// required string content = 1;
inline bool EchoString::has_content() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EchoString::set_has_content() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EchoString::clear_has_content() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EchoString::clear_content() {
  if (content_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    content_->clear();
  }
  clear_has_content();
}
inline const ::std::string& EchoString::content() const {
  // @@protoc_insertion_point(field_get:echo.EchoString.content)
  return *content_;
}
inline void EchoString::set_content(const ::std::string& value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    content_ = new ::std::string;
  }
  content_->assign(value);
  // @@protoc_insertion_point(field_set:echo.EchoString.content)
}
inline void EchoString::set_content(const char* value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    content_ = new ::std::string;
  }
  content_->assign(value);
  // @@protoc_insertion_point(field_set_char:echo.EchoString.content)
}
inline void EchoString::set_content(const char* value, size_t size) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    content_ = new ::std::string;
  }
  content_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:echo.EchoString.content)
}
inline ::std::string* EchoString::mutable_content() {
  set_has_content();
  if (content_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    content_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:echo.EchoString.content)
  return content_;
}
inline ::std::string* EchoString::release_content() {
  clear_has_content();
  if (content_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = content_;
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void EchoString::set_allocated_content(::std::string* content) {
  if (content_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete content_;
  }
  if (content) {
    set_has_content();
    content_ = content;
  } else {
    clear_has_content();
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:echo.EchoString.content)
}

// required int32 id = 2;
inline bool EchoString::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void EchoString::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void EchoString::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void EchoString::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 EchoString::id() const {
  // @@protoc_insertion_point(field_get:echo.EchoString.id)
  return id_;
}
inline void EchoString::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:echo.EchoString.id)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace echo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_echoMsg_2eproto__INCLUDED
