#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_munit_AssertionException
#include <massive/munit/AssertionException.h>
#endif
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_client_JUnitReportClient
#include <massive/munit/client/JUnitReportClient.h>
#endif
#ifndef INCLUDED_massive_munit_util_MathUtil
#include <massive/munit/util/MathUtil.h>
#endif
#ifndef INCLUDED_massive_munit_util_Timer
#include <massive/munit/util/Timer.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void JUnitReportClient_obj::__construct()
{
HX_STACK_FRAME("massive.munit.client.JUnitReportClient","new",0xf4c7ac23,"massive.munit.client.JUnitReportClient.new","massive/munit/client/JUnitReportClient.hx",93,0xdfe087ac)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(94)
	this->id = HX_CSTRING("junit");
	HX_STACK_LINE(95)
	::StringBuf _g = ::StringBuf_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(95)
	this->xml = _g;
	HX_STACK_LINE(96)
	this->currentTestClass = HX_CSTRING("");
	HX_STACK_LINE(97)
	this->newline = HX_CSTRING("\n");
	HX_STACK_LINE(98)
	this->testSuiteXML = null();
	HX_STACK_LINE(99)
	this->xml->add((HX_CSTRING("<testsuites>") + this->newline));
}
;
	return null();
}

//JUnitReportClient_obj::~JUnitReportClient_obj() { }

Dynamic JUnitReportClient_obj::__CreateEmpty() { return  new JUnitReportClient_obj; }
hx::ObjectPtr< JUnitReportClient_obj > JUnitReportClient_obj::__new()
{  hx::ObjectPtr< JUnitReportClient_obj > result = new JUnitReportClient_obj();
	result->__construct();
	return result;}

Dynamic JUnitReportClient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JUnitReportClient_obj > result = new JUnitReportClient_obj();
	result->__construct();
	return result;}

hx::Object *JUnitReportClient_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::massive::munit::ITestResultClient_obj)) return operator ::massive::munit::ITestResultClient_obj *();
	if (inType==typeid( ::massive::munit::IAdvancedTestResultClient_obj)) return operator ::massive::munit::IAdvancedTestResultClient_obj *();
	return super::__ToInterface(inType);
}

