/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ReturnService.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ReturnService.tcc"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace some { namespace valid { namespace ns {
std::unique_ptr<apache::thrift::AsyncProcessor> ReturnServiceSvIf::getProcessor() {
  return std::make_unique<ReturnServiceAsyncProcessor>(this);
}


void ReturnServiceSvIf::noReturn() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("noReturn");
}

folly::SemiFuture<folly::Unit> ReturnServiceSvIf::semifuture_noReturn() {
  return apache::thrift::detail::si::semifuture([&] {
    return noReturn();
  });
}

folly::Future<folly::Unit> ReturnServiceSvIf::future_noReturn() {
  return apache::thrift::detail::si::future(semifuture_noReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_eb_noReturn(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this]() mutable {
    return future_noReturn();
  });
}

bool ReturnServiceSvIf::boolReturn() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("boolReturn");
}

folly::SemiFuture<bool> ReturnServiceSvIf::semifuture_boolReturn() {
  return apache::thrift::detail::si::semifuture([&] {
    return boolReturn();
  });
}

folly::Future<bool> ReturnServiceSvIf::future_boolReturn() {
  return apache::thrift::detail::si::future(semifuture_boolReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_boolReturn(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_boolReturn();
  });
}

int16_t ReturnServiceSvIf::i16Return() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("i16Return");
}

folly::SemiFuture<int16_t> ReturnServiceSvIf::semifuture_i16Return() {
  return apache::thrift::detail::si::semifuture([&] {
    return i16Return();
  });
}

folly::Future<int16_t> ReturnServiceSvIf::future_i16Return() {
  return apache::thrift::detail::si::future(semifuture_i16Return(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_i16Return(std::unique_ptr<apache::thrift::HandlerCallback<int16_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_i16Return();
  });
}

int32_t ReturnServiceSvIf::i32Return() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("i32Return");
}

folly::SemiFuture<int32_t> ReturnServiceSvIf::semifuture_i32Return() {
  return apache::thrift::detail::si::semifuture([&] {
    return i32Return();
  });
}

folly::Future<int32_t> ReturnServiceSvIf::future_i32Return() {
  return apache::thrift::detail::si::future(semifuture_i32Return(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_i32Return(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_i32Return();
  });
}

int64_t ReturnServiceSvIf::i64Return() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("i64Return");
}

folly::SemiFuture<int64_t> ReturnServiceSvIf::semifuture_i64Return() {
  return apache::thrift::detail::si::semifuture([&] {
    return i64Return();
  });
}

folly::Future<int64_t> ReturnServiceSvIf::future_i64Return() {
  return apache::thrift::detail::si::future(semifuture_i64Return(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_i64Return(std::unique_ptr<apache::thrift::HandlerCallback<int64_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_i64Return();
  });
}

float ReturnServiceSvIf::floatReturn() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("floatReturn");
}

folly::SemiFuture<float> ReturnServiceSvIf::semifuture_floatReturn() {
  return apache::thrift::detail::si::semifuture([&] {
    return floatReturn();
  });
}

folly::Future<float> ReturnServiceSvIf::future_floatReturn() {
  return apache::thrift::detail::si::future(semifuture_floatReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_floatReturn(std::unique_ptr<apache::thrift::HandlerCallback<float>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_floatReturn();
  });
}

double ReturnServiceSvIf::doubleReturn() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("doubleReturn");
}

folly::SemiFuture<double> ReturnServiceSvIf::semifuture_doubleReturn() {
  return apache::thrift::detail::si::semifuture([&] {
    return doubleReturn();
  });
}

folly::Future<double> ReturnServiceSvIf::future_doubleReturn() {
  return apache::thrift::detail::si::future(semifuture_doubleReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_doubleReturn(std::unique_ptr<apache::thrift::HandlerCallback<double>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_doubleReturn();
  });
}

void ReturnServiceSvIf::stringReturn(::std::string& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("stringReturn");
}

folly::SemiFuture<std::unique_ptr<::std::string>> ReturnServiceSvIf::semifuture_stringReturn() {
  return apache::thrift::detail::si::semifuture_returning_uptr([&](::std::string& _return) { stringReturn(_return); });
}

