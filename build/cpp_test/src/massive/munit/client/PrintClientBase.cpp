#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_massive_munit_client_PrintClientBase
#include <massive/munit/client/PrintClientBase.h>
#endif
#ifndef INCLUDED_massive_munit_util_MathUtil
#include <massive/munit/util/MathUtil.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void PrintClientBase_obj::__construct(Dynamic __o_includeIgnoredReport)
{
HX_STACK_FRAME("massive.munit.client.PrintClientBase","new",0x78e7185f,"massive.munit.client.PrintClientBase.new","massive/munit/client/PrintClientBase.hx",52,0x1ddc6930)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_includeIgnoredReport,"includeIgnoredReport")
Dynamic includeIgnoredReport = __o_includeIgnoredReport.Default(true);
{
	HX_STACK_LINE(53)
	super::__construct();
	HX_STACK_LINE(54)
	this->id = HX_CSTRING("simple");
	HX_STACK_LINE(55)
	this->verbose = false;
	HX_STACK_LINE(56)
	this->includeIgnoredReport = includeIgnoredReport;
	HX_STACK_LINE(58)
	this->printLine(HX_CSTRING("MUnit Results"),null());
	HX_STACK_LINE(59)
	this->printLine(this->divider,null());
}
;
	return null();
}

//PrintClientBase_obj::~PrintClientBase_obj() { }

Dynamic PrintClientBase_obj::__CreateEmpty() { return  new PrintClientBase_obj; }
hx::ObjectPtr< PrintClientBase_obj > PrintClientBase_obj::__new(Dynamic __o_includeIgnoredReport)
{  hx::ObjectPtr< PrintClientBase_obj > result = new PrintClientBase_obj();
	result->__construct(__o_includeIgnoredReport);
	return result;}

Dynamic PrintClientBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PrintClientBase_obj > result = new PrintClientBase_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PrintClientBase_obj::init( ){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","init",0x4e06f231,"massive.munit.client.PrintClientBase.init","massive/munit/client/PrintClientBase.hx",63,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->super::init();
		HX_STACK_LINE(65)
		this->divider = HX_CSTRING("------------------------------");
		HX_STACK_LINE(66)
		this->divider2 = HX_CSTRING("==============================");
	}
return null();
}


Void PrintClientBase_obj::initializeTestClass( ){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","initializeTestClass",0x4df93115,"massive.munit.client.PrintClientBase.initializeTestClass","massive/munit/client/PrintClientBase.hx",72,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		this->super::initializeTestClass();
		HX_STACK_LINE(74)
		this->printLine(((HX_CSTRING("Class: ") + this->currentTestClass) + HX_CSTRING(" ")),null());
	}
return null();
}


Void PrintClientBase_obj::updateTestClass( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","updateTestClass",0xc78451bc,"massive.munit.client.PrintClientBase.updateTestClass","massive/munit/client/PrintClientBase.hx",78,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(79)
		this->super::updateTestClass(result);
		HX_STACK_LINE(80)
		if ((this->verbose)){
			HX_STACK_LINE(80)
			::massive::munit::TestResultType _g = result->get_type();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			::String _g1 = ::Std_obj::string(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(80)
			::String _g2 = (((HX_CSTRING(" ") + result->name) + HX_CSTRING(": ")) + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(80)
			::String _g3 = (_g2 + HX_CSTRING(" "));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(80)
			this->printLine(_g3,null());
		}
		else{
			HX_STACK_LINE(83)
			::massive::munit::TestResultType _g = result->get_type();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(85)
					this->print(HX_CSTRING("."));
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(86)
					this->print(HX_CSTRING("!"));
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(87)
					this->print(HX_CSTRING("x"));
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(88)
					this->print(HX_CSTRING(","));
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(89)
					Dynamic();
				}
				;break;
			}
		}
	}
return null();
}


