// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fishSerialize.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "fishSerialize.pb.h"

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

namespace fishSerialize {

namespace {

const ::google::protobuf::Descriptor* FishEntry_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FishEntry_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* FishEntry_fTypeEnum_descriptor_ = NULL;
const ::google::protobuf::Descriptor* FishList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FishList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_fishSerialize_2eproto() {
  protobuf_AddDesc_fishSerialize_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "fishSerialize.proto");
  GOOGLE_CHECK(file != NULL);
  FishEntry_descriptor_ = file->message_type(0);
  static const int FishEntry_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FishEntry, ftype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FishEntry, fspecies_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FishEntry, fframe_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FishEntry, xloc_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FishEntry, yloc_),
  };
  FishEntry_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FishEntry_descriptor_,
      FishEntry::default_instance_,
      FishEntry_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FishEntry, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FishEntry, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FishEntry));
  FishEntry_fTypeEnum_descriptor_ = FishEntry_descriptor_->enum_type(0);
  FishList_descriptor_ = file->message_type(1);
  static const int FishList_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FishList, towopen_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FishList, fish_),
  };
  FishList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FishList_descriptor_,
      FishList::default_instance_,
      FishList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FishList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FishList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FishList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_fishSerialize_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FishEntry_descriptor_, &FishEntry::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FishList_descriptor_, &FishList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_fishSerialize_2eproto() {
  delete FishEntry::default_instance_;
  delete FishEntry_reflection_;
  delete FishList::default_instance_;
  delete FishList_reflection_;
}

void protobuf_AddDesc_fishSerialize_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023fishSerialize.proto\022\rfishSerialize\"\251\001\n"
    "\tFishEntry\0221\n\005fType\030\001 \002(\0162\".fishSerializ"
    "e.FishEntry.fTypeEnum\022\020\n\010fSpecies\030\002 \001(\t\022"
    "\016\n\006fFrame\030\003 \002(\005\022\014\n\004xLoc\030\004 \001(\002\022\014\n\004yLoc\030\005 "
    "\001(\002\"+\n\tfTypeEnum\022\t\n\005ROUND\020\000\022\010\n\004FLAT\020\001\022\t\n"
    "\005SKATE\020\002\"I\n\010FishList\022\025\n\007towOpen\030\001 \001(\010:\004t"
    "rue\022&\n\004fish\030\002 \003(\0132\030.fishSerialize.FishEn"
    "try", 283);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "fishSerialize.proto", &protobuf_RegisterTypes);
  FishEntry::default_instance_ = new FishEntry();
  FishList::default_instance_ = new FishList();
  FishEntry::default_instance_->InitAsDefaultInstance();
  FishList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_fishSerialize_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_fishSerialize_2eproto {
  StaticDescriptorInitializer_fishSerialize_2eproto() {
    protobuf_AddDesc_fishSerialize_2eproto();
  }
} static_descriptor_initializer_fishSerialize_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* FishEntry_fTypeEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FishEntry_fTypeEnum_descriptor_;
}
bool FishEntry_fTypeEnum_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const FishEntry_fTypeEnum FishEntry::ROUND;
const FishEntry_fTypeEnum FishEntry::FLAT;
const FishEntry_fTypeEnum FishEntry::SKATE;
const FishEntry_fTypeEnum FishEntry::fTypeEnum_MIN;
const FishEntry_fTypeEnum FishEntry::fTypeEnum_MAX;
const int FishEntry::fTypeEnum_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int FishEntry::kFTypeFieldNumber;
const int FishEntry::kFSpeciesFieldNumber;
const int FishEntry::kFFrameFieldNumber;
const int FishEntry::kXLocFieldNumber;
const int FishEntry::kYLocFieldNumber;
#endif  // !_MSC_VER

FishEntry::FishEntry()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fishSerialize.FishEntry)
}

void FishEntry::InitAsDefaultInstance() {
}

FishEntry::FishEntry(const FishEntry& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:fishSerialize.FishEntry)
}