folly::Future<std::unique_ptr<::std::string>> ReturnServiceSvIf::future_stringReturn() {
  return apache::thrift::detail::si::future(semifuture_stringReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_eb_stringReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this]() mutable {
    return future_stringReturn();
  });
}


void ReturnServiceSvIf::binaryReturn(::std::string& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("binaryReturn");
}

folly::SemiFuture<std::unique_ptr<::std::string>> ReturnServiceSvIf::semifuture_binaryReturn() {
  return apache::thrift::detail::si::semifuture_returning_uptr([&](::std::string& _return) { binaryReturn(_return); });
}

folly::Future<std::unique_ptr<::std::string>> ReturnServiceSvIf::future_binaryReturn() {
  return apache::thrift::detail::si::future(semifuture_binaryReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_binaryReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_binaryReturn();
  });
}


void ReturnServiceSvIf::mapReturn(::std::map<::std::string, int64_t>& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mapReturn");
}

folly::SemiFuture<std::unique_ptr<::std::map<::std::string, int64_t>>> ReturnServiceSvIf::semifuture_mapReturn() {
  return apache::thrift::detail::si::semifuture_returning_uptr([&](::std::map<::std::string, int64_t>& _return) { mapReturn(_return); });
}

folly::Future<std::unique_ptr<::std::map<::std::string, int64_t>>> ReturnServiceSvIf::future_mapReturn() {
  return apache::thrift::detail::si::future(semifuture_mapReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_mapReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::map<::std::string, int64_t>>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_mapReturn();
  });
}


 ::some::valid::ns::simpleTypeDef ReturnServiceSvIf::simpleTypedefReturn() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("simpleTypedefReturn");
}

folly::SemiFuture< ::some::valid::ns::simpleTypeDef> ReturnServiceSvIf::semifuture_simpleTypedefReturn() {
  return apache::thrift::detail::si::semifuture([&] {
    return simpleTypedefReturn();
  });
}

folly::Future< ::some::valid::ns::simpleTypeDef> ReturnServiceSvIf::future_simpleTypedefReturn() {
  return apache::thrift::detail::si::future(semifuture_simpleTypedefReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_simpleTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback< ::some::valid::ns::simpleTypeDef>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_simpleTypedefReturn();
  });
}

void ReturnServiceSvIf::complexTypedefReturn( ::some::valid::ns::complexStructTypeDef& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("complexTypedefReturn");
}

folly::SemiFuture<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>> ReturnServiceSvIf::semifuture_complexTypedefReturn() {
  return apache::thrift::detail::si::semifuture_returning_uptr([&]( ::some::valid::ns::complexStructTypeDef& _return) { complexTypedefReturn(_return); });
}

folly::Future<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>> ReturnServiceSvIf::future_complexTypedefReturn() {
  return apache::thrift::detail::si::future(semifuture_complexTypedefReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_complexTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_complexTypedefReturn();
  });
}


void ReturnServiceSvIf::list_mostComplexTypedefReturn(::std::vector< ::some::valid::ns::mostComplexTypeDef>& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("list_mostComplexTypedefReturn");
}

folly::SemiFuture<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>> ReturnServiceSvIf::semifuture_list_mostComplexTypedefReturn() {
  return apache::thrift::detail::si::semifuture_returning_uptr([&](::std::vector< ::some::valid::ns::mostComplexTypeDef>& _return) { list_mostComplexTypedefReturn(_return); });
}

folly::Future<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>> ReturnServiceSvIf::future_list_mostComplexTypedefReturn() {
  return apache::thrift::detail::si::future(semifuture_list_mostComplexTypedefReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_list_mostComplexTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_list_mostComplexTypedefReturn();
  });
}


 ::some::valid::ns::MyEnumA ReturnServiceSvIf::enumReturn() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("enumReturn");
}

folly::SemiFuture< ::some::valid::ns::MyEnumA> ReturnServiceSvIf::semifuture_enumReturn() {
  return apache::thrift::detail::si::semifuture([&] {
    return enumReturn();
  });
}