Void PrintClientBase_obj::finalizeTestClass( ){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","finalizeTestClass",0x6abe5547,"massive.munit.client.PrintClientBase.finalizeTestClass","massive/munit/client/PrintClientBase.hx",95,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		this->super::finalizeTestClass();
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(98)
			Array< ::String > _g1 = this->getTraces();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(98)
			while((true)){
				HX_STACK_LINE(98)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(98)
					break;
				}
				HX_STACK_LINE(98)
				::String item = _g1->__get(_g);		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(98)
				++(_g);
				HX_STACK_LINE(100)
				this->printLine((HX_CSTRING("TRACE: ") + item),(int)1);
			}
		}
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			Array< ::Dynamic > _g1 = this->currentClassResults;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(103)
			while((true)){
				HX_STACK_LINE(103)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(103)
					break;
				}
				HX_STACK_LINE(103)
				::massive::munit::TestResult result = _g1->__get(_g).StaticCast< ::massive::munit::TestResult >();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(103)
				++(_g);
				HX_STACK_LINE(105)
				{
					HX_STACK_LINE(105)
					::massive::munit::TestResultType _g2 = result->get_type();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(105)
					switch( (int)(_g2->__Index())){
						case (int)3: {
							HX_STACK_LINE(107)
							::String _g3 = ::Std_obj::string(result->error);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(107)
							::String _g11 = (HX_CSTRING("ERROR: ") + _g3);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(107)
							this->printLine(_g11,(int)1);
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(108)
							::String _g21 = ::Std_obj::string(result->failure);		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(108)
							::String _g3 = (HX_CSTRING("FAIL: ") + _g21);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(108)
							this->printLine(_g3,(int)1);
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(111)
							::String ingoredString = result->get_location();		HX_STACK_VAR(ingoredString,"ingoredString");
							HX_STACK_LINE(112)
							if (((result->description != null()))){
								HX_STACK_LINE(112)
								hx::AddEq(ingoredString,(HX_CSTRING(" - ") + result->description));
							}
							HX_STACK_LINE(113)
							this->printLine((HX_CSTRING("IGNORE: ") + ingoredString),(int)1);
						}
						;break;
						case (int)1: case (int)0: {
							HX_STACK_LINE(115)
							Dynamic();
						}
						;break;
					}
				}
			}
		}
	}
return null();
}


Void PrintClientBase_obj::setCurrentTestClassCoverage( Dynamic result){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","setCurrentTestClassCoverage",0xe1d848d6,"massive.munit.client.PrintClientBase.setCurrentTestClassCoverage","massive/munit/client/PrintClientBase.hx",122,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(123)
		this->super::setCurrentTestClassCoverage(result);
		HX_STACK_LINE(124)
		this->print(((HX_CSTRING(" [") + result->__Field(HX_CSTRING("percent"),true)) + HX_CSTRING("%]")));
	}
return null();
}


