#include <hxcpp.h>

#include <sys/net/Socket.h>
#include <sys/net/_Socket/SocketOutput.h>
#include <sys/net/_Socket/SocketInput.h>
#include <sys/net/Host.h>
#include <org/hamcrest/UnsupportedOperationException.h>
#include <org/hamcrest/MissingImplementationException.h>
#include <org/hamcrest/IllegalArgumentException.h>
#include <org/hamcrest/AssertionException.h>
#include <org/hamcrest/Exception.h>
#include <massive/munit/util/Timer.h>
#include <massive/munit/util/MathUtil.h>
#include <massive/munit/client/SummaryReportClient.h>
#include <massive/munit/client/RichPrintClient.h>
#include <massive/munit/client/ExternalPrintClientJS.h>
#include <massive/munit/client/ExternalPrintClient.h>
#include <massive/munit/client/PrintClient.h>
#include <massive/munit/client/PrintClientBase.h>
#include <massive/munit/client/JUnitReportClient.h>
#include <massive/munit/client/URLRequest.h>
#include <massive/munit/client/HTTPClient.h>
#include <massive/munit/client/AbstractTestResultClient.h>
#include <massive/munit/async/MissingAsyncDelegateException.h>
#include <massive/munit/async/AsyncTimeoutException.h>
#include <massive/munit/async/AsyncFactory.h>
#include <massive/munit/async/AsyncDelegate.h>
#include <massive/munit/UnhandledException.h>
#include <massive/munit/TestRunner.h>
#include <massive/munit/async/IAsyncDelegateObserver.h>
#include <massive/munit/TestResultType.h>
#include <massive/munit/TestResult.h>
#include <massive/munit/TestClassHelper.h>
#include <massive/munit/ICoverageTestResultClient.h>
#include <massive/munit/IAdvancedTestResultClient.h>
#include <massive/munit/ITestResultClient.h>
#include <massive/munit/AssertionException.h>
#include <massive/munit/MUnitException.h>
#include <massive/munit/Assert.h>
#include <massive/haxe/util/ReflectUtil.h>
#include <massive/haxe/Exception.h>
#include <haxe/rtti/Meta.h>
#include <haxe/io/Input.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesOutput.h>
#include <haxe/io/Output.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/io/Bytes.h>
#include <haxe/ds/StringMap.h>
#include <haxe/Log.h>
#include <haxe/Http.h>
#include <haxe/CallStack.h>
#include <haxe/StackItem.h>
#include <cpp/vm/Thread.h>
#include <Type.h>
#include <ValueType.h>
#include <TestSuite.h>
#include <massive/munit/TestSuite.h>
#include <TestMain.h>
#include <Sys.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Std.h>
#include <Reflect.h>
#include <IMap.h>
#include <List.h>
#include <Lambda.h>
#include <FNV.h>
#include <EReg.h>
#include <cpp/Lib.h>
#include <Date.h>
#include <BloomFilterTest.h>
#include <BloomFilter.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sys::net::Socket_obj::__register();
::sys::net::_Socket::SocketOutput_obj::__register();
::sys::net::_Socket::SocketInput_obj::__register();
::sys::net::Host_obj::__register();
::org::hamcrest::UnsupportedOperationException_obj::__register();
::org::hamcrest::MissingImplementationException_obj::__register();
::org::hamcrest::IllegalArgumentException_obj::__register();
::org::hamcrest::AssertionException_obj::__register();
::org::hamcrest::Exception_obj::__register();
::massive::munit::util::Timer_obj::__register();
::massive::munit::util::MathUtil_obj::__register();
::massive::munit::client::SummaryReportClient_obj::__register();
::massive::munit::client::RichPrintClient_obj::__register();
::massive::munit::client::ExternalPrintClientJS_obj::__register();
::massive::munit::client::ExternalPrintClient_obj::__register();
::massive::munit::client::PrintClient_obj::__register();
::massive::munit::client::PrintClientBase_obj::__register();
::massive::munit::client::JUnitReportClient_obj::__register();
::massive::munit::client::URLRequest_obj::__register();
::massive::munit::client::HTTPClient_obj::__register();
::massive::munit::client::AbstractTestResultClient_obj::__register();
::massive::munit::async::MissingAsyncDelegateException_obj::__register();
::massive::munit::async::AsyncTimeoutException_obj::__register();
::massive::munit::async::AsyncFactory_obj::__register();
::massive::munit::async::AsyncDelegate_obj::__register();
::massive::munit::UnhandledException_obj::__register();
::massive::munit::TestRunner_obj::__register();
::massive::munit::async::IAsyncDelegateObserver_obj::__register();
::massive::munit::TestResultType_obj::__register();
::massive::munit::TestResult_obj::__register();
::massive::munit::TestClassHelper_obj::__register();
::massive::munit::ICoverageTestResultClient_obj::__register();
::massive::munit::IAdvancedTestResultClient_obj::__register();
::massive::munit::ITestResultClient_obj::__register();
::massive::munit::AssertionException_obj::__register();
::massive::munit::MUnitException_obj::__register();
::massive::munit::Assert_obj::__register();
::massive::haxe::util::ReflectUtil_obj::__register();
::massive::haxe::Exception_obj::__register();
::haxe::rtti::Meta_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesOutput_obj::__register();
::haxe::io::Output_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::Log_obj::__register();
::haxe::Http_obj::__register();
::haxe::CallStack_obj::__register();
::haxe::StackItem_obj::__register();
::cpp::vm::Thread_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::TestSuite_obj::__register();
::massive::munit::TestSuite_obj::__register();
::TestMain_obj::__register();
::Sys_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Reflect_obj::__register();
::IMap_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::FNV_obj::__register();
::EReg_obj::__register();
::cpp::Lib_obj::__register();
::Date_obj::__register();
::BloomFilterTest_obj::__register();
::BloomFilter_obj::__register();
::sys::net::Host_obj::__init__();
::cpp::Lib_obj::__boot();
::EReg_obj::__boot();
::cpp::vm::Thread_obj::__boot();
::haxe::Log_obj::__boot();
::BloomFilter_obj::__boot();
::BloomFilterTest_obj::__boot();
::Date_obj::__boot();
::FNV_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::IMap_obj::__boot();
::Reflect_obj::__boot();
::Std_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Sys_obj::__boot();
::TestMain_obj::__boot();
::massive::munit::TestSuite_obj::__boot();
::TestSuite_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::CallStack_obj::__boot();
::haxe::Http_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Output_obj::__boot();
::haxe::io::BytesOutput_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Input_obj::__boot();
::haxe::rtti::Meta_obj::__boot();
::massive::haxe::Exception_obj::__boot();
::massive::haxe::util::ReflectUtil_obj::__boot();
::massive::munit::Assert_obj::__boot();
::massive::munit::MUnitException_obj::__boot();
::massive::munit::AssertionException_obj::__boot();
::massive::munit::ITestResultClient_obj::__boot();
::massive::munit::IAdvancedTestResultClient_obj::__boot();
::massive::munit::ICoverageTestResultClient_obj::__boot();
::massive::munit::TestClassHelper_obj::__boot();
::massive::munit::TestResult_obj::__boot();
::massive::munit::TestResultType_obj::__boot();
::massive::munit::async::IAsyncDelegateObserver_obj::__boot();
::massive::munit::TestRunner_obj::__boot();
::massive::munit::UnhandledException_obj::__boot();
::massive::munit::async::AsyncDelegate_obj::__boot();
::massive::munit::async::AsyncFactory_obj::__boot();
::massive::munit::async::AsyncTimeoutException_obj::__boot();
::massive::munit::async::MissingAsyncDelegateException_obj::__boot();
::massive::munit::client::AbstractTestResultClient_obj::__boot();
::massive::munit::client::HTTPClient_obj::__boot();
::massive::munit::client::URLRequest_obj::__boot();
::massive::munit::client::JUnitReportClient_obj::__boot();
::massive::munit::client::PrintClientBase_obj::__boot();
::massive::munit::client::PrintClient_obj::__boot();
::massive::munit::client::ExternalPrintClient_obj::__boot();
::massive::munit::client::ExternalPrintClientJS_obj::__boot();
::massive::munit::client::RichPrintClient_obj::__boot();
::massive::munit::client::SummaryReportClient_obj::__boot();
::massive::munit::util::MathUtil_obj::__boot();
::massive::munit::util::Timer_obj::__boot();
::org::hamcrest::Exception_obj::__boot();
::org::hamcrest::AssertionException_obj::__boot();
::org::hamcrest::IllegalArgumentException_obj::__boot();
::org::hamcrest::MissingImplementationException_obj::__boot();
::org::hamcrest::UnsupportedOperationException_obj::__boot();
::sys::net::Host_obj::__boot();
::sys::net::_Socket::SocketInput_obj::__boot();
::sys::net::_Socket::SocketOutput_obj::__boot();
::sys::net::Socket_obj::__boot();
}

