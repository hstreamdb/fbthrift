/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/forward_compatibility_types.h"
#include "src/gen-cpp2/forward_compatibility_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "src/gen-cpp2/forward_compatibility_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits< ::cpp2::OldStructure>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "features") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_MAP;
  }
}
void TccStructTraits< ::cpp2::NewStructure>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "features") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_MAP;
  }
}
void TccStructTraits< ::cpp2::NewStructure2>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "features") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_MAP;
  }
}
void TccStructTraits< ::cpp2::NewStructureNested>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "lst") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "mp") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "s") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_SET;
  }
}
void TccStructTraits< ::cpp2::NewStructureNestedField>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "f") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

OldStructure::OldStructure(apache::thrift::FragileConstructor, std::map<int16_t, double> features__arg) :
    features(std::move(features__arg)) {
  __isset.features = true;
}

void OldStructure::__clear() {
  // clear all fields
  features.clear();
  __isset = {};
}

bool OldStructure::operator==(const OldStructure& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.features == rhs.features)) {
    return false;
  }
  return true;
}

bool OldStructure::operator<(const OldStructure& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.features == rhs.features)) {
    return lhs.features < rhs.features;
  }
  return false;
}

const std::map<int16_t, double>& OldStructure::get_features() const& {
  return features;
}

std::map<int16_t, double> OldStructure::get_features() && {
  return std::move(features);
}


void swap(OldStructure& a, OldStructure& b) {
  using ::std::swap;
  swap(a.features, b.features);
  swap(a.__isset, b.__isset);
}

template void OldStructure::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t OldStructure::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t OldStructure::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t OldStructure::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void OldStructure::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t OldStructure::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t OldStructure::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t OldStructure::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void OldStructure::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t OldStructure::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t OldStructure::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t OldStructure::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

NewStructure::NewStructure(apache::thrift::FragileConstructor, std::map<int16_t, double> features__arg) :
    features(std::move(features__arg)) {
  __isset.features = true;
}

void NewStructure::__clear() {
  // clear all fields
  features.clear();
  __isset = {};
}

bool NewStructure::operator==(const NewStructure& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.features == rhs.features)) {
    return false;
  }
  return true;
}

bool NewStructure::operator<(const NewStructure& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.features == rhs.features)) {
    return lhs.features < rhs.features;
  }
  return false;
}

const std::map<int16_t, double>& NewStructure::get_features() const& {
  return features;
}

std::map<int16_t, double> NewStructure::get_features() && {
  return std::move(features);
}


void swap(NewStructure& a, NewStructure& b) {
  using ::std::swap;
  swap(a.features, b.features);
  swap(a.__isset, b.__isset);
}

template void NewStructure::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t NewStructure::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t NewStructure::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t NewStructure::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void NewStructure::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t NewStructure::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t NewStructure::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t NewStructure::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void NewStructure::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t NewStructure::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t NewStructure::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t NewStructure::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

NewStructure2::NewStructure2(apache::thrift::FragileConstructor,  ::cpp2::FloatFeatures features__arg) :
    features(std::move(features__arg)) {
  __isset.features = true;
}

void NewStructure2::__clear() {
  // clear all fields
  features.clear();
  __isset = {};
}

bool NewStructure2::operator==(const NewStructure2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.features == rhs.features)) {
    return false;
  }
  return true;
}

const  ::cpp2::FloatFeatures& NewStructure2::get_features() const& {
  return features;
}

 ::cpp2::FloatFeatures NewStructure2::get_features() && {
  return std::move(features);
}


void swap(NewStructure2& a, NewStructure2& b) {
  using ::std::swap;
  swap(a.features, b.features);
  swap(a.__isset, b.__isset);
}

template void NewStructure2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t NewStructure2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t NewStructure2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t NewStructure2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void NewStructure2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t NewStructure2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t NewStructure2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t NewStructure2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void NewStructure2::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t NewStructure2::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t NewStructure2::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t NewStructure2::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

NewStructureNested::NewStructureNested(apache::thrift::FragileConstructor, std::vector< ::cpp2::FloatFeatures> lst__arg, std::map<int16_t,  ::cpp2::FloatFeatures> mp__arg, std::set< ::cpp2::FloatFeatures> s__arg) :
    lst(std::move(lst__arg)),
    mp(std::move(mp__arg)),
    s(std::move(s__arg)) {
  __isset.lst = true;
  __isset.mp = true;
  __isset.s = true;
}

void NewStructureNested::__clear() {
  // clear all fields
  lst.clear();
  mp.clear();
  s.clear();
  __isset = {};
}

bool NewStructureNested::operator==(const NewStructureNested& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.lst == rhs.lst)) {
    return false;
  }
  if (!(lhs.mp == rhs.mp)) {
    return false;
  }
  if (!(lhs.s == rhs.s)) {
    return false;
  }
  return true;
}

const std::vector< ::cpp2::FloatFeatures>& NewStructureNested::get_lst() const& {
  return lst;
}

std::vector< ::cpp2::FloatFeatures> NewStructureNested::get_lst() && {
  return std::move(lst);
}

const std::map<int16_t,  ::cpp2::FloatFeatures>& NewStructureNested::get_mp() const& {
  return mp;
}

std::map<int16_t,  ::cpp2::FloatFeatures> NewStructureNested::get_mp() && {
  return std::move(mp);
}

const std::set< ::cpp2::FloatFeatures>& NewStructureNested::get_s() const& {
  return s;
}

std::set< ::cpp2::FloatFeatures> NewStructureNested::get_s() && {
  return std::move(s);
}


void swap(NewStructureNested& a, NewStructureNested& b) {
  using ::std::swap;
  swap(a.lst, b.lst);
  swap(a.mp, b.mp);
  swap(a.s, b.s);
  swap(a.__isset, b.__isset);
}

template void NewStructureNested::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t NewStructureNested::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t NewStructureNested::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t NewStructureNested::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void NewStructureNested::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t NewStructureNested::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t NewStructureNested::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t NewStructureNested::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void NewStructureNested::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t NewStructureNested::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t NewStructureNested::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t NewStructureNested::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

NewStructureNestedField::NewStructureNestedField(apache::thrift::FragileConstructor,  ::cpp2::NewStructureNested f__arg) :
    f(std::move(f__arg)) {
  __isset.f = true;
}

void NewStructureNestedField::__clear() {
  // clear all fields
  ::apache::thrift::Cpp2Ops<  ::cpp2::NewStructureNested>::clear(&f);
  __isset = {};
}

bool NewStructureNestedField::operator==(const NewStructureNestedField& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.f == rhs.f)) {
    return false;
  }
  return true;
}

const  ::cpp2::NewStructureNested& NewStructureNestedField::get_f() const& {
  return f;
}

 ::cpp2::NewStructureNested NewStructureNestedField::get_f() && {
  return std::move(f);
}


void swap(NewStructureNestedField& a, NewStructureNestedField& b) {
  using ::std::swap;
  swap(a.f, b.f);
  swap(a.__isset, b.__isset);
}

template void NewStructureNestedField::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t NewStructureNestedField::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t NewStructureNestedField::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t NewStructureNestedField::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void NewStructureNestedField::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t NewStructureNestedField::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t NewStructureNestedField::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t NewStructureNestedField::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void NewStructureNestedField::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t NewStructureNestedField::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t NewStructureNestedField::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t NewStructureNestedField::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

} // cpp2