Void PrintClientBase_obj::reportFinalCoverage( Dynamic __o_percent,Dynamic missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency){
Dynamic percent = __o_percent.Default(0);
	HX_STACK_FRAME("massive.munit.client.PrintClientBase","reportFinalCoverage",0xbc183c29,"massive.munit.client.PrintClientBase.reportFinalCoverage","massive/munit/client/PrintClientBase.hx",142,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(percent,"percent")
	HX_STACK_ARG(missingCoverageResults,"missingCoverageResults")
	HX_STACK_ARG(summary,"summary")
	HX_STACK_ARG(classBreakdown,"classBreakdown")
	HX_STACK_ARG(packageBreakdown,"packageBreakdown")
	HX_STACK_ARG(executionFrequency,"executionFrequency")
{
		HX_STACK_LINE(143)
		this->super::reportFinalCoverage(percent,missingCoverageResults,summary,classBreakdown,packageBreakdown,executionFrequency);
		HX_STACK_LINE(145)
		this->printLine(HX_CSTRING(""),null());
		HX_STACK_LINE(146)
		this->printLine(this->divider,null());
		HX_STACK_LINE(147)
		this->printLine(HX_CSTRING("COVERAGE REPORT"),null());
		HX_STACK_LINE(148)
		this->printLine(this->divider,null());
		HX_STACK_LINE(150)
		if (((bool((missingCoverageResults != null())) && bool((missingCoverageResults->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(152)
			this->printLine(HX_CSTRING("MISSING CODE BLOCKS:"),null());
			HX_STACK_LINE(153)
			{
				HX_STACK_LINE(153)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(153)
				while((true)){
					HX_STACK_LINE(153)
					if ((!(((_g < missingCoverageResults->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(153)
						break;
					}
					HX_STACK_LINE(153)
					Dynamic result = missingCoverageResults->__GetItem(_g);		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(153)
					++(_g);
					HX_STACK_LINE(155)
					this->printLine((((result->__Field(HX_CSTRING("className"),true) + HX_CSTRING(" [")) + result->__Field(HX_CSTRING("percent"),true)) + HX_CSTRING("%]")),(int)1);
					HX_STACK_LINE(156)
					{
						HX_STACK_LINE(156)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(156)
						Array< ::String > _g2 = result->__Field(HX_CSTRING("blocks"),true);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(156)
						while((true)){
							HX_STACK_LINE(156)
							if ((!(((_g1 < _g2->length))))){
								HX_STACK_LINE(156)
								break;
							}
							HX_STACK_LINE(156)
							::String item = _g2->__get(_g1);		HX_STACK_VAR(item,"item");
							HX_STACK_LINE(156)
							++(_g1);
							HX_STACK_LINE(158)
							this->printIndentedLines(item,(int)2);
						}
					}
					HX_STACK_LINE(160)
					this->printLine(HX_CSTRING(""),null());
				}
			}
		}
		HX_STACK_LINE(164)
		if (((executionFrequency != null()))){
			HX_STACK_LINE(166)
			this->printLine(HX_CSTRING("CODE EXECUTION FREQUENCY:"),null());
			HX_STACK_LINE(167)
			this->printIndentedLines(executionFrequency,(int)1);
			HX_STACK_LINE(169)
			this->printLine(HX_CSTRING(""),null());
		}
		HX_STACK_LINE(172)
		if (((classBreakdown != null()))){
			HX_STACK_LINE(174)
			this->printIndentedLines(classBreakdown,(int)0);
		}
		HX_STACK_LINE(177)
		if (((packageBreakdown != null()))){
			HX_STACK_LINE(179)
			this->printIndentedLines(packageBreakdown,(int)0);
		}
		HX_STACK_LINE(182)
		if (((summary != null()))){
			HX_STACK_LINE(184)
			this->printIndentedLines(summary,(int)0);
		}
	}
return null();
}


Void PrintClientBase_obj::printIndentedLines( ::String value,hx::Null< int >  __o_indent){
int indent = __o_indent.Default(1);
	HX_STACK_FRAME("massive.munit.client.PrintClientBase","printIndentedLines",0x85b904a8,"massive.munit.client.PrintClientBase.printIndentedLines","massive/munit/client/PrintClientBase.hx",189,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(indent,"indent")
{
		HX_STACK_LINE(190)
		Array< ::String > lines = value.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(191)
			while((true)){
				HX_STACK_LINE(191)
				if ((!(((_g < lines->length))))){
					HX_STACK_LINE(191)
					break;
				}
				HX_STACK_LINE(191)
				::String line = lines->__get(_g);		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(191)
				++(_g);
				HX_STACK_LINE(193)
				this->printLine(line,indent);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PrintClientBase_obj,printIndentedLines,(void))

Void PrintClientBase_obj::printReports( ){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","printReports",0x9ce900b3,"massive.munit.client.PrintClientBase.printReports","massive/munit/client/PrintClientBase.hx",200,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_LINE(200)
		this->printFinalIgnoredStatistics(this->ignoreCount);
	}
return null();
}


Void PrintClientBase_obj::printFinalIgnoredStatistics( int count){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","printFinalIgnoredStatistics",0x09275b8b,"massive.munit.client.PrintClientBase.printFinalIgnoredStatistics","massive/munit/client/PrintClientBase.hx",204,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(205)
		if (((bool(!(this->includeIgnoredReport)) || bool((count == (int)0))))){
			HX_STACK_LINE(205)
			return null();
		}
		HX_STACK_LINE(207)
		::List items = ::Lambda_obj::filter(this->totalResults,this->filterIngored_dyn());		HX_STACK_VAR(items,"items");
		HX_STACK_LINE(209)
		if (((items->length == (int)0))){
			HX_STACK_LINE(209)
			return null();
		}
		HX_STACK_LINE(211)
		this->printLine(HX_CSTRING(""),null());
		HX_STACK_LINE(212)
		this->printLine(((HX_CSTRING("Ignored (") + count) + HX_CSTRING("):")),null());
		HX_STACK_LINE(213)
		this->printLine(this->divider,null());
		HX_STACK_LINE(215)
		for(::cpp::FastIterator_obj< ::massive::munit::TestResult > *__it = ::cpp::CreateFastIterator< ::massive::munit::TestResult >(items->iterator());  __it->hasNext(); ){
			::massive::munit::TestResult result = __it->next();
			{
				HX_STACK_LINE(217)
				::String ingoredString = result->get_location();		HX_STACK_VAR(ingoredString,"ingoredString");
				HX_STACK_LINE(218)
				if (((result->description != null()))){
					HX_STACK_LINE(218)
					hx::AddEq(ingoredString,(HX_CSTRING(" - ") + result->description));
				}
				HX_STACK_LINE(219)
				this->printLine((HX_CSTRING("IGNORE: ") + ingoredString),(int)1);
			}
;
		}
		HX_STACK_LINE(221)
		this->printLine(HX_CSTRING(""),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PrintClientBase_obj,printFinalIgnoredStatistics,(void))

bool PrintClientBase_obj::filterIngored( ::massive::munit::TestResult result){
	HX_STACK_FRAME("massive.munit.client.PrintClientBase","filterIngored",0x7df97a0b,"massive.munit.client.PrintClientBase.filterIngored","massive/munit/client/PrintClientBase.hx",225,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(226)
	::massive::munit::TestResultType _g = result->get_type();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(226)
	return (_g == ::massive::munit::TestResultType_obj::IGNORE);
}


HX_DEFINE_DYNAMIC_FUNC1(PrintClientBase_obj,filterIngored,return )

Void PrintClientBase_obj::printFinalStatistics( bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","printFinalStatistics",0x9f291dad,"massive.munit.client.PrintClientBase.printFinalStatistics","massive/munit/client/PrintClientBase.hx",230,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_ARG(testCount,"testCount")
		HX_STACK_ARG(passCount,"passCount")
		HX_STACK_ARG(failCount,"failCount")
		HX_STACK_ARG(errorCount,"errorCount")
		HX_STACK_ARG(ignoreCount,"ignoreCount")
		HX_STACK_ARG(time,"time")
		HX_STACK_LINE(231)
		this->printLine(this->divider2,null());
		HX_STACK_LINE(232)
		::String resultString;		HX_STACK_VAR(resultString,"resultString");
		HX_STACK_LINE(232)
		if ((result)){
			HX_STACK_LINE(232)
			resultString = HX_CSTRING("PASSED");
		}
		else{
			HX_STACK_LINE(232)
			resultString = HX_CSTRING("FAILED");
		}
		HX_STACK_LINE(238)
		Float _g = ::massive::munit::util::MathUtil_obj::round(time,(int)5);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(233)
		::String _g1 = (((((((((((HX_CSTRING("\nTests: ") + testCount) + HX_CSTRING("  Passed: ")) + passCount) + HX_CSTRING("  Failed: ")) + failCount) + HX_CSTRING(" Errors: ")) + errorCount) + HX_CSTRING(" Ignored: ")) + ignoreCount) + HX_CSTRING(" Time: ")) + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(233)
		hx::AddEq(resultString,_g1);
		HX_STACK_LINE(240)
		this->printLine(resultString,null());
		HX_STACK_LINE(241)
		this->printLine(HX_CSTRING(""),null());
	}
return null();
}


Void PrintClientBase_obj::printOverallResult( bool result){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","printOverallResult",0x5757b77e,"massive.munit.client.PrintClientBase.printOverallResult","massive/munit/client/PrintClientBase.hx",246,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(246)
		this->printLine(HX_CSTRING(""),null());
	}
return null();
}


Void PrintClientBase_obj::print( Dynamic value){
{
		HX_STACK_FRAME("massive.munit.client.PrintClientBase","print",0x027fddec,"massive.munit.client.PrintClientBase.print","massive/munit/client/PrintClientBase.hx",251,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(252)
		::String _g = ::Std_obj::string(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(252)
		hx::AddEq(this->output,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PrintClientBase_obj,print,(void))

Void PrintClientBase_obj::printLine( Dynamic value,Dynamic __o_indent){
Dynamic indent = __o_indent.Default(0);
	HX_STACK_FRAME("massive.munit.client.PrintClientBase","printLine",0x514f8800,"massive.munit.client.PrintClientBase.printLine","massive/munit/client/PrintClientBase.hx",256,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(indent,"indent")
{
		HX_STACK_LINE(257)
		::String _g = ::Std_obj::string(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(257)
		value = _g;
		HX_STACK_LINE(258)
		::String _g1 = this->indentString(value,indent);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(258)
		value = _g1;
		HX_STACK_LINE(259)
		::String _g2 = ::Std_obj::string(value);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(259)
		::String _g3 = (HX_CSTRING("\n") + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(259)
		this->print(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PrintClientBase_obj,printLine,(void))

::String PrintClientBase_obj::indentString( ::String value,Dynamic __o_indent){
Dynamic indent = __o_indent.Default(0);
	HX_STACK_FRAME("massive.munit.client.PrintClientBase","indentString",0xed10027e,"massive.munit.client.PrintClientBase.indentString","massive/munit/client/PrintClientBase.hx",263,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(indent,"indent")
{
		HX_STACK_LINE(264)
		if (((indent > (int)0))){
			HX_STACK_LINE(266)
			::String _g = ::StringTools_obj::lpad(HX_CSTRING(""),HX_CSTRING(" "),(indent * (int)4));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(266)
			::String _g1 = (_g + value);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(266)
			value = _g1;
		}
		HX_STACK_LINE(269)
		if (((value == HX_CSTRING("")))){
			HX_STACK_LINE(269)
			value = HX_CSTRING("");
		}
		HX_STACK_LINE(270)
		return value;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(PrintClientBase_obj,indentString,return )

::String PrintClientBase_obj::DEFAULT_ID;


PrintClientBase_obj::PrintClientBase_obj()
{
}

void PrintClientBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PrintClientBase);
	HX_MARK_MEMBER_NAME(verbose,"verbose");
	HX_MARK_MEMBER_NAME(includeIgnoredReport,"includeIgnoredReport");
	HX_MARK_MEMBER_NAME(divider,"divider");
	HX_MARK_MEMBER_NAME(divider2,"divider2");
	::massive::munit::client::AbstractTestResultClient_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PrintClientBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(verbose,"verbose");
	HX_VISIT_MEMBER_NAME(includeIgnoredReport,"includeIgnoredReport");
	HX_VISIT_MEMBER_NAME(divider,"divider");
	HX_VISIT_MEMBER_NAME(divider2,"divider2");
	::massive::munit::client::AbstractTestResultClient_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PrintClientBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { return verbose; }
		if (HX_FIELD_EQ(inName,"divider") ) { return divider; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"divider2") ) { return divider2; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"printLine") ) { return printLine_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"printReports") ) { return printReports_dyn(); }
		if (HX_FIELD_EQ(inName,"indentString") ) { return indentString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterIngored") ) { return filterIngored_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateTestClass") ) { return updateTestClass_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"finalizeTestClass") ) { return finalizeTestClass_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printIndentedLines") ) { return printIndentedLines_dyn(); }
		if (HX_FIELD_EQ(inName,"printOverallResult") ) { return printOverallResult_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"initializeTestClass") ) { return initializeTestClass_dyn(); }
		if (HX_FIELD_EQ(inName,"reportFinalCoverage") ) { return reportFinalCoverage_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"includeIgnoredReport") ) { return includeIgnoredReport; }
		if (HX_FIELD_EQ(inName,"printFinalStatistics") ) { return printFinalStatistics_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setCurrentTestClassCoverage") ) { return setCurrentTestClassCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"printFinalIgnoredStatistics") ) { return printFinalIgnoredStatistics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PrintClientBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"divider") ) { divider=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"divider2") ) { divider2=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"includeIgnoredReport") ) { includeIgnoredReport=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PrintClientBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("verbose"));
	outFields->push(HX_CSTRING("includeIgnoredReport"));
	outFields->push(HX_CSTRING("divider"));
	outFields->push(HX_CSTRING("divider2"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT_ID"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PrintClientBase_obj,verbose),HX_CSTRING("verbose")},
	{hx::fsBool,(int)offsetof(PrintClientBase_obj,includeIgnoredReport),HX_CSTRING("includeIgnoredReport")},
	{hx::fsString,(int)offsetof(PrintClientBase_obj,divider),HX_CSTRING("divider")},
	{hx::fsString,(int)offsetof(PrintClientBase_obj,divider2),HX_CSTRING("divider2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("verbose"),
	HX_CSTRING("includeIgnoredReport"),
	HX_CSTRING("divider"),
	HX_CSTRING("divider2"),
	HX_CSTRING("init"),
	HX_CSTRING("initializeTestClass"),
	HX_CSTRING("updateTestClass"),
	HX_CSTRING("finalizeTestClass"),
	HX_CSTRING("setCurrentTestClassCoverage"),
	HX_CSTRING("reportFinalCoverage"),
	HX_CSTRING("printIndentedLines"),
	HX_CSTRING("printReports"),
	HX_CSTRING("printFinalIgnoredStatistics"),
	HX_CSTRING("filterIngored"),
	HX_CSTRING("printFinalStatistics"),
	HX_CSTRING("printOverallResult"),
	HX_CSTRING("print"),
	HX_CSTRING("printLine"),
	HX_CSTRING("indentString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrintClientBase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PrintClientBase_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrintClientBase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PrintClientBase_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

Class PrintClientBase_obj::__mClass;

void PrintClientBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.client.PrintClientBase"), hx::TCanCast< PrintClientBase_obj> ,sStaticFields,sMemberFields,
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

void PrintClientBase_obj::__boot()
{
	DEFAULT_ID= HX_CSTRING("simple");
}

} // end namespace massive
} // end namespace munit
} // end namespace client
