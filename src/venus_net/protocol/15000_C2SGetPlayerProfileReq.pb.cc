// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 15000_C2SGetPlayerProfileReq.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "15000_C2SGetPlayerProfileReq.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Protocol {

namespace {

const ::google::protobuf::Descriptor* C2SGetPlayerProfileReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  C2SGetPlayerProfileReq_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_15000_5fC2SGetPlayerProfileReq_2eproto() {
  protobuf_AddDesc_15000_5fC2SGetPlayerProfileReq_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "15000_C2SGetPlayerProfileReq.proto");
  GOOGLE_CHECK(file != NULL);
  C2SGetPlayerProfileReq_descriptor_ = file->message_type(0);
  static const int C2SGetPlayerProfileReq_offsets_[1] = {
  };
  C2SGetPlayerProfileReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      C2SGetPlayerProfileReq_descriptor_,
      C2SGetPlayerProfileReq::default_instance_,
      C2SGetPlayerProfileReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(C2SGetPlayerProfileReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(C2SGetPlayerProfileReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(C2SGetPlayerProfileReq));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_15000_5fC2SGetPlayerProfileReq_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    C2SGetPlayerProfileReq_descriptor_, &C2SGetPlayerProfileReq::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_15000_5fC2SGetPlayerProfileReq_2eproto() {
  delete C2SGetPlayerProfileReq::default_instance_;
  delete C2SGetPlayerProfileReq_reflection_;
}

void protobuf_AddDesc_15000_5fC2SGetPlayerProfileReq_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\"15000_C2SGetPlayerProfileReq.proto\022\010Pr"
    "otocol\"\030\n\026C2SGetPlayerProfileReq", 72);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "15000_C2SGetPlayerProfileReq.proto", &protobuf_RegisterTypes);
  C2SGetPlayerProfileReq::default_instance_ = new C2SGetPlayerProfileReq();
  C2SGetPlayerProfileReq::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_15000_5fC2SGetPlayerProfileReq_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_15000_5fC2SGetPlayerProfileReq_2eproto {
  StaticDescriptorInitializer_15000_5fC2SGetPlayerProfileReq_2eproto() {
    protobuf_AddDesc_15000_5fC2SGetPlayerProfileReq_2eproto();
  }
} static_descriptor_initializer_15000_5fC2SGetPlayerProfileReq_2eproto_;

// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

C2SGetPlayerProfileReq::C2SGetPlayerProfileReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void C2SGetPlayerProfileReq::InitAsDefaultInstance() {
}

C2SGetPlayerProfileReq::C2SGetPlayerProfileReq(const C2SGetPlayerProfileReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void C2SGetPlayerProfileReq::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

C2SGetPlayerProfileReq::~C2SGetPlayerProfileReq() {
  SharedDtor();
}

void C2SGetPlayerProfileReq::SharedDtor() {
  if (this != default_instance_) {
  }
}

void C2SGetPlayerProfileReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* C2SGetPlayerProfileReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return C2SGetPlayerProfileReq_descriptor_;
}

const C2SGetPlayerProfileReq& C2SGetPlayerProfileReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_15000_5fC2SGetPlayerProfileReq_2eproto();
  return *default_instance_;
}

C2SGetPlayerProfileReq* C2SGetPlayerProfileReq::default_instance_ = NULL;

C2SGetPlayerProfileReq* C2SGetPlayerProfileReq::New() const {
  return new C2SGetPlayerProfileReq;
}

void C2SGetPlayerProfileReq::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool C2SGetPlayerProfileReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void C2SGetPlayerProfileReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* C2SGetPlayerProfileReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int C2SGetPlayerProfileReq::ByteSize() const {
  int total_size = 0;

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void C2SGetPlayerProfileReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const C2SGetPlayerProfileReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const C2SGetPlayerProfileReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void C2SGetPlayerProfileReq::MergeFrom(const C2SGetPlayerProfileReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void C2SGetPlayerProfileReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void C2SGetPlayerProfileReq::CopyFrom(const C2SGetPlayerProfileReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool C2SGetPlayerProfileReq::IsInitialized() const {

  return true;
}

void C2SGetPlayerProfileReq::Swap(C2SGetPlayerProfileReq* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata C2SGetPlayerProfileReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = C2SGetPlayerProfileReq_descriptor_;
  metadata.reflection = C2SGetPlayerProfileReq_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)