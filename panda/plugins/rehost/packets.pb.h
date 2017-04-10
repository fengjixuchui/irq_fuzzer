// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packets.proto

#ifndef PROTOBUF_packets_2eproto__INCLUDED
#define PROTOBUF_packets_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace autoemu {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_packets_2eproto();
void protobuf_AssignDesc_packets_2eproto();
void protobuf_ShutdownFile_packets_2eproto();

class SymbolTable;
class SymbolTable_Symbol;
class MemoryAccess;
class OldMemoryAccesses;
class SubCalls;

enum MemoryAccess_AccessType {
  MemoryAccess_AccessType_READ = 0,
  MemoryAccess_AccessType_WRITE = 1
};
bool MemoryAccess_AccessType_IsValid(int value);
const MemoryAccess_AccessType MemoryAccess_AccessType_AccessType_MIN = MemoryAccess_AccessType_READ;
const MemoryAccess_AccessType MemoryAccess_AccessType_AccessType_MAX = MemoryAccess_AccessType_WRITE;
const int MemoryAccess_AccessType_AccessType_ARRAYSIZE = MemoryAccess_AccessType_AccessType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MemoryAccess_AccessType_descriptor();
inline const ::std::string& MemoryAccess_AccessType_Name(MemoryAccess_AccessType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MemoryAccess_AccessType_descriptor(), value);
}
inline bool MemoryAccess_AccessType_Parse(
    const ::std::string& name, MemoryAccess_AccessType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MemoryAccess_AccessType>(
    MemoryAccess_AccessType_descriptor(), name, value);
}
enum PacketType {
  SYMBOLS = 0,
  OLD_MEMORY_ACCESSES = 1,
  NEW_MEMORY_ACCESS = 2,
  CALL_TRACE = 3
};
bool PacketType_IsValid(int value);
const PacketType PacketType_MIN = SYMBOLS;
const PacketType PacketType_MAX = CALL_TRACE;
const int PacketType_ARRAYSIZE = PacketType_MAX + 1;

const ::google::protobuf::EnumDescriptor* PacketType_descriptor();
inline const ::std::string& PacketType_Name(PacketType value) {
  return ::google::protobuf::internal::NameOfEnum(
    PacketType_descriptor(), value);
}
inline bool PacketType_Parse(
    const ::std::string& name, PacketType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PacketType>(
    PacketType_descriptor(), name, value);
}
// ===================================================================

class SymbolTable_Symbol : public ::google::protobuf::Message {
 public:
  SymbolTable_Symbol();
  virtual ~SymbolTable_Symbol();

  SymbolTable_Symbol(const SymbolTable_Symbol& from);

  inline SymbolTable_Symbol& operator=(const SymbolTable_Symbol& from) {
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
  static const SymbolTable_Symbol& default_instance();

  void Swap(SymbolTable_Symbol* other);

  // implements Message ----------------------------------------------

  SymbolTable_Symbol* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SymbolTable_Symbol& from);
  void MergeFrom(const SymbolTable_Symbol& from);
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

  // required uint64 address = 1;
  inline bool has_address() const;
  inline void clear_address();
  static const int kAddressFieldNumber = 1;
  inline ::google::protobuf::uint64 address() const;
  inline void set_address(::google::protobuf::uint64 value);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:autoemu.SymbolTable.Symbol)
 private:
  inline void set_has_address();
  inline void clear_has_address();
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 address_;
  ::std::string* name_;
  friend void  protobuf_AddDesc_packets_2eproto();
  friend void protobuf_AssignDesc_packets_2eproto();
  friend void protobuf_ShutdownFile_packets_2eproto();

  void InitAsDefaultInstance();
  static SymbolTable_Symbol* default_instance_;
};
// -------------------------------------------------------------------

class SymbolTable : public ::google::protobuf::Message {
 public:
  SymbolTable();
  virtual ~SymbolTable();

  SymbolTable(const SymbolTable& from);

