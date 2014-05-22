#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_TestResultType
#include <massive/munit/TestResultType.h>
#endif
#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void AbstractTestResultClient_obj::__construct()
{
HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","new",0x1e56ed8a,"massive.munit.client.AbstractTestResultClient.new","massive/munit/client/AbstractTestResultClient.hx",108,0x0503e007)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(108)
	this->init();
}
;
	return null();
}

//AbstractTestResultClient_obj::~AbstractTestResultClient_obj() { }

Dynamic AbstractTestResultClient_obj::__CreateEmpty() { return  new AbstractTestResultClient_obj; }
hx::ObjectPtr< AbstractTestResultClient_obj > AbstractTestResultClient_obj::__new()
{  hx::ObjectPtr< AbstractTestResultClient_obj > result = new AbstractTestResultClient_obj();
	result->__construct();
	return result;}

Dynamic AbstractTestResultClient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbstractTestResultClient_obj > result = new AbstractTestResultClient_obj();
	result->__construct();
	return result;}

hx::Object *AbstractTestResultClient_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::massive::munit::ITestResultClient_obj)) return operator ::massive::munit::ITestResultClient_obj *();
	if (inType==typeid( ::massive::munit::ICoverageTestResultClient_obj)) return operator ::massive::munit::ICoverageTestResultClient_obj *();
	if (inType==typeid( ::massive::munit::IAdvancedTestResultClient_obj)) return operator ::massive::munit::IAdvancedTestResultClient_obj *();
	return super::__ToInterface(inType);
}

