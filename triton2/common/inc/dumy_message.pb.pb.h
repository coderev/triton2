// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_dumy_5fmessage_2epb__INCLUDED
#define PROTOBUF_dumy_5fmessage_2epb__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_dumy_5fmessage_2epb();
void protobuf_AssignDesc_dumy_5fmessage_2epb();
void protobuf_ShutdownFile_dumy_5fmessage_2epb();

class _ZN11_CREATE_FILE_NV1_;

// ===================================================================

class _ZN11_CREATE_FILE_NV1_ : public ::google::protobuf::Message {
 public:
  _ZN11_CREATE_FILE_NV1_();
  virtual ~_ZN11_CREATE_FILE_NV1_();
  
  _ZN11_CREATE_FILE_NV1_(const _ZN11_CREATE_FILE_NV1_& from);
  
  inline _ZN11_CREATE_FILE_NV1_& operator=(const _ZN11_CREATE_FILE_NV1_& from) {
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
  static const _ZN11_CREATE_FILE_NV1_& default_instance();
  void Swap(_ZN11_CREATE_FILE_NV1_* other);
  
  // implements Message ----------------------------------------------
  
  _ZN11_CREATE_FILE_NV1_* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const _ZN11_CREATE_FILE_NV1_& from);
  void MergeFrom(const _ZN11_CREATE_FILE_NV1_& from);
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
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional uint32 file = 1;
  inline bool has_file() const;
  inline void clear_file();
  static const int kFileFieldNumber = 1;
  inline ::google::protobuf::uint32 file() const;
  inline void set_file(::google::protobuf::uint32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 file_;
  friend void  protobuf_AddDesc_dumy_5fmessage_2epb();
  friend void protobuf_AssignDesc_dumy_5fmessage_2epb();
  friend void protobuf_ShutdownFile_dumy_5fmessage_2epb();
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static _ZN11_CREATE_FILE_NV1_* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// _ZN11_CREATE_FILE_NV1_

// optional uint32 file = 1;
inline bool _ZN11_CREATE_FILE_NV1_::has_file() const {
  return _has_bit(0);
}
inline void _ZN11_CREATE_FILE_NV1_::clear_file() {
  file_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 _ZN11_CREATE_FILE_NV1_::file() const {
  return file_;
}
inline void _ZN11_CREATE_FILE_NV1_::set_file(::google::protobuf::uint32 value) {
  _set_bit(0);
  file_ = value;
}

#endif  // PROTOBUF_dumy_5fmessage_2epb__INCLUDED