folly::Future< ::some::valid::ns::MyEnumA> ReturnServiceSvIf::future_enumReturn() {
  return apache::thrift::detail::si::future(semifuture_enumReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_eb_enumReturn(std::unique_ptr<apache::thrift::HandlerCallback< ::some::valid::ns::MyEnumA>> callback) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this]() mutable {
    return future_enumReturn();
  });
}

void ReturnServiceSvIf::list_EnumReturn(::std::vector< ::some::valid::ns::MyEnumA>& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("list_EnumReturn");
}

folly::SemiFuture<std::unique_ptr<::std::vector< ::some::valid::ns::MyEnumA>>> ReturnServiceSvIf::semifuture_list_EnumReturn() {
  return apache::thrift::detail::si::semifuture_returning_uptr([&](::std::vector< ::some::valid::ns::MyEnumA>& _return) { list_EnumReturn(_return); });
}

folly::Future<std::unique_ptr<::std::vector< ::some::valid::ns::MyEnumA>>> ReturnServiceSvIf::future_list_EnumReturn() {
  return apache::thrift::detail::si::future(semifuture_list_EnumReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_eb_list_EnumReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::MyEnumA>>>> callback) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this]() mutable {
    return future_list_EnumReturn();
  });
}


void ReturnServiceSvIf::structReturn( ::some::valid::ns::MyStruct& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("structReturn");
}

folly::SemiFuture<std::unique_ptr< ::some::valid::ns::MyStruct>> ReturnServiceSvIf::semifuture_structReturn() {
  return apache::thrift::detail::si::semifuture_returning_uptr([&]( ::some::valid::ns::MyStruct& _return) { structReturn(_return); });
}

folly::Future<std::unique_ptr< ::some::valid::ns::MyStruct>> ReturnServiceSvIf::future_structReturn() {
  return apache::thrift::detail::si::future(semifuture_structReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_structReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::MyStruct>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_structReturn();
  });
}


void ReturnServiceSvIf::set_StructReturn(::std::set< ::some::valid::ns::MyStruct>& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("set_StructReturn");
}

folly::SemiFuture<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>> ReturnServiceSvIf::semifuture_set_StructReturn() {
  return apache::thrift::detail::si::semifuture_returning_uptr([&](::std::set< ::some::valid::ns::MyStruct>& _return) { set_StructReturn(_return); });
}

folly::Future<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>> ReturnServiceSvIf::future_set_StructReturn() {
  return apache::thrift::detail::si::future(semifuture_set_StructReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_set_StructReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_set_StructReturn();
  });
}


void ReturnServiceSvIf::unionReturn( ::some::valid::ns::ComplexUnion& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("unionReturn");
}

folly::SemiFuture<std::unique_ptr< ::some::valid::ns::ComplexUnion>> ReturnServiceSvIf::semifuture_unionReturn() {
  return apache::thrift::detail::si::semifuture_returning_uptr([&]( ::some::valid::ns::ComplexUnion& _return) { unionReturn(_return); });
}

folly::Future<std::unique_ptr< ::some::valid::ns::ComplexUnion>> ReturnServiceSvIf::future_unionReturn() {
  return apache::thrift::detail::si::future(semifuture_unionReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_eb_unionReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::ComplexUnion>>> callback) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this]() mutable {
    return future_unionReturn();
  });
}


void ReturnServiceSvIf::list_UnionReturn(::std::vector< ::some::valid::ns::ComplexUnion>& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("list_UnionReturn");
}

folly::SemiFuture<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>> ReturnServiceSvIf::semifuture_list_UnionReturn() {
  return apache::thrift::detail::si::semifuture_returning_uptr([&](::std::vector< ::some::valid::ns::ComplexUnion>& _return) { list_UnionReturn(_return); });
}

folly::Future<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>> ReturnServiceSvIf::future_list_UnionReturn() {
  return apache::thrift::detail::si::future(semifuture_list_UnionReturn(), getThreadManager());
}