  inline SymbolTable& operator=(const SymbolTable& from) {
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
  static const SymbolTable& default_instance();

  void Swap(SymbolTable* other);

  // implements Message ----------------------------------------------

  SymbolTable* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SymbolTable& from);
  void MergeFrom(const SymbolTable& from);
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

  typedef SymbolTable_Symbol Symbol;

  // accessors -------------------------------------------------------

  // repeated .autoemu.SymbolTable.Symbol symbols = 1;
  inline int symbols_size() const;
  inline void clear_symbols();
  static const int kSymbolsFieldNumber = 1;
  inline const ::autoemu::SymbolTable_Symbol& symbols(int index) const;
  inline ::autoemu::SymbolTable_Symbol* mutable_symbols(int index);
  inline ::autoemu::SymbolTable_Symbol* add_symbols();
  inline const ::google::protobuf::RepeatedPtrField< ::autoemu::SymbolTable_Symbol >&
      symbols() const;
  inline ::google::protobuf::RepeatedPtrField< ::autoemu::SymbolTable_Symbol >*
      mutable_symbols();

  // @@protoc_insertion_point(class_scope:autoemu.SymbolTable)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::autoemu::SymbolTable_Symbol > symbols_;
  friend void  protobuf_AddDesc_packets_2eproto();
  friend void protobuf_AssignDesc_packets_2eproto();
  friend void protobuf_ShutdownFile_packets_2eproto();

  void InitAsDefaultInstance();
  static SymbolTable* default_instance_;
};
// -------------------------------------------------------------------

class MemoryAccess : public ::google::protobuf::Message {
 public:
  MemoryAccess();
  virtual ~MemoryAccess();

  MemoryAccess(const MemoryAccess& from);

  inline MemoryAccess& operator=(const MemoryAccess& from) {
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
  static const MemoryAccess& default_instance();

  void Swap(MemoryAccess* other);

  // implements Message ----------------------------------------------

  MemoryAccess* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MemoryAccess& from);
  void MergeFrom(const MemoryAccess& from);
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

  typedef MemoryAccess_AccessType AccessType;
  static const AccessType READ = MemoryAccess_AccessType_READ;
  static const AccessType WRITE = MemoryAccess_AccessType_WRITE;
  static inline bool AccessType_IsValid(int value) {
    return MemoryAccess_AccessType_IsValid(value);
  }
  static const AccessType AccessType_MIN =
    MemoryAccess_AccessType_AccessType_MIN;
  static const AccessType AccessType_MAX =
    MemoryAccess_AccessType_AccessType_MAX;
  static const int AccessType_ARRAYSIZE =
    MemoryAccess_AccessType_AccessType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AccessType_descriptor() {
    return MemoryAccess_AccessType_descriptor();
  }
  static inline const ::std::string& AccessType_Name(AccessType value) {
    return MemoryAccess_AccessType_Name(value);
  }
  static inline bool AccessType_Parse(const ::std::string& name,
      AccessType* value) {
    return MemoryAccess_AccessType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required uint64 address = 1;
  inline bool has_address() const;
  inline void clear_address();
  static const int kAddressFieldNumber = 1;
  inline ::google::protobuf::uint64 address() const;
  inline void set_address(::google::protobuf::uint64 value);

  // required .autoemu.MemoryAccess.AccessType type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::autoemu::MemoryAccess_AccessType type() const;
  inline void set_type(::autoemu::MemoryAccess_AccessType value);

  // optional uint64 value = 3;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 3;
  inline ::google::protobuf::uint64 value() const;
  inline void set_value(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:autoemu.MemoryAccess)
 private:
  inline void set_has_address();
  inline void clear_has_address();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 address_;
  ::google::protobuf::uint64 value_;
  int type_;
  friend void  protobuf_AddDesc_packets_2eproto();
  friend void protobuf_AssignDesc_packets_2eproto();
  friend void protobuf_ShutdownFile_packets_2eproto();

  void InitAsDefaultInstance();
  static MemoryAccess* default_instance_;
};
// -------------------------------------------------------------------

class OldMemoryAccesses : public ::google::protobuf::Message {
 public:
  OldMemoryAccesses();
  virtual ~OldMemoryAccesses();