void FishEntry::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ftype_ = 0;
  fspecies_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fframe_ = 0;
  xloc_ = 0;
  yloc_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FishEntry::~FishEntry() {
  // @@protoc_insertion_point(destructor:fishSerialize.FishEntry)
  SharedDtor();
}

void FishEntry::SharedDtor() {
  if (fspecies_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete fspecies_;
  }
  if (this != default_instance_) {
  }
}

void FishEntry::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FishEntry::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FishEntry_descriptor_;
}

const FishEntry& FishEntry::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_fishSerialize_2eproto();
  return *default_instance_;
}

FishEntry* FishEntry::default_instance_ = NULL;

FishEntry* FishEntry::New() const {
  return new FishEntry;
}

void FishEntry::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<FishEntry*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(ftype_, yloc_);
    if (has_fspecies()) {
      if (fspecies_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        fspecies_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FishEntry::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fishSerialize.FishEntry)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .fishSerialize.FishEntry.fTypeEnum fType = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::fishSerialize::FishEntry_fTypeEnum_IsValid(value)) {
            set_ftype(static_cast< ::fishSerialize::FishEntry_fTypeEnum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_fSpecies;
        break;
      }

      // optional string fSpecies = 2;
      case 2: {
        if (tag == 18) {
         parse_fSpecies:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_fspecies()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->fspecies().data(), this->fspecies().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "fspecies");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_fFrame;
        break;
      }

      // required int32 fFrame = 3;
      case 3: {
        if (tag == 24) {
         parse_fFrame:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &fframe_)));
          set_has_fframe();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(37)) goto parse_xLoc;
        break;
      }

      // optional float xLoc = 4;
      case 4: {
        if (tag == 37) {
         parse_xLoc:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &xloc_)));
          set_has_xloc();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(45)) goto parse_yLoc;
        break;
      }

      // optional float yLoc = 5;
      case 5: {
        if (tag == 45) {
         parse_yLoc:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &yloc_)));
          set_has_yloc();
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fishSerialize.FishEntry)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fishSerialize.FishEntry)
  return false;
#undef DO_
}

void FishEntry::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fishSerialize.FishEntry)
  // required .fishSerialize.FishEntry.fTypeEnum fType = 1;
  if (has_ftype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->ftype(), output);
  }

  // optional string fSpecies = 2;
  if (has_fspecies()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->fspecies().data(), this->fspecies().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "fspecies");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->fspecies(), output);
  }

  // required int32 fFrame = 3;
  if (has_fframe()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->fframe(), output);
  }

  // optional float xLoc = 4;
  if (has_xloc()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->xloc(), output);
  }

  // optional float yLoc = 5;
  if (has_yloc()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->yloc(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:fishSerialize.FishEntry)
}

::google::protobuf::uint8* FishEntry::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:fishSerialize.FishEntry)
  // required .fishSerialize.FishEntry.fTypeEnum fType = 1;
  if (has_ftype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->ftype(), target);
  }

  // optional string fSpecies = 2;
  if (has_fspecies()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->fspecies().data(), this->fspecies().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "fspecies");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->fspecies(), target);
  }

  // required int32 fFrame = 3;
  if (has_fframe()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->fframe(), target);
  }

  // optional float xLoc = 4;
  if (has_xloc()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->xloc(), target);
  }

  // optional float yLoc = 5;
  if (has_yloc()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->yloc(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fishSerialize.FishEntry)
  return target;
}

int FishEntry::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .fishSerialize.FishEntry.fTypeEnum fType = 1;
    if (has_ftype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->ftype());
    }

    // optional string fSpecies = 2;
    if (has_fspecies()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->fspecies());
    }

    // required int32 fFrame = 3;
    if (has_fframe()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->fframe());
    }

    // optional float xLoc = 4;
    if (has_xloc()) {
      total_size += 1 + 4;
    }

    // optional float yLoc = 5;
    if (has_yloc()) {
      total_size += 1 + 4;
    }

  }
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