void ReturnServiceSvIf::async_tm_list_UnionReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_list_UnionReturn();
  });
}


void ReturnServiceSvIf::readDataEb( ::some::valid::ns::IOBuf& /*_return*/, int64_t /*size*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("readDataEb");
}

folly::SemiFuture<std::unique_ptr< ::some::valid::ns::IOBuf>> ReturnServiceSvIf::semifuture_readDataEb(int64_t size) {
  return apache::thrift::detail::si::semifuture_returning_uptr([&]( ::some::valid::ns::IOBuf& _return) { readDataEb(_return, size); });
}

folly::Future<std::unique_ptr< ::some::valid::ns::IOBuf>> ReturnServiceSvIf::future_readDataEb(int64_t size) {
  return apache::thrift::detail::si::future(semifuture_readDataEb(size), getThreadManager());
}


void ReturnServiceSvIf::async_eb_readDataEb(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::IOBuf>>> callback, int64_t size) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, size]() mutable {
    return future_readDataEb(size);
  });
}


void ReturnServiceSvIf::readData( ::some::valid::ns::IOBufPtr& /*_return*/, int64_t /*size*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("readData");
}

folly::SemiFuture<std::unique_ptr< ::some::valid::ns::IOBufPtr>> ReturnServiceSvIf::semifuture_readData(int64_t size) {
  return apache::thrift::detail::si::semifuture_returning_uptr([&]( ::some::valid::ns::IOBufPtr& _return) { readData(_return, size); });
}

folly::Future<std::unique_ptr< ::some::valid::ns::IOBufPtr>> ReturnServiceSvIf::future_readData(int64_t size) {
  return apache::thrift::detail::si::future(semifuture_readData(size), getThreadManager());
}


void ReturnServiceSvIf::async_tm_readData(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::IOBufPtr>>> callback, int64_t size) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_readData(size);
  });
}


bool ReturnServiceSvNull::boolReturn() {
  return 0;
}

int16_t ReturnServiceSvNull::i16Return() {
  return 0;
}

int32_t ReturnServiceSvNull::i32Return() {
  return 0;
}

int64_t ReturnServiceSvNull::i64Return() {
  return 0;
}

float ReturnServiceSvNull::floatReturn() {
  return 0;
}

double ReturnServiceSvNull::doubleReturn() {
  return 0;
}

void ReturnServiceSvNull::binaryReturn(::std::string& /*_return*/) {}

void ReturnServiceSvNull::mapReturn(::std::map<::std::string, int64_t>& /*_return*/) {}

 ::some::valid::ns::simpleTypeDef ReturnServiceSvNull::simpleTypedefReturn() {
  return 0;
}

void ReturnServiceSvNull::complexTypedefReturn( ::some::valid::ns::complexStructTypeDef& /*_return*/) {}

void ReturnServiceSvNull::list_mostComplexTypedefReturn(::std::vector< ::some::valid::ns::mostComplexTypeDef>& /*_return*/) {}

void ReturnServiceSvNull::structReturn( ::some::valid::ns::MyStruct& /*_return*/) {}

void ReturnServiceSvNull::set_StructReturn(::std::set< ::some::valid::ns::MyStruct>& /*_return*/) {}

void ReturnServiceSvNull::list_UnionReturn(::std::vector< ::some::valid::ns::ComplexUnion>& /*_return*/) {}

void ReturnServiceSvNull::readData( ::some::valid::ns::IOBufPtr& /*_return*/, int64_t /*size*/) {}

const char* ReturnServiceAsyncProcessor::getServiceName() {
  return "ReturnService";
}

void ReturnServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<ReturnServiceSvIf>::gen(response.metadata, response.context);
}

void ReturnServiceAsyncProcessor::processSerializedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

std::shared_ptr<folly::RequestContext> ReturnServiceAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