  OldMemoryAccesses(const OldMemoryAccesses& from);

  inline OldMemoryAccesses& operator=(const OldMemoryAccesses& from) {
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
  static const OldMemoryAccesses& default_instance();

  void Swap(OldMemoryAccesses* other);

  // implements Message ----------------------------------------------

  OldMemoryAccesses* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OldMemoryAccesses& from);
  void MergeFrom(const OldMemoryAccesses& from);
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

  // repeated .autoemu.MemoryAccess accesses = 1;
  inline int accesses_size() const;
  inline void clear_accesses();
  static const int kAccessesFieldNumber = 1;
  inline const ::autoemu::MemoryAccess& accesses(int index) const;
  inline ::autoemu::MemoryAccess* mutable_accesses(int index);
  inline ::autoemu::MemoryAccess* add_accesses();
  inline const ::google::protobuf::RepeatedPtrField< ::autoemu::MemoryAccess >&
      accesses() const;
  inline ::google::protobuf::RepeatedPtrField< ::autoemu::MemoryAccess >*
      mutable_accesses();

  // @@protoc_insertion_point(class_scope:autoemu.OldMemoryAccesses)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::autoemu::MemoryAccess > accesses_;
  friend void  protobuf_AddDesc_packets_2eproto();
  friend void protobuf_AssignDesc_packets_2eproto();
  friend void protobuf_ShutdownFile_packets_2eproto();

  void InitAsDefaultInstance();
  static OldMemoryAccesses* default_instance_;
};
// -------------------------------------------------------------------

class SubCalls : public ::google::protobuf::Message {
 public:
  SubCalls();
  virtual ~SubCalls();

  SubCalls(const SubCalls& from);

  inline SubCalls& operator=(const SubCalls& from) {
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
  static const SubCalls& default_instance();

  void Swap(SubCalls* other);

  // implements Message ----------------------------------------------

  SubCalls* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SubCalls& from);
  void MergeFrom(const SubCalls& from);
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

  // required uint64 address = 1;
  inline bool has_address() const;
  inline void clear_address();
  static const int kAddressFieldNumber = 1;
  inline ::google::protobuf::uint64 address() const;
  inline void set_address(::google::protobuf::uint64 value);

  // repeated .autoemu.SubCalls called = 2;
  inline int called_size() const;
  inline void clear_called();
  static const int kCalledFieldNumber = 2;
  inline const ::autoemu::SubCalls& called(int index) const;
  inline ::autoemu::SubCalls* mutable_called(int index);
  inline ::autoemu::SubCalls* add_called();
  inline const ::google::protobuf::RepeatedPtrField< ::autoemu::SubCalls >&
      called() const;
  inline ::google::protobuf::RepeatedPtrField< ::autoemu::SubCalls >*
      mutable_called();

  // @@protoc_insertion_point(class_scope:autoemu.SubCalls)
 private:
  inline void set_has_address();
  inline void clear_has_address();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 address_;
  ::google::protobuf::RepeatedPtrField< ::autoemu::SubCalls > called_;
  friend void  protobuf_AddDesc_packets_2eproto();
  friend void protobuf_AssignDesc_packets_2eproto();
  friend void protobuf_ShutdownFile_packets_2eproto();

