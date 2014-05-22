#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_PrintClient
#include <massive/munit/client/PrintClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_PrintClientBase
#include <massive/munit/client/PrintClientBase.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void PrintClient_obj::__construct(Dynamic __o_includeIgnoredReport)
{
HX_STACK_FRAME("massive.munit.client.PrintClient","new",0x365789ae,"massive.munit.client.PrintClient.new","massive/munit/client/PrintClient.hx",79,0x6b1c8b41)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_includeIgnoredReport,"includeIgnoredReport")
Dynamic includeIgnoredReport = __o_includeIgnoredReport.Default(true);
{
	HX_STACK_LINE(80)
	super::__construct(includeIgnoredReport);
	HX_STACK_LINE(81)
	this->id = HX_CSTRING("print");
}
;
	return null();
}

//PrintClient_obj::~PrintClient_obj() { }

Dynamic PrintClient_obj::__CreateEmpty() { return  new PrintClient_obj; }
hx::ObjectPtr< PrintClient_obj > PrintClient_obj::__new(Dynamic __o_includeIgnoredReport)
{  hx::ObjectPtr< PrintClient_obj > result = new PrintClient_obj();
	result->__construct(__o_includeIgnoredReport);
	return result;}

Dynamic PrintClient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PrintClient_obj > result = new PrintClient_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PrintClient_obj::init( ){
{
		HX_STACK_FRAME("massive.munit.client.PrintClient","init",0x52f9a602,"massive.munit.client.PrintClient.init","massive/munit/client/PrintClient.hx",85,0x6b1c8b41)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		this->super::init();
		HX_STACK_LINE(98)
		this->originalTrace = ::haxe::Log_obj::trace_dyn();
		HX_STACK_LINE(99)
		::haxe::Log_obj::trace = this->customTrace_dyn();
	}
return null();
}


Void PrintClient_obj::printOverallResult( bool result){
{
		HX_STACK_FRAME("massive.munit.client.PrintClient","printOverallResult",0xf1eb170f,"massive.munit.client.PrintClient.printOverallResult","massive/munit/client/PrintClient.hx",152,0x6b1c8b41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(152)
		this->super::printOverallResult(result);
	}
return null();
}


Void PrintClient_obj::customTrace( Dynamic value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.client.PrintClient","customTrace",0xd6ceac62,"massive.munit.client.PrintClient.customTrace","massive/munit/client/PrintClient.hx",165,0x6b1c8b41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(165)
		this->addTrace(value,info);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PrintClient_obj,customTrace,(void))

Dynamic PrintClient_obj::reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
	HX_STACK_FRAME("massive.munit.client.PrintClient","reportFinalStatistics",0xfcc0c4b3,"massive.munit.client.PrintClient.reportFinalStatistics","massive/munit/client/PrintClient.hx",172,0x6b1c8b41)
	HX_STACK_THIS(this)
	HX_STACK_ARG(testCount,"testCount")
	HX_STACK_ARG(passCount,"passCount")
	HX_STACK_ARG(failCount,"failCount")
	HX_STACK_ARG(errorCount,"errorCount")
	HX_STACK_ARG(ignoreCount,"ignoreCount")
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(172)
	return this->super::reportFinalStatistics(testCount,passCount,failCount,errorCount,ignoreCount,time);
}


Void PrintClient_obj::print( Dynamic value){
{
		HX_STACK_FRAME("massive.munit.client.PrintClient","print",0x51ea80fb,"massive.munit.client.PrintClient.print","massive/munit/client/PrintClient.hx",176,0x6b1c8b41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(177)
		this->super::print(value);
		HX_STACK_LINE(191)
		::Sys_obj::print(value);
	}
return null();
}


Void PrintClient_obj::printLine( Dynamic value,Dynamic __o_indent){
Dynamic indent = __o_indent.Default(0);
	HX_STACK_FRAME("massive.munit.client.PrintClient","printLine",0x914a5e8f,"massive.munit.client.PrintClient.printLine","massive/munit/client/PrintClient.hx",199,0x6b1c8b41)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(indent,"indent")
{
		HX_STACK_LINE(199)
		this->super::printLine(value,indent);
	}
return null();
}


::String PrintClient_obj::DEFAULT_ID;


PrintClient_obj::PrintClient_obj()
{
}

Dynamic PrintClient_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"printLine") ) { return printLine_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"customTrace") ) { return customTrace_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printOverallResult") ) { return printOverallResult_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"reportFinalStatistics") ) { return reportFinalStatistics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PrintClient_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PrintClient_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT_ID"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("printOverallResult"),
	HX_CSTRING("customTrace"),
	HX_CSTRING("reportFinalStatistics"),
	HX_CSTRING("print"),
	HX_CSTRING("printLine"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrintClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PrintClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrintClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PrintClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

Class PrintClient_obj::__mClass;

void PrintClient_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.client.PrintClient"), hx::TCanCast< PrintClient_obj> ,sStaticFields,sMemberFields,
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

void PrintClient_obj::__boot()
{
	DEFAULT_ID= HX_CSTRING("print");
}

} // end namespace massive
} // end namespace munit
} // end namespace client