const ReturnServiceAsyncProcessor::ProcessMap& ReturnServiceAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const ReturnServiceAsyncProcessor::ProcessMap ReturnServiceAsyncProcessor::binaryProcessMap_ {
  {"noReturn", &ReturnServiceAsyncProcessor::process_noReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"boolReturn", &ReturnServiceAsyncProcessor::_processInThread_boolReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"i16Return", &ReturnServiceAsyncProcessor::_processInThread_i16Return<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"i32Return", &ReturnServiceAsyncProcessor::_processInThread_i32Return<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"i64Return", &ReturnServiceAsyncProcessor::_processInThread_i64Return<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"floatReturn", &ReturnServiceAsyncProcessor::_processInThread_floatReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"doubleReturn", &ReturnServiceAsyncProcessor::_processInThread_doubleReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"stringReturn", &ReturnServiceAsyncProcessor::process_stringReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"binaryReturn", &ReturnServiceAsyncProcessor::_processInThread_binaryReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mapReturn", &ReturnServiceAsyncProcessor::_processInThread_mapReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"simpleTypedefReturn", &ReturnServiceAsyncProcessor::_processInThread_simpleTypedefReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"complexTypedefReturn", &ReturnServiceAsyncProcessor::_processInThread_complexTypedefReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"list_mostComplexTypedefReturn", &ReturnServiceAsyncProcessor::_processInThread_list_mostComplexTypedefReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"enumReturn", &ReturnServiceAsyncProcessor::process_enumReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"list_EnumReturn", &ReturnServiceAsyncProcessor::process_list_EnumReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"structReturn", &ReturnServiceAsyncProcessor::_processInThread_structReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"set_StructReturn", &ReturnServiceAsyncProcessor::_processInThread_set_StructReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"unionReturn", &ReturnServiceAsyncProcessor::process_unionReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"list_UnionReturn", &ReturnServiceAsyncProcessor::_processInThread_list_UnionReturn<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"readDataEb", &ReturnServiceAsyncProcessor::process_readDataEb<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"readData", &ReturnServiceAsyncProcessor::_processInThread_readData<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const ReturnServiceAsyncProcessor::ProcessMap& ReturnServiceAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const ReturnServiceAsyncProcessor::ProcessMap ReturnServiceAsyncProcessor::compactProcessMap_ {
  {"noReturn", &ReturnServiceAsyncProcessor::process_noReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"boolReturn", &ReturnServiceAsyncProcessor::_processInThread_boolReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"i16Return", &ReturnServiceAsyncProcessor::_processInThread_i16Return<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"i32Return", &ReturnServiceAsyncProcessor::_processInThread_i32Return<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"i64Return", &ReturnServiceAsyncProcessor::_processInThread_i64Return<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"floatReturn", &ReturnServiceAsyncProcessor::_processInThread_floatReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"doubleReturn", &ReturnServiceAsyncProcessor::_processInThread_doubleReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"stringReturn", &ReturnServiceAsyncProcessor::process_stringReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"binaryReturn", &ReturnServiceAsyncProcessor::_processInThread_binaryReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mapReturn", &ReturnServiceAsyncProcessor::_processInThread_mapReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"simpleTypedefReturn", &ReturnServiceAsyncProcessor::_processInThread_simpleTypedefReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"complexTypedefReturn", &ReturnServiceAsyncProcessor::_processInThread_complexTypedefReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"list_mostComplexTypedefReturn", &ReturnServiceAsyncProcessor::_processInThread_list_mostComplexTypedefReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"enumReturn", &ReturnServiceAsyncProcessor::process_enumReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"list_EnumReturn", &ReturnServiceAsyncProcessor::process_list_EnumReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"structReturn", &ReturnServiceAsyncProcessor::_processInThread_structReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"set_StructReturn", &ReturnServiceAsyncProcessor::_processInThread_set_StructReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"unionReturn", &ReturnServiceAsyncProcessor::process_unionReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"list_UnionReturn", &ReturnServiceAsyncProcessor::_processInThread_list_UnionReturn<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"readDataEb", &ReturnServiceAsyncProcessor::process_readDataEb<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"readData", &ReturnServiceAsyncProcessor::_processInThread_readData<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

}}} // some::valid::ns
