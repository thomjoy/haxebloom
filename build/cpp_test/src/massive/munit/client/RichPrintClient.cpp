#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_massive_munit_ICoverageTestResultClient
#include <massive/munit/ICoverageTestResultClient.h>
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
#ifndef INCLUDED_massive_munit_TestResultType
#include <massive/munit/TestResultType.h>
#endif
#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_ExternalPrintClient
#include <massive/munit/client/ExternalPrintClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_ExternalPrintClientJS
#include <massive/munit/client/ExternalPrintClientJS.h>
#endif
#ifndef INCLUDED_massive_munit_client_PrintClientBase
#include <massive/munit/client/PrintClientBase.h>
#endif
#ifndef INCLUDED_massive_munit_client_RichPrintClient
#include <massive/munit/client/RichPrintClient.h>
#endif
#ifndef INCLUDED_massive_munit_util_MathUtil
#include <massive/munit/util/MathUtil.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void RichPrintClient_obj::__construct()
{
HX_STACK_FRAME("massive.munit.client.RichPrintClient","new",0x0bcb7cf2,"massive.munit.client.RichPrintClient.new","massive/munit/client/RichPrintClient.hx",50,0xd074f7fd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(51)
	super::__construct(null());
	HX_STACK_LINE(52)
	this->id = HX_CSTRING("RichPrintClient");
}
;
	return null();
}

//RichPrintClient_obj::~RichPrintClient_obj() { }

Dynamic RichPrintClient_obj::__CreateEmpty() { return  new RichPrintClient_obj; }
hx::ObjectPtr< RichPrintClient_obj > RichPrintClient_obj::__new()
{  hx::ObjectPtr< RichPrintClient_obj > result = new RichPrintClient_obj();
	result->__construct();
	return result;}

Dynamic RichPrintClient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RichPrintClient_obj > result = new RichPrintClient_obj();
	result->__construct();
	return result;}

Void RichPrintClient_obj::init( ){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","init",0x42fa8e3e,"massive.munit.client.RichPrintClient.init","massive/munit/client/RichPrintClient.hx",56,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->super::init();
		HX_STACK_LINE(59)
		this->originalTrace = ::haxe::Log_obj::trace_dyn();
		HX_STACK_LINE(60)
		::haxe::Log_obj::trace = this->customTrace_dyn();
		HX_STACK_LINE(62)
		::massive::munit::client::ExternalPrintClientJS _g = ::massive::munit::client::ExternalPrintClientJS_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		this->external = _g;
	}
return null();
}


Void RichPrintClient_obj::initializeTestClass( ){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","initializeTestClass",0x58e72ba8,"massive.munit.client.RichPrintClient.initializeTestClass","massive/munit/client/RichPrintClient.hx",67,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		this->super::initializeTestClass();
		HX_STACK_LINE(69)
		this->external->createTestClass(this->currentTestClass);
		HX_STACK_LINE(70)
		this->external->printToTestClassSummary(((HX_CSTRING("Class: ") + this->currentTestClass) + HX_CSTRING(" ")));
	}
return null();
}


Void RichPrintClient_obj::updateTestClass( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","updateTestClass",0x5ef6c6cf,"massive.munit.client.RichPrintClient.updateTestClass","massive/munit/client/RichPrintClient.hx",74,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(75)
		this->super::updateTestClass(result);
		HX_STACK_LINE(77)
		::String value = this->serializeTestResult(result);		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::massive::munit::TestResultType _g = result->get_type();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(82)
					this->external->printToTestClassSummary(HX_CSTRING("."));
					HX_STACK_LINE(83)
					this->external->addTestPass(value);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(87)
					this->external->printToTestClassSummary(HX_CSTRING("!"));
					HX_STACK_LINE(88)
					this->external->addTestFail(value);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(92)
					this->external->printToTestClassSummary(HX_CSTRING("x"));
					HX_STACK_LINE(93)
					this->external->addTestError(value);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(97)
					this->external->printToTestClassSummary(HX_CSTRING(","));
					HX_STACK_LINE(98)
					this->external->addTestIgnore(value);
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(100)
					Dynamic();
				}
				;break;
			}
		}
	}
return null();
}


