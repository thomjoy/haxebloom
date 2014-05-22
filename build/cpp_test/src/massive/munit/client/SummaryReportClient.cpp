#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_SummaryReportClient
#include <massive/munit/client/SummaryReportClient.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void SummaryReportClient_obj::__construct()
{
HX_STACK_FRAME("massive.munit.client.SummaryReportClient","new",0xb25e143b,"massive.munit.client.SummaryReportClient.new","massive/munit/client/SummaryReportClient.hx",62,0xf2eda854)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(63)
	super::__construct();
	HX_STACK_LINE(64)
	this->id = HX_CSTRING("summary");
}
;
	return null();
}

//SummaryReportClient_obj::~SummaryReportClient_obj() { }

Dynamic SummaryReportClient_obj::__CreateEmpty() { return  new SummaryReportClient_obj; }
hx::ObjectPtr< SummaryReportClient_obj > SummaryReportClient_obj::__new()
{  hx::ObjectPtr< SummaryReportClient_obj > result = new SummaryReportClient_obj();
	result->__construct();
	return result;}

Dynamic SummaryReportClient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SummaryReportClient_obj > result = new SummaryReportClient_obj();
	result->__construct();
	return result;}

Void SummaryReportClient_obj::printFinalStatistics( bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
{
		HX_STACK_FRAME("massive.munit.client.SummaryReportClient","printFinalStatistics",0x2a090a51,"massive.munit.client.SummaryReportClient.printFinalStatistics","massive/munit/client/SummaryReportClient.hx",68,0xf2eda854)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_ARG(testCount,"testCount")
		HX_STACK_ARG(passCount,"passCount")
		HX_STACK_ARG(failCount,"failCount")
		HX_STACK_ARG(errorCount,"errorCount")
		HX_STACK_ARG(ignoreCount,"ignoreCount")
		HX_STACK_ARG(time,"time")
		HX_STACK_LINE(69)
		this->output = HX_CSTRING("");
		HX_STACK_LINE(70)
		::String _g = ::Std_obj::string(result);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		::String _g1 = (HX_CSTRING("result:") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		hx::AddEq(this->output,_g1);
		HX_STACK_LINE(71)
		hx::AddEq(this->output,(HX_CSTRING("\ncount:") + testCount));
		HX_STACK_LINE(72)
		hx::AddEq(this->output,(HX_CSTRING("\npass:") + passCount));
		HX_STACK_LINE(73)
		hx::AddEq(this->output,(HX_CSTRING("\nfail:") + failCount));
		HX_STACK_LINE(74)
		hx::AddEq(this->output,(HX_CSTRING("\nerror:") + errorCount));
		HX_STACK_LINE(75)
		hx::AddEq(this->output,(HX_CSTRING("\nignore:") + ignoreCount));
		HX_STACK_LINE(76)
		hx::AddEq(this->output,(HX_CSTRING("\ntime:") + time));
		HX_STACK_LINE(77)
		hx::AddEq(this->output,HX_CSTRING("\n"));
		HX_STACK_LINE(79)
		int resultCount = (int)0;		HX_STACK_VAR(resultCount,"resultCount");
		HX_STACK_LINE(81)
		while((true)){
			HX_STACK_LINE(81)
			if ((!(((bool((this->totalResults->length > (int)0)) && bool((resultCount < (int)10))))))){
				HX_STACK_LINE(81)
				break;
			}
			HX_STACK_LINE(83)
			::massive::munit::TestResult result1 = this->totalResults->shift().StaticCast< ::massive::munit::TestResult >();		HX_STACK_VAR(result1,"result1");
			HX_STACK_LINE(84)
			if ((!(result1->passed))){
				HX_STACK_LINE(86)
				::String _g2 = result1->get_location();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(86)
				::String _g3 = (HX_CSTRING("\n# ") + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(86)
				hx::AddEq(this->output,_g3);
				HX_STACK_LINE(87)
				(resultCount)++;
			}
		}
		HX_STACK_LINE(91)
		int remainder = ((failCount + errorCount) - resultCount);		HX_STACK_VAR(remainder,"remainder");
		HX_STACK_LINE(93)
		if (((remainder > (int)0))){
			HX_STACK_LINE(95)
			hx::AddEq(this->output,((HX_CSTRING("# ... plus ") + remainder) + HX_CSTRING(" more")));
		}
	}
return null();
}


Void SummaryReportClient_obj::printOverallResult( bool result){
{
		HX_STACK_FRAME("massive.munit.client.SummaryReportClient","printOverallResult",0x98567322,"massive.munit.client.SummaryReportClient.printOverallResult","massive/munit/client/SummaryReportClient.hx",101,0xf2eda854)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
	}
return null();
}


Void SummaryReportClient_obj::printReports( ){
{
		HX_STACK_FRAME("massive.munit.client.SummaryReportClient","printReports",0xc839a957,"massive.munit.client.SummaryReportClient.printReports","massive/munit/client/SummaryReportClient.hx",107,0xf2eda854)
		HX_STACK_THIS(this)
	}
return null();
}


::String SummaryReportClient_obj::DEFAULT_ID;


SummaryReportClient_obj::SummaryReportClient_obj()
{
}

Dynamic SummaryReportClient_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"printReports") ) { return printReports_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printOverallResult") ) { return printOverallResult_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"printFinalStatistics") ) { return printFinalStatistics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SummaryReportClient_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SummaryReportClient_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("printFinalStatistics"),
	HX_CSTRING("printOverallResult"),
	HX_CSTRING("printReports"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SummaryReportClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SummaryReportClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SummaryReportClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SummaryReportClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

Class SummaryReportClient_obj::__mClass;

void SummaryReportClient_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.client.SummaryReportClient"), hx::TCanCast< SummaryReportClient_obj> ,sStaticFields,sMemberFields,
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

void SummaryReportClient_obj::__boot()
{
	DEFAULT_ID= HX_CSTRING("summary");
}

} // end namespace massive
} // end namespace munit
} // end namespace client