void FishEntry::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FishEntry* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FishEntry*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FishEntry::MergeFrom(const FishEntry& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ftype()) {
      set_ftype(from.ftype());
    }
    if (from.has_fspecies()) {
      set_fspecies(from.fspecies());
    }
    if (from.has_fframe()) {
      set_fframe(from.fframe());
    }
    if (from.has_xloc()) {
      set_xloc(from.xloc());
    }
    if (from.has_yloc()) {
      set_yloc(from.yloc());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FishEntry::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FishEntry::CopyFrom(const FishEntry& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FishEntry::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000005) != 0x00000005) return false;

  return true;
}

void FishEntry::Swap(FishEntry* other) {
  if (other != this) {
    std::swap(ftype_, other->ftype_);
    std::swap(fspecies_, other->fspecies_);
    std::swap(fframe_, other->fframe_);
    std::swap(xloc_, other->xloc_);
    std::swap(yloc_, other->yloc_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FishEntry::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FishEntry_descriptor_;
  metadata.reflection = FishEntry_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int FishList::kTowOpenFieldNumber;
const int FishList::kFishFieldNumber;
#endif  // !_MSC_VER

FishList::FishList()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fishSerialize.FishList)
}

void FishList::InitAsDefaultInstance() {
}

FishList::FishList(const FishList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:fishSerialize.FishList)
}

void FishList::SharedCtor() {
  _cached_size_ = 0;
  towopen_ = true;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FishList::~FishList() {
  // @@protoc_insertion_point(destructor:fishSerialize.FishList)
  SharedDtor();
}

void FishList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FishList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FishList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FishList_descriptor_;
}

const FishList& FishList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_fishSerialize_2eproto();
  return *default_instance_;
}

FishList* FishList::default_instance_ = NULL;

FishList* FishList::New() const {
  return new FishList;
}

void FishList::Clear() {
  towopen_ = true;
  fish_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FishList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fishSerialize.FishList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool towOpen = 1 [default = true];
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &towopen_)));
          set_has_towopen();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_fish;
        break;
      }

      // repeated .fishSerialize.FishEntry fish = 2;
      case 2: {
        if (tag == 18) {
         parse_fish:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_fish()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_fish;
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fishSerialize.FishList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fishSerialize.FishList)
  return false;
#undef DO_
}

void FishList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fishSerialize.FishList)
  // optional bool towOpen = 1 [default = true];
  if (has_towopen()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->towopen(), output);
  }

  // repeated .fishSerialize.FishEntry fish = 2;
  for (int i = 0; i < this->fish_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->fish(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:fishSerialize.FishList)
}

::google::protobuf::uint8* FishList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:fishSerialize.FishList)
  // optional bool towOpen = 1 [default = true];
  if (has_towopen()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->towopen(), target);
  }

  // repeated .fishSerialize.FishEntry fish = 2;
  for (int i = 0; i < this->fish_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->fish(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fishSerialize.FishList)
  return target;
}

int FishList::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool towOpen = 1 [default = true];
    if (has_towopen()) {
      total_size += 1 + 1;
    }

  }
  // repeated .fishSerialize.FishEntry fish = 2;
  total_size += 1 * this->fish_size();
  for (int i = 0; i < this->fish_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->fish(i));
  }

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

void FishList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FishList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FishList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FishList::MergeFrom(const FishList& from) {
  GOOGLE_CHECK_NE(&from, this);
  fish_.MergeFrom(from.fish_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_towopen()) {
      set_towopen(from.towopen());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FishList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FishList::CopyFrom(const FishList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FishList::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->fish())) return false;
  return true;
}

void FishList::Swap(FishList* other) {
  if (other != this) {
    std::swap(towopen_, other->towopen_);
    fish_.Swap(&other->fish_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FishList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FishList_descriptor_;
  metadata.reflection = FishList_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace fishSerialize

// @@protoc_insertion_point(global_scope)