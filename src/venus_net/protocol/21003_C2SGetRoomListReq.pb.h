// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 21003_C2SGetRoomListReq.proto

#ifndef PROTOBUF_21003_5fC2SGetRoomListReq_2eproto__INCLUDED
#define PROTOBUF_21003_5fC2SGetRoomListReq_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

namespace Protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_21003_5fC2SGetRoomListReq_2eproto();
void protobuf_AssignDesc_21003_5fC2SGetRoomListReq_2eproto();
void protobuf_ShutdownFile_21003_5fC2SGetRoomListReq_2eproto();

class C2SGetRoomListReq;

// ===================================================================

class C2SGetRoomListReq : public ::google::protobuf::Message {
 public:
  C2SGetRoomListReq();
  virtual ~C2SGetRoomListReq();

  C2SGetRoomListReq(const C2SGetRoomListReq& from);

  inline C2SGetRoomListReq& operator=(const C2SGetRoomListReq& from) {
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
  static const C2SGetRoomListReq& default_instance();

  void Swap(C2SGetRoomListReq* other);

  // implements Message ----------------------------------------------

  C2SGetRoomListReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const C2SGetRoomListReq& from);
  void MergeFrom(const C2SGetRoomListReq& from);
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

  // @@protoc_insertion_point(class_scope:Protocol.C2SGetRoomListReq)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_21003_5fC2SGetRoomListReq_2eproto();
  friend void protobuf_AssignDesc_21003_5fC2SGetRoomListReq_2eproto();
  friend void protobuf_ShutdownFile_21003_5fC2SGetRoomListReq_2eproto();

  void InitAsDefaultInstance();
  static C2SGetRoomListReq* default_instance_;
};
// ===================================================================


// ===================================================================

// C2SGetRoomListReq


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_21003_5fC2SGetRoomListReq_2eproto__INCLUDED