::String RichPrintClient_obj::serializeTestResult( ::massive::munit::TestResult result){
	HX_STACK_FRAME("massive.munit.client.RichPrintClient","serializeTestResult",0x28cd9961,"massive.munit.client.RichPrintClient.serializeTestResult","massive/munit/client/RichPrintClient.hx",105,0xd074f7fd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(106)
	::String summary = result->name;		HX_STACK_VAR(summary,"summary");
	HX_STACK_LINE(108)
	if (((bool((result->description != null())) && bool((result->description != HX_CSTRING("")))))){
		HX_STACK_LINE(110)
		hx::AddEq(summary,((HX_CSTRING(" - ") + result->description) + HX_CSTRING(" -")));
	}
	HX_STACK_LINE(113)
	Float _g = ::massive::munit::util::MathUtil_obj::round(result->executionTime,(int)4);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(113)
	::String _g1 = (HX_CSTRING(" (") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(113)
	::String _g2 = (_g1 + HX_CSTRING("s)"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(113)
	hx::AddEq(summary,_g2);
	HX_STACK_LINE(115)
	::String str = null();		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(116)
	if (((result->error != null()))){
		HX_STACK_LINE(118)
		::String _g3 = ::Std_obj::string(result->error);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(118)
		::String _g4 = (((HX_CSTRING("Error: ") + summary) + HX_CSTRING("\n")) + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(118)
		str = _g4;
	}
	else{
		HX_STACK_LINE(120)
		if (((result->failure != null()))){
			HX_STACK_LINE(122)
			::String _g5 = ::Std_obj::string(result->failure);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(122)
			::String _g6 = (((HX_CSTRING("Failure: ") + summary) + HX_CSTRING("\n")) + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(122)
			str = _g6;
		}
		else{
			HX_STACK_LINE(124)
			if ((result->ignore)){
				HX_STACK_LINE(126)
				str = (HX_CSTRING("Ignore: ") + summary);
			}
			else{
				HX_STACK_LINE(128)
				if ((result->passed)){
				}
			}
		}
	}
	HX_STACK_LINE(133)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC1(RichPrintClient_obj,serializeTestResult,return )

Void RichPrintClient_obj::finalizeTestClass( ){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","finalizeTestClass",0x9b86751a,"massive.munit.client.RichPrintClient.finalizeTestClass","massive/munit/client/RichPrintClient.hx",141,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		this->super::finalizeTestClass();
		HX_STACK_LINE(143)
		::massive::munit::TestResultType _g = this->getTestClassResultType();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		this->testClassResultType = _g;
		HX_STACK_LINE(147)
		int code;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			::massive::munit::TestResultType _g1 = this->testClassResultType;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(147)
			switch( (int)(_g1->__Index())){
				case (int)1: {
					HX_STACK_LINE(149)
					code = (int)0;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(150)
					code = (int)1;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(151)
					code = (int)2;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(152)
					code = (int)3;
				}
				;break;
				default: {
					HX_STACK_LINE(153)
					code = (int)-1;
				}
			}
		}
		HX_STACK_LINE(155)
		if (((code == (int)-1))){
			HX_STACK_LINE(155)
			return null();
		}
		HX_STACK_LINE(156)
		this->external->setTestClassResult(code);
	}
return null();
}


::massive::munit::TestResultType RichPrintClient_obj::getTestClassResultType( ){
	HX_STACK_FRAME("massive.munit.client.RichPrintClient","getTestClassResultType",0x86813c15,"massive.munit.client.RichPrintClient.getTestClassResultType","massive/munit/client/RichPrintClient.hx",163,0xd074f7fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	if (((this->errorCount > (int)0))){
		HX_STACK_LINE(163)
		return ::massive::munit::TestResultType_obj::ERROR;
	}
	else{
		HX_STACK_LINE(164)
		if (((this->failCount > (int)0))){
			HX_STACK_LINE(164)
			return ::massive::munit::TestResultType_obj::FAIL;
		}
		else{
			HX_STACK_LINE(165)
			if (((this->ignoreCount > (int)0))){
				HX_STACK_LINE(165)
				return ::massive::munit::TestResultType_obj::IGNORE;
			}
			else{
				HX_STACK_LINE(166)
				return ::massive::munit::TestResultType_obj::PASS;
			}
		}
	}
	HX_STACK_LINE(163)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RichPrintClient_obj,getTestClassResultType,return )

Void RichPrintClient_obj::setCurrentTestClassCoverage( Dynamic result){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","setCurrentTestClassCoverage",0x02ef8e69,"massive.munit.client.RichPrintClient.setCurrentTestClassCoverage","massive/munit/client/RichPrintClient.hx",171,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(172)
		this->super::setCurrentTestClassCoverage(result);
		HX_STACK_LINE(174)
		this->external->printToTestClassSummary(((HX_CSTRING(" [") + result->__Field(HX_CSTRING("percent"),true)) + HX_CSTRING("%]")));
		HX_STACK_LINE(176)
		if (((result->__Field(HX_CSTRING("percent"),true) == (int)100))){
			HX_STACK_LINE(176)
			return null();
		}
		HX_STACK_LINE(178)
		this->external->addTestClassCoverage(result->__Field(HX_CSTRING("className"),true),result->__Field(HX_CSTRING("percent"),true));
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(179)
			Array< ::String > _g1 = result->__Field(HX_CSTRING("blocks"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(179)
			while((true)){
				HX_STACK_LINE(179)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(179)
					break;
				}
				HX_STACK_LINE(179)
				::String item = _g1->__get(_g);		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(179)
				++(_g);
				HX_STACK_LINE(181)
				this->external->addTestClassCoverageItem(item);
			}
		}
	}
return null();
}


Void RichPrintClient_obj::reportFinalCoverage( Dynamic __o_percent,Dynamic missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency){
Dynamic percent = __o_percent.Default(0);
	HX_STACK_FRAME("massive.munit.client.RichPrintClient","reportFinalCoverage",0xc70636bc,"massive.munit.client.RichPrintClient.reportFinalCoverage","massive/munit/client/RichPrintClient.hx",191,0xd074f7fd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(percent,"percent")
	HX_STACK_ARG(missingCoverageResults,"missingCoverageResults")
	HX_STACK_ARG(summary,"summary")
	HX_STACK_ARG(classBreakdown,"classBreakdown")
	HX_STACK_ARG(packageBreakdown,"packageBreakdown")
	HX_STACK_ARG(executionFrequency,"executionFrequency")
{
		HX_STACK_LINE(192)
		this->super::reportFinalCoverage(percent,missingCoverageResults,summary,classBreakdown,packageBreakdown,executionFrequency);
		HX_STACK_LINE(194)
		this->external->createCoverageReport(percent);
		HX_STACK_LINE(195)
		this->printMissingCoverage(missingCoverageResults);
		HX_STACK_LINE(197)
		if (((executionFrequency != null()))){
			HX_STACK_LINE(199)
			::String _g = this->trim(executionFrequency);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(199)
			this->external->addCoverageReportSection(HX_CSTRING("Code Execution Frequency"),_g);
		}
		HX_STACK_LINE(202)
		if (((classBreakdown != null()))){
			HX_STACK_LINE(204)
			::String _g1 = this->trim(classBreakdown);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(204)
			this->external->addCoverageReportSection(HX_CSTRING("Class Breakdown"),_g1);
		}
		HX_STACK_LINE(207)
		if (((packageBreakdown != null()))){
			HX_STACK_LINE(209)
			::String _g2 = this->trim(packageBreakdown);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(209)
			this->external->addCoverageReportSection(HX_CSTRING("Package Breakdown"),_g2);
		}
		HX_STACK_LINE(212)
		if (((packageBreakdown != null()))){
			HX_STACK_LINE(214)
			::String _g3 = this->trim(summary);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(214)
			this->external->addCoverageReportSection(HX_CSTRING("Summary"),_g3);
		}
	}
return null();
}


::String RichPrintClient_obj::trim( ::String output){
	HX_STACK_FRAME("massive.munit.client.RichPrintClient","trim",0x4a42f010,"massive.munit.client.RichPrintClient.trim","massive/munit/client/RichPrintClient.hx",219,0xd074f7fd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(220)
	while((true)){
		HX_STACK_LINE(220)
		int _g = output.indexOf(HX_CSTRING("\n"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(220)
		if ((!(((_g == (int)0))))){
			HX_STACK_LINE(220)
			break;
		}
		HX_STACK_LINE(222)
		::String _g1 = output.substr((int)1,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(222)
		output = _g1;
	}
	HX_STACK_LINE(225)
	while((true)){
		HX_STACK_LINE(225)
		int _g2 = output.lastIndexOf(HX_CSTRING("\n"),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(225)
		if ((!(((_g2 == (output.length - (int)2)))))){
			HX_STACK_LINE(225)
			break;
		}
		HX_STACK_LINE(227)
		::String _g3 = output.substr((int)0,(output.length - (int)2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(227)
		output = _g3;
	}
	HX_STACK_LINE(230)
	return output;
}


HX_DEFINE_DYNAMIC_FUNC1(RichPrintClient_obj,trim,return )

Void RichPrintClient_obj::printMissingCoverage( Dynamic missingCoverageResults){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","printMissingCoverage",0xe0675cef,"massive.munit.client.RichPrintClient.printMissingCoverage","massive/munit/client/RichPrintClient.hx",235,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(missingCoverageResults,"missingCoverageResults")
		HX_STACK_LINE(236)
		if (((bool((missingCoverageResults == null())) || bool((missingCoverageResults->__Field(HX_CSTRING("length"),true) == (int)0))))){
			HX_STACK_LINE(236)
			return null();
		}
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			while((true)){
				HX_STACK_LINE(238)
				if ((!(((_g < missingCoverageResults->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(238)
					break;
				}
				HX_STACK_LINE(238)
				Dynamic result = missingCoverageResults->__GetItem(_g);		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(238)
				++(_g);
				HX_STACK_LINE(240)
				this->external->addMissingCoverageClass(result->__Field(HX_CSTRING("className"),true),result->__Field(HX_CSTRING("percent"),true));
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(241)
					Array< ::String > _g2 = result->__Field(HX_CSTRING("blocks"),true);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(241)
					while((true)){
						HX_STACK_LINE(241)
						if ((!(((_g1 < _g2->length))))){
							HX_STACK_LINE(241)
							break;
						}
						HX_STACK_LINE(241)
						::String item = _g2->__get(_g1);		HX_STACK_VAR(item,"item");
						HX_STACK_LINE(241)
						++(_g1);
						HX_STACK_LINE(243)
						this->external->addTestClassCoverageItem(item);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RichPrintClient_obj,printMissingCoverage,(void))

Void RichPrintClient_obj::printReports( ){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","printReports",0x0f1af1c0,"massive.munit.client.RichPrintClient.printReports","massive/munit/client/RichPrintClient.hx",250,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(250)
		this->super::printReports();
	}
return null();
}


Void RichPrintClient_obj::printFinalStatistics( bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","printFinalStatistics",0x247663ba,"massive.munit.client.RichPrintClient.printFinalStatistics","massive/munit/client/RichPrintClient.hx",254,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_ARG(testCount,"testCount")
		HX_STACK_ARG(passCount,"passCount")
		HX_STACK_ARG(failCount,"failCount")
		HX_STACK_ARG(errorCount,"errorCount")
		HX_STACK_ARG(ignoreCount,"ignoreCount")
		HX_STACK_ARG(time,"time")
		HX_STACK_LINE(255)
		this->super::printFinalStatistics(result,testCount,passCount,failCount,errorCount,ignoreCount,time);
		HX_STACK_LINE(257)
		::String resultString;		HX_STACK_VAR(resultString,"resultString");
		HX_STACK_LINE(257)
		if ((result)){
			HX_STACK_LINE(257)
			resultString = HX_CSTRING("PASSED");
		}
		else{
			HX_STACK_LINE(257)
			resultString = HX_CSTRING("FAILED");
		}
		HX_STACK_LINE(263)
		Float _g = ::massive::munit::util::MathUtil_obj::round(time,(int)5);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(258)
		::String _g1 = (((((((((((HX_CSTRING("\nTests: ") + testCount) + HX_CSTRING("  Passed: ")) + passCount) + HX_CSTRING("  Failed: ")) + failCount) + HX_CSTRING(" Errors: ")) + errorCount) + HX_CSTRING(" Ignored: ")) + ignoreCount) + HX_CSTRING(" Time: ")) + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(258)
		hx::AddEq(resultString,_g1);
		HX_STACK_LINE(265)
		this->external->printSummary(resultString);
	}
return null();
}


Void RichPrintClient_obj::printOverallResult( bool result){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","printOverallResult",0xd5ab704b,"massive.munit.client.RichPrintClient.printOverallResult","massive/munit/client/RichPrintClient.hx",269,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(270)
		this->super::printOverallResult(result);
		HX_STACK_LINE(271)
		this->external->setResult(result);
	}
return null();
}


Void RichPrintClient_obj::customTrace( Dynamic value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","customTrace",0x060d83a6,"massive.munit.client.RichPrintClient.customTrace","massive/munit/client/RichPrintClient.hx",275,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(276)
		this->addTrace(value,info);
		HX_STACK_LINE(278)
		Array< ::String > traces = this->getTraces();		HX_STACK_VAR(traces,"traces");
		HX_STACK_LINE(279)
		::String t = traces->__get((traces->length - (int)1));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(280)
		this->external->trace(t);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RichPrintClient_obj,customTrace,(void))

Void RichPrintClient_obj::print( Dynamic value){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","print",0x62b4cd3f,"massive.munit.client.RichPrintClient.print","massive/munit/client/RichPrintClient.hx",286,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(287)
		this->super::print(value);
		HX_STACK_LINE(293)
		::Sys_obj::print(value);
	}
return null();
}


Void RichPrintClient_obj::printLine( Dynamic value,Dynamic __o_indent){
Dynamic indent = __o_indent.Default(0);
	HX_STACK_FRAME("massive.munit.client.RichPrintClient","printLine",0x6a6a1cd3,"massive.munit.client.RichPrintClient.printLine","massive/munit/client/RichPrintClient.hx",299,0xd074f7fd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(indent,"indent")
{
		HX_STACK_LINE(299)
		this->super::printLine(value,indent);
	}
return null();
}


::String RichPrintClient_obj::DEFAULT_ID;


RichPrintClient_obj::RichPrintClient_obj()
{
}

void RichPrintClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RichPrintClient);
	HX_MARK_MEMBER_NAME(testClassResultType,"testClassResultType");
	HX_MARK_MEMBER_NAME(external,"external");
	::massive::munit::client::PrintClientBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RichPrintClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(testClassResultType,"testClassResultType");
	HX_VISIT_MEMBER_NAME(external,"external");
	::massive::munit::client::PrintClientBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RichPrintClient_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"trim") ) { return trim_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"external") ) { return external; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"printLine") ) { return printLine_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"customTrace") ) { return customTrace_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"printReports") ) { return printReports_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateTestClass") ) { return updateTestClass_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"finalizeTestClass") ) { return finalizeTestClass_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printOverallResult") ) { return printOverallResult_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"testClassResultType") ) { return testClassResultType; }
		if (HX_FIELD_EQ(inName,"initializeTestClass") ) { return initializeTestClass_dyn(); }
		if (HX_FIELD_EQ(inName,"serializeTestResult") ) { return serializeTestResult_dyn(); }
		if (HX_FIELD_EQ(inName,"reportFinalCoverage") ) { return reportFinalCoverage_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"printMissingCoverage") ) { return printMissingCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"printFinalStatistics") ) { return printFinalStatistics_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getTestClassResultType") ) { return getTestClassResultType_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setCurrentTestClassCoverage") ) { return setCurrentTestClassCoverage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RichPrintClient_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"external") ) { external=inValue.Cast< ::massive::munit::client::ExternalPrintClient >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"testClassResultType") ) { testClassResultType=inValue.Cast< ::massive::munit::TestResultType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RichPrintClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("testClassResultType"));
	outFields->push(HX_CSTRING("external"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT_ID"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::massive::munit::TestResultType*/ ,(int)offsetof(RichPrintClient_obj,testClassResultType),HX_CSTRING("testClassResultType")},
	{hx::fsObject /*::massive::munit::client::ExternalPrintClient*/ ,(int)offsetof(RichPrintClient_obj,external),HX_CSTRING("external")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("testClassResultType"),
	HX_CSTRING("external"),
	HX_CSTRING("init"),
	HX_CSTRING("initializeTestClass"),
	HX_CSTRING("updateTestClass"),
	HX_CSTRING("serializeTestResult"),
	HX_CSTRING("finalizeTestClass"),
	HX_CSTRING("getTestClassResultType"),
	HX_CSTRING("setCurrentTestClassCoverage"),
	HX_CSTRING("reportFinalCoverage"),
	HX_CSTRING("trim"),
	HX_CSTRING("printMissingCoverage"),
	HX_CSTRING("printReports"),
	HX_CSTRING("printFinalStatistics"),
	HX_CSTRING("printOverallResult"),
	HX_CSTRING("customTrace"),
	HX_CSTRING("print"),
	HX_CSTRING("printLine"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RichPrintClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RichPrintClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RichPrintClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RichPrintClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

Class RichPrintClient_obj::__mClass;

void RichPrintClient_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.client.RichPrintClient"), hx::TCanCast< RichPrintClient_obj> ,sStaticFields,sMemberFields,
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

void RichPrintClient_obj::__boot()
{
	DEFAULT_ID= HX_CSTRING("RichPrintClient");
}

} // end namespace massive
} // end namespace munit
} // end namespace client
