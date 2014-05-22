#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_TestMain
#include <TestMain.h>
#endif
#ifndef INCLUDED_TestSuite
#include <TestSuite.h>
#endif
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ICoverageTestResultClient
#include <massive/munit/ICoverageTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_TestRunner
#include <massive/munit/TestRunner.h>
#endif
#ifndef INCLUDED_massive_munit_TestSuite
#include <massive/munit/TestSuite.h>
#endif
#ifndef INCLUDED_massive_munit_async_IAsyncDelegateObserver
#include <massive/munit/async/IAsyncDelegateObserver.h>
#endif
#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_HTTPClient
#include <massive/munit/client/HTTPClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_PrintClientBase
#include <massive/munit/client/PrintClientBase.h>
#endif
#ifndef INCLUDED_massive_munit_client_RichPrintClient
#include <massive/munit/client/RichPrintClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_SummaryReportClient
#include <massive/munit/client/SummaryReportClient.h>
#endif

Void TestMain_obj::__construct()
{
HX_STACK_FRAME("TestMain","new",0xc77e5c3d,"TestMain.new","TestMain.hx",21,0xdc28b9d3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	Array< ::Dynamic > suites = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(suites,"suites");
	HX_STACK_LINE(23)
	suites->push(hx::ClassOf< ::TestSuite >());
	HX_STACK_LINE(29)
	::massive::munit::client::RichPrintClient client = ::massive::munit::client::RichPrintClient_obj::__new();		HX_STACK_VAR(client,"client");
	HX_STACK_LINE(30)
	::massive::munit::client::SummaryReportClient _g = ::massive::munit::client::SummaryReportClient_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	::massive::munit::client::HTTPClient httpClient = ::massive::munit::client::HTTPClient_obj::__new(_g,null(),null());		HX_STACK_VAR(httpClient,"httpClient");
	HX_STACK_LINE(33)
	::massive::munit::TestRunner runner = ::massive::munit::TestRunner_obj::__new(client);		HX_STACK_VAR(runner,"runner");
	HX_STACK_LINE(34)
	runner->addResultClient(httpClient);
	HX_STACK_LINE(37)
	runner->completionHandler = this->completionHandler_dyn();
	HX_STACK_LINE(38)
	runner->run(suites);
}
;
	return null();
}

//TestMain_obj::~TestMain_obj() { }

Dynamic TestMain_obj::__CreateEmpty() { return  new TestMain_obj; }
hx::ObjectPtr< TestMain_obj > TestMain_obj::__new()
{  hx::ObjectPtr< TestMain_obj > result = new TestMain_obj();
	result->__construct();
	return result;}

Dynamic TestMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestMain_obj > result = new TestMain_obj();
	result->__construct();
	return result;}

Void TestMain_obj::completionHandler( bool successful){
{
		HX_STACK_FRAME("TestMain","completionHandler",0xd5539cab,"TestMain.completionHandler","TestMain.hx",47,0xdc28b9d3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(successful,"successful")
		HX_STACK_LINE(47)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(54)
			::Sys_obj::exit((int)0);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestMain_obj,completionHandler,(void))

Void TestMain_obj::main( ){
{
		HX_STACK_FRAME("TestMain","main",0xc6660dbc,"TestMain.main","TestMain.hx",18,0xdc28b9d3)
		HX_STACK_LINE(18)
		::TestMain_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TestMain_obj,main,(void))


TestMain_obj::TestMain_obj()
{
}

Dynamic TestMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { return completionHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TestMain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("completionHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestMain_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestMain_obj::__mClass,"__mClass");
};

#endif

Class TestMain_obj::__mClass;

void TestMain_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("TestMain"), hx::TCanCast< TestMain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void TestMain_obj::__boot()
{
}