Dynamic JUnitReportClient_obj::get_completionHandler( ){
	HX_STACK_FRAME("massive.munit.client.JUnitReportClient","get_completionHandler",0xf0ddf368,"massive.munit.client.JUnitReportClient.get_completionHandler","massive/munit/client/JUnitReportClient.hx",65,0xdfe087ac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	return this->completionHandler_dyn();
}


HX_DEFINE_DYNAMIC_FUNC0(JUnitReportClient_obj,get_completionHandler,return )

Dynamic JUnitReportClient_obj::set_completionHandler( Dynamic value){
	HX_STACK_FRAME("massive.munit.client.JUnitReportClient","set_completionHandler",0x44e6c174,"massive.munit.client.JUnitReportClient.set_completionHandler","massive/munit/client/JUnitReportClient.hx",69,0xdfe087ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(69)
	return this->completionHandler = value;
}


HX_DEFINE_DYNAMIC_FUNC1(JUnitReportClient_obj,set_completionHandler,return )

Void JUnitReportClient_obj::setCurrentTestClass( ::String className){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","setCurrentTestClass",0x9a215892,"massive.munit.client.JUnitReportClient.setCurrentTestClass","massive/munit/client/JUnitReportClient.hx",109,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_LINE(110)
		if (((this->currentTestClass == className))){
			HX_STACK_LINE(110)
			return null();
		}
		HX_STACK_LINE(111)
		if (((this->currentTestClass != null()))){
			HX_STACK_LINE(111)
			this->endTestSuite();
		}
		HX_STACK_LINE(113)
		this->currentTestClass = className;
		HX_STACK_LINE(115)
		if (((this->currentTestClass != null()))){
			HX_STACK_LINE(115)
			this->startTestSuite();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JUnitReportClient_obj,setCurrentTestClass,(void))

Void JUnitReportClient_obj::addPass( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","addPass",0x38afa0d5,"massive.munit.client.JUnitReportClient.addPass","massive/munit/client/JUnitReportClient.hx",125,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(126)
		(this->suitePassCount)++;
		HX_STACK_LINE(128)
		Float _g = ::massive::munit::util::MathUtil_obj::round(result->executionTime,(int)5);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(128)
		::String _g1 = (((((HX_CSTRING("<testcase classname=\"") + result->className) + HX_CSTRING("\" name=\"")) + result->name) + HX_CSTRING("\" time=\"")) + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(128)
		::String _g2 = (_g1 + HX_CSTRING("\" />"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(128)
		::String _g3 = (_g2 + this->newline);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(128)
		this->testSuiteXML->add(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JUnitReportClient_obj,addPass,(void))

Void JUnitReportClient_obj::addFail( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","addFail",0x321375e2,"massive.munit.client.JUnitReportClient.addFail","massive/munit/client/JUnitReportClient.hx",137,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(138)
		(this->suiteFailCount)++;
		HX_STACK_LINE(140)
		Float _g = ::massive::munit::util::MathUtil_obj::round(result->executionTime,(int)5);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		::String _g1 = (((((HX_CSTRING("<testcase classname=\"") + result->className) + HX_CSTRING("\" name=\"")) + result->name) + HX_CSTRING("\" time=\"")) + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(140)
		::String _g2 = (_g1 + HX_CSTRING("\" >"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(140)
		::String _g3 = (_g2 + this->newline);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(140)
		this->testSuiteXML->add(_g3);
		HX_STACK_LINE(141)
		this->testSuiteXML->add(((((HX_CSTRING("<failure message=\"") + result->failure->message) + HX_CSTRING("\" type=\"")) + result->failure->type) + HX_CSTRING("\">")));
		HX_STACK_LINE(142)
		this->testSuiteXML->add(result->failure);
		HX_STACK_LINE(143)
		this->testSuiteXML->add((HX_CSTRING("</failure>") + this->newline));
		HX_STACK_LINE(144)
		this->testSuiteXML->add((HX_CSTRING("</testcase>") + this->newline));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JUnitReportClient_obj,addFail,(void))

Void JUnitReportClient_obj::addError( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","addError",0x16d09344,"massive.munit.client.JUnitReportClient.addError","massive/munit/client/JUnitReportClient.hx",153,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(154)
		(this->suiteErrorCount)++;
		HX_STACK_LINE(156)
		Float _g = ::massive::munit::util::MathUtil_obj::round(result->executionTime,(int)5);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		::String _g1 = (((((HX_CSTRING("<testcase classname=\"") + result->className) + HX_CSTRING("\" name=\"")) + result->name) + HX_CSTRING("\" time=\"")) + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(156)
		::String _g2 = (_g1 + HX_CSTRING("\" >"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(156)
		::String _g3 = (_g2 + this->newline);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(156)
		this->testSuiteXML->add(_g3);
		HX_STACK_LINE(157)
		::String _g4 = ::Std_obj::string(result->error->__Field(HX_CSTRING("message"),true));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(157)
		::String _g5 = (HX_CSTRING("<error message=\"") + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(157)
		::String _g6 = (_g5 + HX_CSTRING("\" type=\""));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(157)
		::String _g7 = ::Std_obj::string(result->error->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(157)
		::String _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(157)
		::String _g9 = (_g8 + HX_CSTRING("\">"));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(157)
		this->testSuiteXML->add(_g9);
		HX_STACK_LINE(158)
		this->testSuiteXML->add(result->error);
		HX_STACK_LINE(159)
		this->testSuiteXML->add((HX_CSTRING("</error>") + this->newline));
		HX_STACK_LINE(160)
		this->testSuiteXML->add((HX_CSTRING("</testcase>") + this->newline));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JUnitReportClient_obj,addError,(void))

Void JUnitReportClient_obj::addIgnore( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","addIgnore",0x21107e16,"massive.munit.client.JUnitReportClient.addIgnore","massive/munit/client/JUnitReportClient.hx",169,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JUnitReportClient_obj,addIgnore,(void))

Dynamic JUnitReportClient_obj::reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
	HX_STACK_FRAME("massive.munit.client.JUnitReportClient","reportFinalStatistics",0x22dba868,"massive.munit.client.JUnitReportClient.reportFinalStatistics","massive/munit/client/JUnitReportClient.hx",189,0xdfe087ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(testCount,"testCount")
	HX_STACK_ARG(passCount,"passCount")
	HX_STACK_ARG(failCount,"failCount")
	HX_STACK_ARG(errorCount,"errorCount")
	HX_STACK_ARG(ignoreCount,"ignoreCount")
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(191)
	this->xml->add(HX_CSTRING("</testsuites>"));
	HX_STACK_LINE(192)
	Dynamic _g = this->get_completionHandler();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(192)
	if (((_g != null()))){
		HX_STACK_LINE(192)
		this->get_completionHandler()(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
	}
	HX_STACK_LINE(193)
	return this->xml->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC6(JUnitReportClient_obj,reportFinalStatistics,return )

Void JUnitReportClient_obj::endTestSuite( ){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","endTestSuite",0xef311988,"massive.munit.client.JUnitReportClient.endTestSuite","massive/munit/client/JUnitReportClient.hx",197,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		if (((this->testSuiteXML == null()))){
			HX_STACK_LINE(198)
			return null();
		}
		HX_STACK_LINE(200)
		int suiteTestCount = ((this->suitePassCount + this->suiteFailCount) + this->suiteErrorCount);		HX_STACK_VAR(suiteTestCount,"suiteTestCount");
		HX_STACK_LINE(201)
		Float _g = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(201)
		Float _g1 = (_g - this->suiteExecutionTime);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(201)
		this->suiteExecutionTime = _g1;
		HX_STACK_LINE(203)
		Float _g2 = ::massive::munit::util::MathUtil_obj::round(this->suiteExecutionTime,(int)5);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(203)
		::String _g3 = (((((((((HX_CSTRING("<testsuite errors=\"") + this->suiteErrorCount) + HX_CSTRING("\" failures=\"")) + this->suiteFailCount) + HX_CSTRING("\" hostname=\"\" name=\"")) + this->currentTestClass) + HX_CSTRING("\" tests=\"")) + suiteTestCount) + HX_CSTRING("\" time=\"")) + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(203)
		::String _g4 = (_g3 + HX_CSTRING("\" timestamp=\""));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(203)
		::Date _g5 = ::Date_obj::now();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(203)
		::String _g6 = ::Std_obj::string(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(203)
		::String _g7 = (_g4 + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(203)
		::String _g8 = (_g7 + HX_CSTRING("\">"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(203)
		::String header = (_g8 + this->newline);		HX_STACK_VAR(header,"header");
		HX_STACK_LINE(204)
		::String footer = (HX_CSTRING("</testsuite>") + this->newline);		HX_STACK_VAR(footer,"footer");
		HX_STACK_LINE(206)
		this->testSuiteXML->add((HX_CSTRING("<system-out></system-out>") + this->newline));
		HX_STACK_LINE(207)
		this->testSuiteXML->add((HX_CSTRING("<system-err></system-err>") + this->newline));
		HX_STACK_LINE(209)
		this->xml->add(header);
		HX_STACK_LINE(210)
		::String _g9 = this->testSuiteXML->b->join(HX_CSTRING(""));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(210)
		this->xml->add(_g9);
		HX_STACK_LINE(211)
		this->xml->add(footer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(JUnitReportClient_obj,endTestSuite,(void))

Void JUnitReportClient_obj::startTestSuite( ){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","startTestSuite",0x0efc5161,"massive.munit.client.JUnitReportClient.startTestSuite","massive/munit/client/JUnitReportClient.hx",215,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(216)
		this->suitePassCount = (int)0;
		HX_STACK_LINE(217)
		this->suiteFailCount = (int)0;
		HX_STACK_LINE(218)
		this->suiteErrorCount = (int)0;
		HX_STACK_LINE(219)
		Float _g = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(219)
		this->suiteExecutionTime = _g;
		HX_STACK_LINE(220)
		::StringBuf _g1 = ::StringBuf_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(220)
		this->testSuiteXML = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(JUnitReportClient_obj,startTestSuite,(void))

::String JUnitReportClient_obj::DEFAULT_ID;


JUnitReportClient_obj::JUnitReportClient_obj()
{
}

void JUnitReportClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JUnitReportClient);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(completionHandler,"completionHandler");
	HX_MARK_MEMBER_NAME(newline,"newline");
	HX_MARK_MEMBER_NAME(xml,"xml");
	HX_MARK_MEMBER_NAME(testSuiteXML,"testSuiteXML");
	HX_MARK_MEMBER_NAME(currentTestClass,"currentTestClass");
	HX_MARK_MEMBER_NAME(suitePassCount,"suitePassCount");
	HX_MARK_MEMBER_NAME(suiteFailCount,"suiteFailCount");
	HX_MARK_MEMBER_NAME(suiteErrorCount,"suiteErrorCount");
	HX_MARK_MEMBER_NAME(suiteExecutionTime,"suiteExecutionTime");
	HX_MARK_END_CLASS();
}

void JUnitReportClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(completionHandler,"completionHandler");
	HX_VISIT_MEMBER_NAME(newline,"newline");
	HX_VISIT_MEMBER_NAME(xml,"xml");
	HX_VISIT_MEMBER_NAME(testSuiteXML,"testSuiteXML");
	HX_VISIT_MEMBER_NAME(currentTestClass,"currentTestClass");
	HX_VISIT_MEMBER_NAME(suitePassCount,"suitePassCount");
	HX_VISIT_MEMBER_NAME(suiteFailCount,"suiteFailCount");
	HX_VISIT_MEMBER_NAME(suiteErrorCount,"suiteErrorCount");
	HX_VISIT_MEMBER_NAME(suiteExecutionTime,"suiteExecutionTime");
}

Dynamic JUnitReportClient_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return xml; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"newline") ) { return newline; }
		if (HX_FIELD_EQ(inName,"addPass") ) { return addPass_dyn(); }
		if (HX_FIELD_EQ(inName,"addFail") ) { return addFail_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addError") ) { return addError_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addIgnore") ) { return addIgnore_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"testSuiteXML") ) { return testSuiteXML; }
		if (HX_FIELD_EQ(inName,"endTestSuite") ) { return endTestSuite_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"suitePassCount") ) { return suitePassCount; }
		if (HX_FIELD_EQ(inName,"suiteFailCount") ) { return suiteFailCount; }
		if (HX_FIELD_EQ(inName,"startTestSuite") ) { return startTestSuite_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"suiteErrorCount") ) { return suiteErrorCount; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentTestClass") ) { return currentTestClass; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { return inCallProp ? get_completionHandler() : completionHandler; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"suiteExecutionTime") ) { return suiteExecutionTime; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setCurrentTestClass") ) { return setCurrentTestClass_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_completionHandler") ) { return get_completionHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_completionHandler") ) { return set_completionHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"reportFinalStatistics") ) { return reportFinalStatistics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JUnitReportClient_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { xml=inValue.Cast< ::StringBuf >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"newline") ) { newline=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"testSuiteXML") ) { testSuiteXML=inValue.Cast< ::StringBuf >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"suitePassCount") ) { suitePassCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"suiteFailCount") ) { suiteFailCount=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"suiteErrorCount") ) { suiteErrorCount=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentTestClass") ) { currentTestClass=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { if (inCallProp) return set_completionHandler(inValue);completionHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"suiteExecutionTime") ) { suiteExecutionTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JUnitReportClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("newline"));
	outFields->push(HX_CSTRING("xml"));
	outFields->push(HX_CSTRING("testSuiteXML"));
	outFields->push(HX_CSTRING("currentTestClass"));
	outFields->push(HX_CSTRING("suitePassCount"));
	outFields->push(HX_CSTRING("suiteFailCount"));
	outFields->push(HX_CSTRING("suiteErrorCount"));
	outFields->push(HX_CSTRING("suiteExecutionTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT_ID"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(JUnitReportClient_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JUnitReportClient_obj,completionHandler),HX_CSTRING("completionHandler")},
	{hx::fsString,(int)offsetof(JUnitReportClient_obj,newline),HX_CSTRING("newline")},
	{hx::fsObject /*::StringBuf*/ ,(int)offsetof(JUnitReportClient_obj,xml),HX_CSTRING("xml")},
	{hx::fsObject /*::StringBuf*/ ,(int)offsetof(JUnitReportClient_obj,testSuiteXML),HX_CSTRING("testSuiteXML")},
	{hx::fsString,(int)offsetof(JUnitReportClient_obj,currentTestClass),HX_CSTRING("currentTestClass")},
	{hx::fsInt,(int)offsetof(JUnitReportClient_obj,suitePassCount),HX_CSTRING("suitePassCount")},
	{hx::fsInt,(int)offsetof(JUnitReportClient_obj,suiteFailCount),HX_CSTRING("suiteFailCount")},
	{hx::fsInt,(int)offsetof(JUnitReportClient_obj,suiteErrorCount),HX_CSTRING("suiteErrorCount")},
	{hx::fsFloat,(int)offsetof(JUnitReportClient_obj,suiteExecutionTime),HX_CSTRING("suiteExecutionTime")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("completionHandler"),
	HX_CSTRING("get_completionHandler"),
	HX_CSTRING("set_completionHandler"),
	HX_CSTRING("newline"),
	HX_CSTRING("xml"),
	HX_CSTRING("testSuiteXML"),
	HX_CSTRING("currentTestClass"),
	HX_CSTRING("suitePassCount"),
	HX_CSTRING("suiteFailCount"),
	HX_CSTRING("suiteErrorCount"),
	HX_CSTRING("suiteExecutionTime"),
	HX_CSTRING("setCurrentTestClass"),
	HX_CSTRING("addPass"),
	HX_CSTRING("addFail"),
	HX_CSTRING("addError"),
	HX_CSTRING("addIgnore"),
	HX_CSTRING("reportFinalStatistics"),
	HX_CSTRING("endTestSuite"),
	HX_CSTRING("startTestSuite"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JUnitReportClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JUnitReportClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JUnitReportClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JUnitReportClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

Class JUnitReportClient_obj::__mClass;

void JUnitReportClient_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.client.JUnitReportClient"), hx::TCanCast< JUnitReportClient_obj> ,sStaticFields,sMemberFields,
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

void JUnitReportClient_obj::__boot()
{
	DEFAULT_ID= HX_CSTRING("junit");
}

} // end namespace massive
} // end namespace munit
} // end namespace client
