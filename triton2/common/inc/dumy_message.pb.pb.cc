// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "dumy_message.pb.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format_inl.h>
#ifdef LEAK_CHK_DEBUG_NEW
#include "debug_new.h"
#endif

namespace {

const ::google::protobuf::Descriptor* _ZN11_CREATE_FILE_NV1__descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  _ZN11_CREATE_FILE_NV1__reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_dumy_5fmessage_2epb() {
  protobuf_AddDesc_dumy_5fmessage_2epb();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dumy_message.pb");
  GOOGLE_CHECK(file != NULL);
  _ZN11_CREATE_FILE_NV1__descriptor_ = file->message_type(0);
  static const int _ZN11_CREATE_FILE_NV1__offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(_ZN11_CREATE_FILE_NV1_, file_),
  };
  _ZN11_CREATE_FILE_NV1__reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      _ZN11_CREATE_FILE_NV1__descriptor_,
      _ZN11_CREATE_FILE_NV1_::default_instance_,
      _ZN11_CREATE_FILE_NV1__offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(_ZN11_CREATE_FILE_NV1_, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(_ZN11_CREATE_FILE_NV1_, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(_ZN11_CREATE_FILE_NV1_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dumy_5fmessage_2epb);
}

void protobuf_RegisterTypes() {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    _ZN11_CREATE_FILE_NV1__descriptor_, &_ZN11_CREATE_FILE_NV1_::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_dumy_5fmessage_2epb() {
  delete _ZN11_CREATE_FILE_NV1_::default_instance_;
  delete _ZN11_CREATE_FILE_NV1__reflection_;
}

void protobuf_AddDesc_dumy_5fmessage_2epb() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  #ifndef _NO_PROTOBUF_STR_
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017dumy_message.pb\"&\n\026_ZN11_CREATE_FILE_N"
    "V1_\022\014\n\004file\030\001 \001(\r", 57);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dumy_message.pb", &protobuf_RegisterTypes);
  #endif
  _ZN11_CREATE_FILE_NV1_::default_instance_ = new _ZN11_CREATE_FILE_NV1_();
  _ZN11_CREATE_FILE_NV1_::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dumy_5fmessage_2epb);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dumy_5fmessage_2epb {
  StaticDescriptorInitializer_dumy_5fmessage_2epb() {
    protobuf_AddDesc_dumy_5fmessage_2epb();
  }
} static_descriptor_initializer_dumy_5fmessage_2epb_;


// ===================================================================

#ifndef _MSC_VER
const int _ZN11_CREATE_FILE_NV1_::kFileFieldNumber;
#endif  // !_MSC_VER

_ZN11_CREATE_FILE_NV1_::_ZN11_CREATE_FILE_NV1_()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void _ZN11_CREATE_FILE_NV1_::InitAsDefaultInstance() {}

_ZN11_CREATE_FILE_NV1_::_ZN11_CREATE_FILE_NV1_(const _ZN11_CREATE_FILE_NV1_& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void _ZN11_CREATE_FILE_NV1_::SharedCtor() {
  _cached_size_ = 0;
  file_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

_ZN11_CREATE_FILE_NV1_::~_ZN11_CREATE_FILE_NV1_() {
  SharedDtor();
}

void _ZN11_CREATE_FILE_NV1_::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* _ZN11_CREATE_FILE_NV1_::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return _ZN11_CREATE_FILE_NV1__descriptor_;
}

const _ZN11_CREATE_FILE_NV1_& _ZN11_CREATE_FILE_NV1_::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dumy_5fmessage_2epb();  return *default_instance_;
}

_ZN11_CREATE_FILE_NV1_* _ZN11_CREATE_FILE_NV1_::default_instance_ = NULL;

_ZN11_CREATE_FILE_NV1_* _ZN11_CREATE_FILE_NV1_::New() const {
  return new _ZN11_CREATE_FILE_NV1_;
}

void _ZN11_CREATE_FILE_NV1_::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    file_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool _ZN11_CREATE_FILE_NV1_::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormat::GetTagFieldNumber(tag)) {
      // optional uint32 file = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormat::ReadUInt32(
              input, &file_));
        _set_bit(0);
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormat::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void _ZN11_CREATE_FILE_NV1_::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    _ZN11_CREATE_FILE_NV1_::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional uint32 file = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::WriteUInt32(1, this->file(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* _ZN11_CREATE_FILE_NV1_::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 file = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormat::WriteUInt32ToArray(1, this->file(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int _ZN11_CREATE_FILE_NV1_::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 file = 1;
    if (has_file()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::UInt32Size(
          this->file());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void _ZN11_CREATE_FILE_NV1_::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const _ZN11_CREATE_FILE_NV1_* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const _ZN11_CREATE_FILE_NV1_*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void _ZN11_CREATE_FILE_NV1_::MergeFrom(const _ZN11_CREATE_FILE_NV1_& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_file(from.file());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void _ZN11_CREATE_FILE_NV1_::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void _ZN11_CREATE_FILE_NV1_::CopyFrom(const _ZN11_CREATE_FILE_NV1_& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void _ZN11_CREATE_FILE_NV1_::Swap(_ZN11_CREATE_FILE_NV1_* other) {
  if (other != this) {
    std::swap(file_, other->file_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

bool _ZN11_CREATE_FILE_NV1_::IsInitialized() const {
  
  return true;
}

const ::google::protobuf::Descriptor* _ZN11_CREATE_FILE_NV1_::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* _ZN11_CREATE_FILE_NV1_::GetReflection() const {
  protobuf_AssignDescriptorsOnce();
  return _ZN11_CREATE_FILE_NV1__reflection_;
}