Dynamic AbstractTestResultClient_obj::get_completionHandler( ){
	HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","get_completionHandler",0x04949a8f,"massive.munit.client.AbstractTestResultClient.get_completionHandler","massive/munit/client/AbstractTestResultClient.hx",61,0x0503e007)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	return this->completionHandler_dyn();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractTestResultClient_obj,get_completionHandler,return )

Dynamic AbstractTestResultClient_obj::set_completionHandler( Dynamic value){
	HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","set_completionHandler",0x589d689b,"massive.munit.client.AbstractTestResultClient.set_completionHandler","massive/munit/client/AbstractTestResultClient.hx",65,0x0503e007)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(65)
	return this->completionHandler = value;
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractTestResultClient_obj,set_completionHandler,return )

::String AbstractTestResultClient_obj::get_output( ){
	HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","get_output",0x0e99bae0,"massive.munit.client.AbstractTestResultClient.get_output","massive/munit/client/AbstractTestResultClient.hx",80,0x0503e007)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	return this->output;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractTestResultClient_obj,get_output,return )

Void AbstractTestResultClient_obj::init( ){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","init",0x6a71a2a6,"massive.munit.client.AbstractTestResultClient.init","massive/munit/client/AbstractTestResultClient.hx",112,0x0503e007)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		this->currentTestClass = null();
		HX_STACK_LINE(115)
		this->currentClassResults = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(116)
		::massive::munit::client::AbstractTestResultClient_obj::traces = Array_obj< ::String >::__new();
		HX_STACK_LINE(118)
		this->passCount = (int)0;
		HX_STACK_LINE(119)
		this->failCount = (int)0;
		HX_STACK_LINE(120)
		this->errorCount = (int)0;
		HX_STACK_LINE(121)
		this->ignoreCount = (int)0;
		HX_STACK_LINE(123)
		this->currentCoverageResult = null();
		HX_STACK_LINE(126)
		this->totalResults = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(127)
		this->totalCoveragePercent = (int)0;
		HX_STACK_LINE(128)
		this->totalCoverageReport = null();
		HX_STACK_LINE(129)
		this->totalCoverageResults = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractTestResultClient_obj,init,(void))

Void AbstractTestResultClient_obj::setCurrentTestClass( ::String className){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","setCurrentTestClass",0xaa1c17f9,"massive.munit.client.AbstractTestResultClient.setCurrentTestClass","massive/munit/client/AbstractTestResultClient.hx",138,0x0503e007)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_LINE(139)
		if (((this->currentTestClass == className))){
			HX_STACK_LINE(139)
			return null();
		}
		HX_STACK_LINE(141)
		if (((this->currentTestClass != null()))){
			HX_STACK_LINE(143)
			this->finalizeTestClass();
		}
		HX_STACK_LINE(146)
		this->currentTestClass = className;
		HX_STACK_LINE(147)
		if (((this->currentTestClass != null()))){
			HX_STACK_LINE(147)
			this->initializeTestClass();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractTestResultClient_obj,setCurrentTestClass,(void))

Void AbstractTestResultClient_obj::addPass( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","addPass",0x2fb921bc,"massive.munit.client.AbstractTestResultClient.addPass","massive/munit/client/AbstractTestResultClient.hx",156,0x0503e007)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(157)
		(this->passCount)++;
		HX_STACK_LINE(158)
		this->updateTestClass(result);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractTestResultClient_obj,addPass,(void))

Void AbstractTestResultClient_obj::addFail( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","addFail",0x291cf6c9,"massive.munit.client.AbstractTestResultClient.addFail","massive/munit/client/AbstractTestResultClient.hx",167,0x0503e007)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(168)
		(this->failCount)++;
		HX_STACK_LINE(169)
		this->updateTestClass(result);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractTestResultClient_obj,addFail,(void))

Void AbstractTestResultClient_obj::addError( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","addError",0x4817dc7d,"massive.munit.client.AbstractTestResultClient.addError","massive/munit/client/AbstractTestResultClient.hx",178,0x0503e007)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(179)
		(this->errorCount)++;
		HX_STACK_LINE(180)
		this->updateTestClass(result);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractTestResultClient_obj,addError,(void))

Void AbstractTestResultClient_obj::addIgnore( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","addIgnore",0x0e2946bd,"massive.munit.client.AbstractTestResultClient.addIgnore","massive/munit/client/AbstractTestResultClient.hx",189,0x0503e007)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(190)
		(this->ignoreCount)++;
		HX_STACK_LINE(191)
		this->updateTestClass(result);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractTestResultClient_obj,addIgnore,(void))

Void AbstractTestResultClient_obj::setCurrentTestClassCoverage( Dynamic result){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","setCurrentTestClassCoverage",0xa4960701,"massive.munit.client.AbstractTestResultClient.setCurrentTestClassCoverage","massive/munit/client/AbstractTestResultClient.hx",196,0x0503e007)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(196)
		this->currentCoverageResult = result;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractTestResultClient_obj,setCurrentTestClassCoverage,(void))

Void AbstractTestResultClient_obj::reportFinalCoverage( Dynamic __o_percent,Dynamic missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency){
Dynamic percent = __o_percent.Default(0);
	HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","reportFinalCoverage",0x4c365754,"massive.munit.client.AbstractTestResultClient.reportFinalCoverage","massive/munit/client/AbstractTestResultClient.hx",206,0x0503e007)
	HX_STACK_THIS(this)
	HX_STACK_ARG(percent,"percent")
	HX_STACK_ARG(missingCoverageResults,"missingCoverageResults")
	HX_STACK_ARG(summary,"summary")
	HX_STACK_ARG(classBreakdown,"classBreakdown")
	HX_STACK_ARG(packageBreakdown,"packageBreakdown")
	HX_STACK_ARG(executionFrequency,"executionFrequency")
{
		HX_STACK_LINE(207)
		this->totalCoveragePercent = percent;
		HX_STACK_LINE(208)
		this->totalCoverageResults = missingCoverageResults;
		HX_STACK_LINE(209)
		this->totalCoverageReport = summary;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(AbstractTestResultClient_obj,reportFinalCoverage,(void))

Dynamic AbstractTestResultClient_obj::reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
	HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","reportFinalStatistics",0x36924f8f,"massive.munit.client.AbstractTestResultClient.reportFinalStatistics","massive/munit/client/AbstractTestResultClient.hx",223,0x0503e007)
	HX_STACK_THIS(this)
	HX_STACK_ARG(testCount,"testCount")
	HX_STACK_ARG(passCount,"passCount")
	HX_STACK_ARG(failCount,"failCount")
	HX_STACK_ARG(errorCount,"errorCount")
	HX_STACK_ARG(ignoreCount,"ignoreCount")
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(224)
	this->finalResult = (passCount == testCount);
	HX_STACK_LINE(226)
	this->printReports();
	HX_STACK_LINE(228)
	this->printFinalStatistics(this->finalResult,testCount,passCount,failCount,errorCount,ignoreCount,time);
	HX_STACK_LINE(230)
	this->printOverallResult(this->finalResult);
	HX_STACK_LINE(232)
	::haxe::Log_obj::trace = this->originalTrace;
	HX_STACK_LINE(233)
	Dynamic _g = this->get_completionHandler();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(233)
	if (((_g != null()))){
		HX_STACK_LINE(233)
		this->get_completionHandler()(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
	}
	HX_STACK_LINE(234)
	return this->get_output();
}


HX_DEFINE_DYNAMIC_FUNC6(AbstractTestResultClient_obj,reportFinalStatistics,return )

Void AbstractTestResultClient_obj::initializeTestClass( ){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","initializeTestClass",0xde174c40,"massive.munit.client.AbstractTestResultClient.initializeTestClass","massive/munit/client/AbstractTestResultClient.hx",244,0x0503e007)
		HX_STACK_THIS(this)
		HX_STACK_LINE(245)
		this->currentClassResults = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(246)
		::massive::munit::client::AbstractTestResultClient_obj::traces = Array_obj< ::String >::__new();
		HX_STACK_LINE(247)
		this->passCount = (int)0;
		HX_STACK_LINE(248)
		this->failCount = (int)0;
		HX_STACK_LINE(249)
		this->errorCount = (int)0;
		HX_STACK_LINE(250)
		this->ignoreCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractTestResultClient_obj,initializeTestClass,(void))

Void AbstractTestResultClient_obj::updateTestClass( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","updateTestClass",0x3734bb67,"massive.munit.client.AbstractTestResultClient.updateTestClass","massive/munit/client/AbstractTestResultClient.hx",257,0x0503e007)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(258)
		this->currentClassResults->push(result);
		HX_STACK_LINE(259)
		this->totalResults->push(result);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractTestResultClient_obj,updateTestClass,(void))

Void AbstractTestResultClient_obj::finalizeTestClass( ){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","finalizeTestClass",0x769cbfb2,"massive.munit.client.AbstractTestResultClient.finalizeTestClass","massive/munit/client/AbstractTestResultClient.hx",267,0x0503e007)
		HX_STACK_THIS(this)
		HX_STACK_LINE(267)
		this->currentClassResults->sort(this->sortTestResults_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractTestResultClient_obj,finalizeTestClass,(void))

Void AbstractTestResultClient_obj::printReports( ){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","printReports",0x93d8ae28,"massive.munit.client.AbstractTestResultClient.printReports","massive/munit/client/AbstractTestResultClient.hx",277,0x0503e007)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractTestResultClient_obj,printReports,(void))

Void AbstractTestResultClient_obj::printFinalStatistics( bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","printFinalStatistics",0x2962c822,"massive.munit.client.AbstractTestResultClient.printFinalStatistics","massive/munit/client/AbstractTestResultClient.hx",285,0x0503e007)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_ARG(testCount,"testCount")
		HX_STACK_ARG(passCount,"passCount")
		HX_STACK_ARG(failCount,"failCount")
		HX_STACK_ARG(errorCount,"errorCount")
		HX_STACK_ARG(ignoreCount,"ignoreCount")
		HX_STACK_ARG(time,"time")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(AbstractTestResultClient_obj,printFinalStatistics,(void))

Void AbstractTestResultClient_obj::printOverallResult( bool result){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","printOverallResult",0xae166ab3,"massive.munit.client.AbstractTestResultClient.printOverallResult","massive/munit/client/AbstractTestResultClient.hx",290,0x0503e007)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractTestResultClient_obj,printOverallResult,(void))

Void AbstractTestResultClient_obj::addTrace( Dynamic value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","addTrace",0xeb0d9f3a,"massive.munit.client.AbstractTestResultClient.addTrace","massive/munit/client/AbstractTestResultClient.hx",297,0x0503e007)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(298)
		::String _g = ::Std_obj::string(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(298)
		::String traceString = ((((info->__Field(HX_CSTRING("fileName"),true) + HX_CSTRING("|")) + info->__Field(HX_CSTRING("lineNumber"),true)) + HX_CSTRING("| ")) + _g);		HX_STACK_VAR(traceString,"traceString");
		HX_STACK_LINE(299)
		::massive::munit::client::AbstractTestResultClient_obj::traces->push(traceString);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AbstractTestResultClient_obj,addTrace,(void))

Array< ::String > AbstractTestResultClient_obj::getTraces( ){
	HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","getTraces",0x8510082e,"massive.munit.client.AbstractTestResultClient.getTraces","massive/munit/client/AbstractTestResultClient.hx",307,0x0503e007)
	HX_STACK_THIS(this)
	HX_STACK_LINE(307)
	return ::massive::munit::client::AbstractTestResultClient_obj::traces->concat(Array_obj< ::String >::__new());
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractTestResultClient_obj,getTraces,return )

int AbstractTestResultClient_obj::sortTestResults( ::massive::munit::TestResult a,::massive::munit::TestResult b){
	HX_STACK_FRAME("massive.munit.client.AbstractTestResultClient","sortTestResults",0x13478c30,"massive.munit.client.AbstractTestResultClient.sortTestResults","massive/munit/client/AbstractTestResultClient.hx",311,0x0503e007)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(312)
	int aInt;		HX_STACK_VAR(aInt,"aInt");
	HX_STACK_LINE(312)
	{
		HX_STACK_LINE(312)
		::massive::munit::TestResultType _g = a->get_type();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(312)
		switch( (int)(_g->__Index())){
			case (int)3: {
				HX_STACK_LINE(314)
				aInt = (int)2;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(315)
				aInt = (int)1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(316)
				aInt = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(317)
				aInt = (int)-1;
			}
			;break;
			default: {
				HX_STACK_LINE(318)
				aInt = (int)-2;
			}
		}
	}
	HX_STACK_LINE(321)
	int bInt;		HX_STACK_VAR(bInt,"bInt");
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		::massive::munit::TestResultType _g = b->get_type();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(321)
		switch( (int)(_g->__Index())){
			case (int)3: {
				HX_STACK_LINE(323)
				bInt = (int)2;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(324)
				bInt = (int)1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(325)
				bInt = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(326)
				bInt = (int)-1;
			}
			;break;
			default: {
				HX_STACK_LINE(327)
				bInt = (int)-2;
			}
		}
	}
	HX_STACK_LINE(330)
	return (aInt - bInt);
}


HX_DEFINE_DYNAMIC_FUNC2(AbstractTestResultClient_obj,sortTestResults,return )

Array< ::String > AbstractTestResultClient_obj::traces;


AbstractTestResultClient_obj::AbstractTestResultClient_obj()
{
}

void AbstractTestResultClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractTestResultClient);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(completionHandler,"completionHandler");
	HX_MARK_MEMBER_NAME(output,"output");
	HX_MARK_MEMBER_NAME(passCount,"passCount");
	HX_MARK_MEMBER_NAME(failCount,"failCount");
	HX_MARK_MEMBER_NAME(errorCount,"errorCount");
	HX_MARK_MEMBER_NAME(ignoreCount,"ignoreCount");
	HX_MARK_MEMBER_NAME(currentTestClass,"currentTestClass");
	HX_MARK_MEMBER_NAME(currentClassResults,"currentClassResults");
	HX_MARK_MEMBER_NAME(currentCoverageResult,"currentCoverageResult");
	HX_MARK_MEMBER_NAME(totalResults,"totalResults");
	HX_MARK_MEMBER_NAME(totalCoveragePercent,"totalCoveragePercent");
	HX_MARK_MEMBER_NAME(totalCoverageReport,"totalCoverageReport");
	HX_MARK_MEMBER_NAME(totalCoverageResults,"totalCoverageResults");
	HX_MARK_MEMBER_NAME(originalTrace,"originalTrace");
	HX_MARK_MEMBER_NAME(finalResult,"finalResult");
	HX_MARK_END_CLASS();
}

void AbstractTestResultClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(completionHandler,"completionHandler");
	HX_VISIT_MEMBER_NAME(output,"output");
	HX_VISIT_MEMBER_NAME(passCount,"passCount");
	HX_VISIT_MEMBER_NAME(failCount,"failCount");
	HX_VISIT_MEMBER_NAME(errorCount,"errorCount");
	HX_VISIT_MEMBER_NAME(ignoreCount,"ignoreCount");
	HX_VISIT_MEMBER_NAME(currentTestClass,"currentTestClass");
	HX_VISIT_MEMBER_NAME(currentClassResults,"currentClassResults");
	HX_VISIT_MEMBER_NAME(currentCoverageResult,"currentCoverageResult");
	HX_VISIT_MEMBER_NAME(totalResults,"totalResults");
	HX_VISIT_MEMBER_NAME(totalCoveragePercent,"totalCoveragePercent");
	HX_VISIT_MEMBER_NAME(totalCoverageReport,"totalCoverageReport");
	HX_VISIT_MEMBER_NAME(totalCoverageResults,"totalCoverageResults");
	HX_VISIT_MEMBER_NAME(originalTrace,"originalTrace");
	HX_VISIT_MEMBER_NAME(finalResult,"finalResult");
}

Dynamic AbstractTestResultClient_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"traces") ) { return traces; }
		if (HX_FIELD_EQ(inName,"output") ) { return inCallProp ? get_output() : output; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addPass") ) { return addPass_dyn(); }
		if (HX_FIELD_EQ(inName,"addFail") ) { return addFail_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addError") ) { return addError_dyn(); }
		if (HX_FIELD_EQ(inName,"addTrace") ) { return addTrace_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"passCount") ) { return passCount; }
		if (HX_FIELD_EQ(inName,"failCount") ) { return failCount; }
		if (HX_FIELD_EQ(inName,"addIgnore") ) { return addIgnore_dyn(); }
		if (HX_FIELD_EQ(inName,"getTraces") ) { return getTraces_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_output") ) { return get_output_dyn(); }
		if (HX_FIELD_EQ(inName,"errorCount") ) { return errorCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ignoreCount") ) { return ignoreCount; }
		if (HX_FIELD_EQ(inName,"finalResult") ) { return finalResult; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"totalResults") ) { return totalResults; }
		if (HX_FIELD_EQ(inName,"printReports") ) { return printReports_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalTrace") ) { return originalTrace; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateTestClass") ) { return updateTestClass_dyn(); }
		if (HX_FIELD_EQ(inName,"sortTestResults") ) { return sortTestResults_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentTestClass") ) { return currentTestClass; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { return inCallProp ? get_completionHandler() : completionHandler; }
		if (HX_FIELD_EQ(inName,"finalizeTestClass") ) { return finalizeTestClass_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printOverallResult") ) { return printOverallResult_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentClassResults") ) { return currentClassResults; }
		if (HX_FIELD_EQ(inName,"totalCoverageReport") ) { return totalCoverageReport; }
		if (HX_FIELD_EQ(inName,"setCurrentTestClass") ) { return setCurrentTestClass_dyn(); }
		if (HX_FIELD_EQ(inName,"reportFinalCoverage") ) { return reportFinalCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"initializeTestClass") ) { return initializeTestClass_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"totalCoveragePercent") ) { return totalCoveragePercent; }
		if (HX_FIELD_EQ(inName,"totalCoverageResults") ) { return totalCoverageResults; }
		if (HX_FIELD_EQ(inName,"printFinalStatistics") ) { return printFinalStatistics_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_completionHandler") ) { return get_completionHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_completionHandler") ) { return set_completionHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"currentCoverageResult") ) { return currentCoverageResult; }
		if (HX_FIELD_EQ(inName,"reportFinalStatistics") ) { return reportFinalStatistics_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setCurrentTestClassCoverage") ) { return setCurrentTestClassCoverage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AbstractTestResultClient_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"traces") ) { traces=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"output") ) { output=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"passCount") ) { passCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"failCount") ) { failCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"errorCount") ) { errorCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ignoreCount") ) { ignoreCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finalResult") ) { finalResult=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"totalResults") ) { totalResults=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalTrace") ) { originalTrace=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentTestClass") ) { currentTestClass=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { if (inCallProp) return set_completionHandler(inValue);completionHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentClassResults") ) { currentClassResults=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalCoverageReport") ) { totalCoverageReport=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"totalCoveragePercent") ) { totalCoveragePercent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalCoverageResults") ) { totalCoverageResults=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"currentCoverageResult") ) { currentCoverageResult=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractTestResultClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("output"));
	outFields->push(HX_CSTRING("passCount"));
	outFields->push(HX_CSTRING("failCount"));
	outFields->push(HX_CSTRING("errorCount"));
	outFields->push(HX_CSTRING("ignoreCount"));
	outFields->push(HX_CSTRING("currentTestClass"));
	outFields->push(HX_CSTRING("currentClassResults"));
	outFields->push(HX_CSTRING("currentCoverageResult"));
	outFields->push(HX_CSTRING("totalResults"));
	outFields->push(HX_CSTRING("totalCoveragePercent"));
	outFields->push(HX_CSTRING("totalCoverageReport"));
	outFields->push(HX_CSTRING("totalCoverageResults"));
	outFields->push(HX_CSTRING("originalTrace"));
	outFields->push(HX_CSTRING("finalResult"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("traces"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(AbstractTestResultClient_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AbstractTestResultClient_obj,completionHandler),HX_CSTRING("completionHandler")},
	{hx::fsString,(int)offsetof(AbstractTestResultClient_obj,output),HX_CSTRING("output")},
	{hx::fsInt,(int)offsetof(AbstractTestResultClient_obj,passCount),HX_CSTRING("passCount")},
	{hx::fsInt,(int)offsetof(AbstractTestResultClient_obj,failCount),HX_CSTRING("failCount")},
	{hx::fsInt,(int)offsetof(AbstractTestResultClient_obj,errorCount),HX_CSTRING("errorCount")},
	{hx::fsInt,(int)offsetof(AbstractTestResultClient_obj,ignoreCount),HX_CSTRING("ignoreCount")},
	{hx::fsString,(int)offsetof(AbstractTestResultClient_obj,currentTestClass),HX_CSTRING("currentTestClass")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AbstractTestResultClient_obj,currentClassResults),HX_CSTRING("currentClassResults")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AbstractTestResultClient_obj,currentCoverageResult),HX_CSTRING("currentCoverageResult")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AbstractTestResultClient_obj,totalResults),HX_CSTRING("totalResults")},
	{hx::fsFloat,(int)offsetof(AbstractTestResultClient_obj,totalCoveragePercent),HX_CSTRING("totalCoveragePercent")},
	{hx::fsString,(int)offsetof(AbstractTestResultClient_obj,totalCoverageReport),HX_CSTRING("totalCoverageReport")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AbstractTestResultClient_obj,totalCoverageResults),HX_CSTRING("totalCoverageResults")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AbstractTestResultClient_obj,originalTrace),HX_CSTRING("originalTrace")},
	{hx::fsBool,(int)offsetof(AbstractTestResultClient_obj,finalResult),HX_CSTRING("finalResult")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("completionHandler"),
	HX_CSTRING("get_completionHandler"),
	HX_CSTRING("set_completionHandler"),
	HX_CSTRING("output"),
	HX_CSTRING("get_output"),
	HX_CSTRING("passCount"),
	HX_CSTRING("failCount"),
	HX_CSTRING("errorCount"),
	HX_CSTRING("ignoreCount"),
	HX_CSTRING("currentTestClass"),
	HX_CSTRING("currentClassResults"),
	HX_CSTRING("currentCoverageResult"),
	HX_CSTRING("totalResults"),
	HX_CSTRING("totalCoveragePercent"),
	HX_CSTRING("totalCoverageReport"),
	HX_CSTRING("totalCoverageResults"),
	HX_CSTRING("originalTrace"),
	HX_CSTRING("finalResult"),
	HX_CSTRING("init"),
	HX_CSTRING("setCurrentTestClass"),
	HX_CSTRING("addPass"),
	HX_CSTRING("addFail"),
	HX_CSTRING("addError"),
	HX_CSTRING("addIgnore"),
	HX_CSTRING("setCurrentTestClassCoverage"),
	HX_CSTRING("reportFinalCoverage"),
	HX_CSTRING("reportFinalStatistics"),
	HX_CSTRING("initializeTestClass"),
	HX_CSTRING("updateTestClass"),
	HX_CSTRING("finalizeTestClass"),
	HX_CSTRING("printReports"),
	HX_CSTRING("printFinalStatistics"),
	HX_CSTRING("printOverallResult"),
	HX_CSTRING("addTrace"),
	HX_CSTRING("getTraces"),
	HX_CSTRING("sortTestResults"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractTestResultClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AbstractTestResultClient_obj::traces,"traces");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractTestResultClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AbstractTestResultClient_obj::traces,"traces");
};

#endif

Class AbstractTestResultClient_obj::__mClass;

void AbstractTestResultClient_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.client.AbstractTestResultClient"), hx::TCanCast< AbstractTestResultClient_obj> ,sStaticFields,sMemberFields,
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

void AbstractTestResultClient_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
} // end namespace client