  void InitAsDefaultInstance();
  static SubCalls* default_instance_;
};
// ===================================================================


// ===================================================================

// SymbolTable_Symbol

// required uint64 address = 1;
inline bool SymbolTable_Symbol::has_address() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SymbolTable_Symbol::set_has_address() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SymbolTable_Symbol::clear_has_address() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SymbolTable_Symbol::clear_address() {
  address_ = GOOGLE_ULONGLONG(0);
  clear_has_address();
}
inline ::google::protobuf::uint64 SymbolTable_Symbol::address() const {
  // @@protoc_insertion_point(field_get:autoemu.SymbolTable.Symbol.address)
  return address_;
}
inline void SymbolTable_Symbol::set_address(::google::protobuf::uint64 value) {
  set_has_address();
  address_ = value;
  // @@protoc_insertion_point(field_set:autoemu.SymbolTable.Symbol.address)
}

// required string name = 2;
inline bool SymbolTable_Symbol::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SymbolTable_Symbol::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SymbolTable_Symbol::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SymbolTable_Symbol::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& SymbolTable_Symbol::name() const {
  // @@protoc_insertion_point(field_get:autoemu.SymbolTable.Symbol.name)
  return *name_;
}
inline void SymbolTable_Symbol::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:autoemu.SymbolTable.Symbol.name)
}
inline void SymbolTable_Symbol::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:autoemu.SymbolTable.Symbol.name)
}
inline void SymbolTable_Symbol::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:autoemu.SymbolTable.Symbol.name)
}
inline ::std::string* SymbolTable_Symbol::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:autoemu.SymbolTable.Symbol.name)
  return name_;
}
inline ::std::string* SymbolTable_Symbol::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void SymbolTable_Symbol::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:autoemu.SymbolTable.Symbol.name)
}

// -------------------------------------------------------------------

// SymbolTable

// repeated .autoemu.SymbolTable.Symbol symbols = 1;
inline int SymbolTable::symbols_size() const {
  return symbols_.size();
}
inline void SymbolTable::clear_symbols() {
  symbols_.Clear();
}
inline const ::autoemu::SymbolTable_Symbol& SymbolTable::symbols(int index) const {
  // @@protoc_insertion_point(field_get:autoemu.SymbolTable.symbols)
  return symbols_.Get(index);
}
inline ::autoemu::SymbolTable_Symbol* SymbolTable::mutable_symbols(int index) {
  // @@protoc_insertion_point(field_mutable:autoemu.SymbolTable.symbols)
  return symbols_.Mutable(index);
}
inline ::autoemu::SymbolTable_Symbol* SymbolTable::add_symbols() {
  // @@protoc_insertion_point(field_add:autoemu.SymbolTable.symbols)
  return symbols_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::autoemu::SymbolTable_Symbol >&
SymbolTable::symbols() const {
  // @@protoc_insertion_point(field_list:autoemu.SymbolTable.symbols)
  return symbols_;
}
inline ::google::protobuf::RepeatedPtrField< ::autoemu::SymbolTable_Symbol >*
SymbolTable::mutable_symbols() {
  // @@protoc_insertion_point(field_mutable_list:autoemu.SymbolTable.symbols)
  return &symbols_;
}

// -------------------------------------------------------------------

// MemoryAccess

// required uint64 address = 1;
inline bool MemoryAccess::has_address() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MemoryAccess::set_has_address() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MemoryAccess::clear_has_address() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MemoryAccess::clear_address() {
  address_ = GOOGLE_ULONGLONG(0);
  clear_has_address();
}
inline ::google::protobuf::uint64 MemoryAccess::address() const {
  // @@protoc_insertion_point(field_get:autoemu.MemoryAccess.address)
  return address_;
}
inline void MemoryAccess::set_address(::google::protobuf::uint64 value) {
  set_has_address();
  address_ = value;
  // @@protoc_insertion_point(field_set:autoemu.MemoryAccess.address)
}

// required .autoemu.MemoryAccess.AccessType type = 2;
inline bool MemoryAccess::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MemoryAccess::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MemoryAccess::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MemoryAccess::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::autoemu::MemoryAccess_AccessType MemoryAccess::type() const {
  // @@protoc_insertion_point(field_get:autoemu.MemoryAccess.type)
  return static_cast< ::autoemu::MemoryAccess_AccessType >(type_);
}
inline void MemoryAccess::set_type(::autoemu::MemoryAccess_AccessType value) {
  assert(::autoemu::MemoryAccess_AccessType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:autoemu.MemoryAccess.type)
}

// optional uint64 value = 3;
inline bool MemoryAccess::has_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MemoryAccess::set_has_value() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MemoryAccess::clear_has_value() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MemoryAccess::clear_value() {
  value_ = GOOGLE_ULONGLONG(0);
  clear_has_value();
}
inline ::google::protobuf::uint64 MemoryAccess::value() const {
  // @@protoc_insertion_point(field_get:autoemu.MemoryAccess.value)
  return value_;
}
inline void MemoryAccess::set_value(::google::protobuf::uint64 value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:autoemu.MemoryAccess.value)
}

// -------------------------------------------------------------------

// OldMemoryAccesses

// repeated .autoemu.MemoryAccess accesses = 1;
inline int OldMemoryAccesses::accesses_size() const {
  return accesses_.size();
}
inline void OldMemoryAccesses::clear_accesses() {
  accesses_.Clear();
}
inline const ::autoemu::MemoryAccess& OldMemoryAccesses::accesses(int index) const {
  // @@protoc_insertion_point(field_get:autoemu.OldMemoryAccesses.accesses)
  return accesses_.Get(index);
}
inline ::autoemu::MemoryAccess* OldMemoryAccesses::mutable_accesses(int index) {
  // @@protoc_insertion_point(field_mutable:autoemu.OldMemoryAccesses.accesses)
  return accesses_.Mutable(index);
}
inline ::autoemu::MemoryAccess* OldMemoryAccesses::add_accesses() {
  // @@protoc_insertion_point(field_add:autoemu.OldMemoryAccesses.accesses)
  return accesses_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::autoemu::MemoryAccess >&
OldMemoryAccesses::accesses() const {
  // @@protoc_insertion_point(field_list:autoemu.OldMemoryAccesses.accesses)
  return accesses_;
}
inline ::google::protobuf::RepeatedPtrField< ::autoemu::MemoryAccess >*
OldMemoryAccesses::mutable_accesses() {
  // @@protoc_insertion_point(field_mutable_list:autoemu.OldMemoryAccesses.accesses)
  return &accesses_;
}

// -------------------------------------------------------------------

// SubCalls

// required uint64 address = 1;
inline bool SubCalls::has_address() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SubCalls::set_has_address() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SubCalls::clear_has_address() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SubCalls::clear_address() {
  address_ = GOOGLE_ULONGLONG(0);
  clear_has_address();
}
inline ::google::protobuf::uint64 SubCalls::address() const {
  // @@protoc_insertion_point(field_get:autoemu.SubCalls.address)
  return address_;
}
inline void SubCalls::set_address(::google::protobuf::uint64 value) {
  set_has_address();
  address_ = value;
  // @@protoc_insertion_point(field_set:autoemu.SubCalls.address)
}

// repeated .autoemu.SubCalls called = 2;
inline int SubCalls::called_size() const {
  return called_.size();
}
inline void SubCalls::clear_called() {
  called_.Clear();
}
inline const ::autoemu::SubCalls& SubCalls::called(int index) const {
  // @@protoc_insertion_point(field_get:autoemu.SubCalls.called)
  return called_.Get(index);
}
inline ::autoemu::SubCalls* SubCalls::mutable_called(int index) {
  // @@protoc_insertion_point(field_mutable:autoemu.SubCalls.called)
  return called_.Mutable(index);
}
inline ::autoemu::SubCalls* SubCalls::add_called() {
  // @@protoc_insertion_point(field_add:autoemu.SubCalls.called)
  return called_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::autoemu::SubCalls >&
SubCalls::called() const {
  // @@protoc_insertion_point(field_list:autoemu.SubCalls.called)
  return called_;
}
inline ::google::protobuf::RepeatedPtrField< ::autoemu::SubCalls >*
SubCalls::mutable_called() {
  // @@protoc_insertion_point(field_mutable_list:autoemu.SubCalls.called)
  return &called_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace autoemu

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::autoemu::MemoryAccess_AccessType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::autoemu::MemoryAccess_AccessType>() {
  return ::autoemu::MemoryAccess_AccessType_descriptor();
}
template <> struct is_proto_enum< ::autoemu::PacketType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::autoemu::PacketType>() {
  return ::autoemu::PacketType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_packets_2eproto__INCLUDED
