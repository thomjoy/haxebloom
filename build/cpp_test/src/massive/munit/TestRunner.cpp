#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_munit_Assert
#include <massive/munit/Assert.h>
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
#ifndef INCLUDED_massive_munit_TestClassHelper
#include <massive/munit/TestClassHelper.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_TestRunner
#include <massive/munit/TestRunner.h>
#endif
#ifndef INCLUDED_massive_munit_TestSuite
#include <massive/munit/TestSuite.h>
#endif
#ifndef INCLUDED_massive_munit_UnhandledException
#include <massive/munit/UnhandledException.h>
#endif
#ifndef INCLUDED_massive_munit_async_AsyncDelegate
#include <massive/munit/async/AsyncDelegate.h>
#endif
#ifndef INCLUDED_massive_munit_async_AsyncFactory
#include <massive/munit/async/AsyncFactory.h>
#endif
#ifndef INCLUDED_massive_munit_async_AsyncTimeoutException
#include <massive/munit/async/AsyncTimeoutException.h>
#endif
#ifndef INCLUDED_massive_munit_async_IAsyncDelegateObserver
#include <massive/munit/async/IAsyncDelegateObserver.h>
#endif
#ifndef INCLUDED_massive_munit_async_MissingAsyncDelegateException
#include <massive/munit/async/MissingAsyncDelegateException.h>
#endif
#ifndef INCLUDED_massive_munit_util_Timer
#include <massive/munit/util/Timer.h>
#endif
#ifndef INCLUDED_org_hamcrest_AssertionException
#include <org/hamcrest/AssertionException.h>
#endif
#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
namespace massive{
namespace munit{

Void TestRunner_obj::__construct(::massive::munit::ITestResultClient resultClient)
{
HX_STACK_FRAME("massive.munit.TestRunner","new",0x95fc899b,"massive.munit.TestRunner.new","massive/munit/TestRunner.hx",146,0x7b3fda33)
HX_STACK_THIS(this)
HX_STACK_ARG(resultClient,"resultClient")
{
	HX_STACK_LINE(147)
	Array< ::massive::munit::ITestResultClient > _g = Array_obj< ::massive::munit::ITestResultClient >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(147)
	this->clients = _g;
	HX_STACK_LINE(148)
	this->addResultClient(resultClient);
	HX_STACK_LINE(149)
	::massive::munit::async::AsyncFactory _g1 = this->createAsyncFactory();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(149)
	this->set_asyncFactory(_g1);
	HX_STACK_LINE(150)
	this->running = false;
	HX_STACK_LINE(155)
	this->isDebug = false;
}
;
	return null();
}

//TestRunner_obj::~TestRunner_obj() { }

Dynamic TestRunner_obj::__CreateEmpty() { return  new TestRunner_obj; }
hx::ObjectPtr< TestRunner_obj > TestRunner_obj::__new(::massive::munit::ITestResultClient resultClient)
{  hx::ObjectPtr< TestRunner_obj > result = new TestRunner_obj();
	result->__construct(resultClient);
	return result;}

Dynamic TestRunner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestRunner_obj > result = new TestRunner_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *TestRunner_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::massive::munit::async::IAsyncDelegateObserver_obj)) return operator ::massive::munit::async::IAsyncDelegateObserver_obj *();
	return super::__ToInterface(inType);
}

int TestRunner_obj::get_clientCount( ){
	HX_STACK_FRAME("massive.munit.TestRunner","get_clientCount",0x892197d6,"massive.munit.TestRunner.get_clientCount","massive/munit/TestRunner.hx",103,0x7b3fda33)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	return this->clients->length;
}


HX_DEFINE_DYNAMIC_FUNC0(TestRunner_obj,get_clientCount,return )

::massive::munit::async::AsyncFactory TestRunner_obj::set_asyncFactory( ::massive::munit::async::AsyncFactory value){
	HX_STACK_FRAME("massive.munit.TestRunner","set_asyncFactory",0x63769cd0,"massive.munit.TestRunner.set_asyncFactory","massive/munit/TestRunner.hx",125,0x7b3fda33)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(126)
	if (((value == this->asyncFactory))){
		HX_STACK_LINE(126)
		return value;
	}
	HX_STACK_LINE(127)
	if ((this->running)){
		HX_STACK_LINE(127)
		HX_STACK_DO_THROW(::massive::munit::MUnitException_obj::__new(HX_CSTRING("Can't change AsyncFactory while tests are running"),hx::SourceInfo(HX_CSTRING("TestRunner.hx"),127,HX_CSTRING("massive.munit.TestRunner"),HX_CSTRING("set_asyncFactory"))));
	}
	HX_STACK_LINE(128)
	value->observer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(129)
	return this->asyncFactory = value;
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,set_asyncFactory,return )

Void TestRunner_obj::addResultClient( ::massive::munit::ITestResultClient resultClient){
{
		HX_STACK_FRAME("massive.munit.TestRunner","addResultClient",0x46b4bc84,"massive.munit.TestRunner.addResultClient","massive/munit/TestRunner.hx",165,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resultClient,"resultClient")
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(166)
			Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(166)
			while((true)){
				HX_STACK_LINE(166)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(166)
					break;
				}
				HX_STACK_LINE(166)
				::massive::munit::ITestResultClient client = _g1->__get(_g);		HX_STACK_VAR(client,"client");
				HX_STACK_LINE(166)
				++(_g);
				HX_STACK_LINE(166)
				if (((client == resultClient))){
					HX_STACK_LINE(166)
					return null();
				}
			}
		}
		HX_STACK_LINE(168)
		resultClient->__Field(HX_CSTRING("set_completionHandler"),true)(this->clientCompletionHandler_dyn());
		HX_STACK_LINE(169)
		this->clients->push(resultClient);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,addResultClient,(void))

Void TestRunner_obj::debug( Array< ::Dynamic > testSuiteClasses){
{
		HX_STACK_FRAME("massive.munit.TestRunner","debug",0xb355104e,"massive.munit.TestRunner.debug","massive/munit/TestRunner.hx",179,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testSuiteClasses,"testSuiteClasses")
		HX_STACK_LINE(180)
		this->isDebug = true;
		HX_STACK_LINE(181)
		this->run(testSuiteClasses);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,debug,(void))

Void TestRunner_obj::run( Array< ::Dynamic > testSuiteClasses){
{
		HX_STACK_FRAME("massive.munit.TestRunner","run",0x95ffa086,"massive.munit.TestRunner.run","massive/munit/TestRunner.hx",190,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testSuiteClasses,"testSuiteClasses")
		HX_STACK_LINE(191)
		if ((this->running)){
			HX_STACK_LINE(191)
			return null();
		}
		HX_STACK_LINE(193)
		this->running = true;
		HX_STACK_LINE(194)
		this->asyncPending = false;
		HX_STACK_LINE(195)
		this->asyncDelegate = null();
		HX_STACK_LINE(196)
		this->testCount = (int)0;
		HX_STACK_LINE(197)
		this->failCount = (int)0;
		HX_STACK_LINE(198)
		this->errorCount = (int)0;
		HX_STACK_LINE(199)
		this->passCount = (int)0;
		HX_STACK_LINE(200)
		this->ignoreCount = (int)0;
		HX_STACK_LINE(201)
		this->suiteIndex = (int)0;
		HX_STACK_LINE(202)
		this->clientCompleteCount = (int)0;
		HX_STACK_LINE(203)
		::massive::munit::Assert_obj::assertionCount = (int)0;
		HX_STACK_LINE(204)
		Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		this->emptyParams = _g;
		HX_STACK_LINE(205)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(205)
		this->testSuites = _g1;
		HX_STACK_LINE(206)
		Float _g2 = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(206)
		this->startTime = _g2;
		HX_STACK_LINE(208)
		{
			HX_STACK_LINE(208)
			int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(208)
			while((true)){
				HX_STACK_LINE(208)
				if ((!(((_g3 < testSuiteClasses->length))))){
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(208)
				::Class suiteType = testSuiteClasses->__get(_g3).StaticCast< ::Class >();		HX_STACK_VAR(suiteType,"suiteType");
				HX_STACK_LINE(208)
				++(_g3);
				HX_STACK_LINE(210)
				Dynamic _g31 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(210)
				::massive::munit::TestSuite _g4 = ::Type_obj::createInstance(suiteType,_g31);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(210)
				this->testSuites->push(_g4);
			}
		}
		HX_STACK_LINE(214)
		Array< ::Dynamic > self = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(self,"self");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,self)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","massive/munit/TestRunner.hx",216,0x7b3fda33)
			{
				HX_STACK_LINE(217)
				self->__get((int)0).StaticCast< ::massive::munit::TestRunner >()->execute();
				HX_STACK_LINE(218)
				while((self->__get((int)0).StaticCast< ::massive::munit::TestRunner >()->running)){
					HX_STACK_LINE(220)
					::Sys_obj::sleep(.2);
				}
				HX_STACK_LINE(222)
				::cpp::vm::Thread mainThead = ::cpp::vm::Thread_obj::readMessage(true);		HX_STACK_VAR(mainThead,"mainThead");
				HX_STACK_LINE(223)
				mainThead->sendMessage(HX_CSTRING("done"));
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(215)
		::cpp::vm::Thread runThread = ::cpp::vm::Thread_obj::create( Dynamic(new _Function_1_1(self)));		HX_STACK_VAR(runThread,"runThread");
		HX_STACK_LINE(226)
		::cpp::vm::Thread _g5 = ::cpp::vm::Thread_obj::current();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(226)
		runThread->sendMessage(_g5);
		HX_STACK_LINE(227)
		::cpp::vm::Thread_obj::readMessage(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,run,(void))

Void TestRunner_obj::execute( ){
{
		HX_STACK_FRAME("massive.munit.TestRunner","execute",0x6faa7cf0,"massive.munit.TestRunner.execute","massive/munit/TestRunner.hx",234,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			int _g1 = this->suiteIndex;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(235)
			int _g = this->testSuites->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			while((true)){
				HX_STACK_LINE(235)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(235)
					break;
				}
				HX_STACK_LINE(235)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(237)
				::massive::munit::TestSuite suite = this->testSuites->__get(i).StaticCast< ::massive::munit::TestSuite >();		HX_STACK_VAR(suite,"suite");
				HX_STACK_LINE(238)
				for(::cpp::FastIterator_obj< ::Class > *__it = ::cpp::CreateFastIterator< ::Class >(suite);  __it->hasNext(); ){
					::Class testClass = __it->next();
					{
						HX_STACK_LINE(240)
						if (((bool((this->activeHelper == null())) || bool((this->activeHelper->type != testClass))))){
							HX_STACK_LINE(242)
							::massive::munit::TestClassHelper _g2 = ::massive::munit::TestClassHelper_obj::__new(testClass,this->isDebug);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(242)
							this->activeHelper = _g2;
							HX_STACK_LINE(243)
							::Reflect_obj::callMethod(this->activeHelper->test,this->activeHelper->beforeClass,this->emptyParams);
						}
						HX_STACK_LINE(245)
						this->executeTestCases();
						HX_STACK_LINE(246)
						if ((!(this->asyncPending))){
							HX_STACK_LINE(248)
							::Reflect_obj::callMethod(this->activeHelper->test,this->activeHelper->afterClass,this->emptyParams);
						}
						else{
							HX_STACK_LINE(252)
							suite->repeat();
							HX_STACK_LINE(253)
							this->suiteIndex = i;
							HX_STACK_LINE(254)
							return null();
						}
					}
;
				}
			}
		}
		HX_STACK_LINE(259)
		if ((!(this->asyncPending))){
			HX_STACK_LINE(261)
			Float _g1 = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(261)
			Float time = (_g1 - this->startTime);		HX_STACK_VAR(time,"time");
			HX_STACK_LINE(262)
			{
				HX_STACK_LINE(262)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(262)
				Array< ::massive::munit::ITestResultClient > _g11 = this->clients;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(262)
				while((true)){
					HX_STACK_LINE(262)
					if ((!(((_g < _g11->length))))){
						HX_STACK_LINE(262)
						break;
					}
					HX_STACK_LINE(262)
					::massive::munit::ITestResultClient client = _g11->__get(_g);		HX_STACK_VAR(client,"client");
					HX_STACK_LINE(262)
					++(_g);
					HX_STACK_LINE(264)
					if ((::Std_obj::is(client,hx::ClassOf< ::massive::munit::IAdvancedTestResultClient >()))){
						HX_STACK_LINE(266)
						::massive::munit::IAdvancedTestResultClient cl = client;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(267)
						cl->setCurrentTestClass(null());
					}
					HX_STACK_LINE(269)
					client->reportFinalStatistics(this->testCount,this->passCount,this->failCount,this->errorCount,this->ignoreCount,time);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestRunner_obj,execute,(void))

Void TestRunner_obj::executeTestCases( ){
{
		HX_STACK_FRAME("massive.munit.TestRunner","executeTestCases",0x4eec3f01,"massive.munit.TestRunner.executeTestCases","massive/munit/TestRunner.hx",275,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_LINE(276)
		{
			HX_STACK_LINE(276)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(276)
			Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(276)
			while((true)){
				HX_STACK_LINE(276)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(276)
					break;
				}
				HX_STACK_LINE(276)
				::massive::munit::ITestResultClient c = _g1->__get(_g);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(276)
				++(_g);
				HX_STACK_LINE(278)
				if ((::Std_obj::is(c,hx::ClassOf< ::massive::munit::IAdvancedTestResultClient >()))){
					HX_STACK_LINE(280)
					if ((this->activeHelper->hasNext())){
						HX_STACK_LINE(282)
						::massive::munit::IAdvancedTestResultClient cl = c;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(283)
						cl->setCurrentTestClass(this->activeHelper->className);
					}
				}
			}
		}
		HX_STACK_LINE(287)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(this->activeHelper);  __it->hasNext(); ){
			Dynamic testCaseData = __it->next();
			if ((testCaseData->__Field(HX_CSTRING("result"),true)->__Field(HX_CSTRING("ignore"),true))){
				HX_STACK_LINE(291)
				(this->ignoreCount)++;
				HX_STACK_LINE(292)
				{
					HX_STACK_LINE(292)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(292)
					Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(292)
					while((true)){
						HX_STACK_LINE(292)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(292)
							break;
						}
						HX_STACK_LINE(292)
						::massive::munit::ITestResultClient c = _g1->__get(_g);		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(292)
						++(_g);
						HX_STACK_LINE(293)
						c->addIgnore(testCaseData->__Field(HX_CSTRING("result"),true));
					}
				}
			}
			else{
				HX_STACK_LINE(297)
				(this->testCount)++;
				HX_STACK_LINE(298)
				::Reflect_obj::callMethod(this->activeHelper->test,this->activeHelper->before,this->emptyParams);
				HX_STACK_LINE(299)
				Float _g = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(299)
				this->testStartTime = _g;
				HX_STACK_LINE(300)
				this->executeTestCase(testCaseData,testCaseData->__Field(HX_CSTRING("result"),true)->__Field(HX_CSTRING("async"),true));
				HX_STACK_LINE(302)
				if ((!(this->asyncPending))){
					HX_STACK_LINE(303)
					::Reflect_obj::callMethod(this->activeHelper->test,this->activeHelper->after,this->emptyParams);
				}
				else{
					HX_STACK_LINE(305)
					break;
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestRunner_obj,executeTestCases,(void))

Void TestRunner_obj::executeTestCase( Dynamic testCaseData,bool async){
{
		HX_STACK_FRAME("massive.munit.TestRunner","executeTestCase",0xf9774d32,"massive.munit.TestRunner.executeTestCase","massive/munit/TestRunner.hx",311,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testCaseData,"testCaseData")
		HX_STACK_ARG(async,"async")
		HX_STACK_LINE(312)
		::massive::munit::TestResult result = testCaseData->__Field(HX_CSTRING("result"),true);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(313)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(315)
			int assertionCount = ::massive::munit::Assert_obj::assertionCount;		HX_STACK_VAR(assertionCount,"assertionCount");
			HX_STACK_LINE(316)
			if ((async)){
				HX_STACK_LINE(318)
				::Reflect_obj::callMethod(testCaseData->__Field(HX_CSTRING("scope"),true),testCaseData->__Field(HX_CSTRING("test"),true),Dynamic( Array_obj<Dynamic>::__new().Add(this->asyncFactory)));
				HX_STACK_LINE(320)
				if (((this->asyncDelegate == null()))){
					HX_STACK_LINE(322)
					::String _g = result->get_location();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(322)
					::String _g1 = (HX_CSTRING("No AsyncDelegate was created in async test at ") + _g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(322)
					HX_STACK_DO_THROW(::massive::munit::async::MissingAsyncDelegateException_obj::__new(_g1,null()));
				}
				HX_STACK_LINE(325)
				this->asyncPending = true;
			}
			else{
				HX_STACK_LINE(329)
				::Reflect_obj::callMethod(testCaseData->__Field(HX_CSTRING("scope"),true),testCaseData->__Field(HX_CSTRING("test"),true),this->emptyParams);
				HX_STACK_LINE(331)
				result->passed = true;
				HX_STACK_LINE(332)
				Float _g2 = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(332)
				Float _g3 = (_g2 - this->testStartTime);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(332)
				result->executionTime = _g3;
				HX_STACK_LINE(333)
				(this->passCount)++;
				HX_STACK_LINE(334)
				{
					HX_STACK_LINE(334)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(334)
					Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(334)
					while((true)){
						HX_STACK_LINE(334)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(334)
							break;
						}
						HX_STACK_LINE(334)
						::massive::munit::ITestResultClient c = _g1->__get(_g);		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(334)
						++(_g);
						HX_STACK_LINE(335)
						c->addPass(result);
					}
				}
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(340)
					if (((bool(async) && bool((this->asyncDelegate != null()))))){
						HX_STACK_LINE(342)
						this->asyncDelegate->cancelTest();
						HX_STACK_LINE(343)
						this->asyncDelegate = null();
					}
					HX_STACK_LINE(347)
					if ((::Std_obj::is(e,hx::ClassOf< ::org::hamcrest::AssertionException >()))){
						HX_STACK_LINE(348)
						::massive::munit::AssertionException _g4 = ::massive::munit::AssertionException_obj::__new(e->__Field(HX_CSTRING("message"),true),e->__Field(HX_CSTRING("info"),true));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(348)
						e = _g4;
					}
					HX_STACK_LINE(351)
					if ((::Std_obj::is(e,hx::ClassOf< ::massive::munit::AssertionException >()))){
						HX_STACK_LINE(353)
						Float _g5 = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(353)
						Float _g6 = (_g5 - this->testStartTime);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(353)
						result->executionTime = _g6;
						HX_STACK_LINE(354)
						result->failure = e;
						HX_STACK_LINE(355)
						(this->failCount)++;
						HX_STACK_LINE(356)
						{
							HX_STACK_LINE(356)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(356)
							Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(356)
							while((true)){
								HX_STACK_LINE(356)
								if ((!(((_g < _g1->length))))){
									HX_STACK_LINE(356)
									break;
								}
								HX_STACK_LINE(356)
								::massive::munit::ITestResultClient c = _g1->__get(_g);		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(356)
								++(_g);
								HX_STACK_LINE(357)
								c->addFail(result);
							}
						}
					}
					else{
						HX_STACK_LINE(361)
						Float _g7 = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(361)
						Float _g8 = (_g7 - this->testStartTime);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(361)
						result->executionTime = _g8;
						HX_STACK_LINE(362)
						if ((!(::Std_obj::is(e,hx::ClassOf< ::massive::munit::MUnitException >())))){
							HX_STACK_LINE(363)
							::String _g9 = result->get_location();		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(363)
							::massive::munit::UnhandledException _g10 = ::massive::munit::UnhandledException_obj::__new(e,_g9);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(363)
							e = _g10;
						}
						HX_STACK_LINE(365)
						result->error = e;
						HX_STACK_LINE(366)
						(this->errorCount)++;
						HX_STACK_LINE(367)
						{
							HX_STACK_LINE(367)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(367)
							Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(367)
							while((true)){
								HX_STACK_LINE(367)
								if ((!(((_g < _g1->length))))){
									HX_STACK_LINE(367)
									break;
								}
								HX_STACK_LINE(367)
								::massive::munit::ITestResultClient c = _g1->__get(_g);		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(367)
								++(_g);
								HX_STACK_LINE(368)
								c->addError(result);
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TestRunner_obj,executeTestCase,(void))

Void TestRunner_obj::clientCompletionHandler( ::massive::munit::ITestResultClient resultClient){
{
		HX_STACK_FRAME("massive.munit.TestRunner","clientCompletionHandler",0x510871fe,"massive.munit.TestRunner.clientCompletionHandler","massive/munit/TestRunner.hx",375,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resultClient,"resultClient")
		HX_STACK_LINE(376)
		int _g = ++(this->clientCompleteCount);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(376)
		if (((_g == this->clients->length))){
			HX_STACK_LINE(378)
			if (((this->completionHandler_dyn() != null()))){
				HX_STACK_LINE(380)
				Array< bool > successful = Array_obj< bool >::__new().Add((this->passCount == this->testCount));		HX_STACK_VAR(successful,"successful");
				HX_STACK_LINE(381)
				Dynamic handler = Dynamic( Array_obj<Dynamic>::__new().Add(this->completionHandler_dyn()));		HX_STACK_VAR(handler,"handler");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,handler,Array< bool >,successful)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","massive/munit/TestRunner.hx",383,0x7b3fda33)
					{
						HX_STACK_LINE(383)
						handler->__GetItem((int)0)(successful->__get((int)0));
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(383)
				::massive::munit::util::Timer_obj::delay( Dynamic(new _Function_3_1(handler,successful)),(int)10);
			}
			HX_STACK_LINE(385)
			this->running = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,clientCompletionHandler,(void))

Void TestRunner_obj::asyncResponseHandler( ::massive::munit::async::AsyncDelegate delegate){
{
		HX_STACK_FRAME("massive.munit.TestRunner","asyncResponseHandler",0x97c52bd2,"massive.munit.TestRunner.asyncResponseHandler","massive/munit/TestRunner.hx",395,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delegate,"delegate")
		HX_STACK_LINE(396)
		Dynamic testCaseData = this->activeHelper->current();		HX_STACK_VAR(testCaseData,"testCaseData");
		HX_STACK_LINE(397)
		testCaseData->__FieldRef(HX_CSTRING("test")) = delegate->runTest_dyn();
		HX_STACK_LINE(398)
		testCaseData->__FieldRef(HX_CSTRING("scope")) = delegate;
		HX_STACK_LINE(400)
		this->asyncPending = false;
		HX_STACK_LINE(401)
		this->asyncDelegate = null();
		HX_STACK_LINE(402)
		this->executeTestCase(testCaseData,false);
		HX_STACK_LINE(403)
		::Reflect_obj::callMethod(this->activeHelper->test,this->activeHelper->after,this->emptyParams);
		HX_STACK_LINE(404)
		this->execute();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,asyncResponseHandler,(void))

Void TestRunner_obj::asyncTimeoutHandler( ::massive::munit::async::AsyncDelegate delegate){
{
		HX_STACK_FRAME("massive.munit.TestRunner","asyncTimeoutHandler",0x266a26c0,"massive.munit.TestRunner.asyncTimeoutHandler","massive/munit/TestRunner.hx",414,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delegate,"delegate")
		HX_STACK_LINE(415)
		Dynamic testCaseData = this->activeHelper->current();		HX_STACK_VAR(testCaseData,"testCaseData");
		HX_STACK_LINE(416)
		::massive::munit::TestResult result = testCaseData->__Field(HX_CSTRING("result"),true);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(417)
		Float _g = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(417)
		Float _g1 = (_g - this->testStartTime);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(417)
		result->executionTime = _g1;
		HX_STACK_LINE(418)
		::massive::munit::async::AsyncTimeoutException _g2 = ::massive::munit::async::AsyncTimeoutException_obj::__new(HX_CSTRING(""),delegate->info);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(418)
		result->error = _g2;
		HX_STACK_LINE(420)
		this->asyncPending = false;
		HX_STACK_LINE(421)
		this->asyncDelegate = null();
		HX_STACK_LINE(422)
		(this->errorCount)++;
		HX_STACK_LINE(423)
		{
			HX_STACK_LINE(423)
			int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(423)
			Array< ::massive::munit::ITestResultClient > _g11 = this->clients;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(423)
			while((true)){
				HX_STACK_LINE(423)
				if ((!(((_g3 < _g11->length))))){
					HX_STACK_LINE(423)
					break;
				}
				HX_STACK_LINE(423)
				::massive::munit::ITestResultClient c = _g11->__get(_g3);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(423)
				++(_g3);
				HX_STACK_LINE(423)
				c->addError(result);
			}
		}
		HX_STACK_LINE(424)
		::Reflect_obj::callMethod(this->activeHelper->test,this->activeHelper->after,this->emptyParams);
		HX_STACK_LINE(425)
		this->execute();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,asyncTimeoutHandler,(void))

Void TestRunner_obj::asyncDelegateCreatedHandler( ::massive::munit::async::AsyncDelegate delegate){
{
		HX_STACK_FRAME("massive.munit.TestRunner","asyncDelegateCreatedHandler",0x43465b7e,"massive.munit.TestRunner.asyncDelegateCreatedHandler","massive/munit/TestRunner.hx",430,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delegate,"delegate")
		HX_STACK_LINE(430)
		this->asyncDelegate = delegate;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,asyncDelegateCreatedHandler,(void))

::massive::munit::async::AsyncFactory TestRunner_obj::createAsyncFactory( ){
	HX_STACK_FRAME("massive.munit.TestRunner","createAsyncFactory",0x9f53032f,"massive.munit.TestRunner.createAsyncFactory","massive/munit/TestRunner.hx",435,0x7b3fda33)
	HX_STACK_THIS(this)
	HX_STACK_LINE(435)
	return ::massive::munit::async::AsyncFactory_obj::__new(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(TestRunner_obj,createAsyncFactory,return )


TestRunner_obj::TestRunner_obj()
{
}

void TestRunner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestRunner);
	HX_MARK_MEMBER_NAME(completionHandler,"completionHandler");
	HX_MARK_MEMBER_NAME(clientCount,"clientCount");
	HX_MARK_MEMBER_NAME(running,"running");
	HX_MARK_MEMBER_NAME(testCount,"testCount");
	HX_MARK_MEMBER_NAME(failCount,"failCount");
	HX_MARK_MEMBER_NAME(errorCount,"errorCount");
	HX_MARK_MEMBER_NAME(passCount,"passCount");
	HX_MARK_MEMBER_NAME(ignoreCount,"ignoreCount");
	HX_MARK_MEMBER_NAME(clientCompleteCount,"clientCompleteCount");
	HX_MARK_MEMBER_NAME(clients,"clients");
	HX_MARK_MEMBER_NAME(activeHelper,"activeHelper");
	HX_MARK_MEMBER_NAME(testSuites,"testSuites");
	HX_MARK_MEMBER_NAME(asyncPending,"asyncPending");
	HX_MARK_MEMBER_NAME(asyncDelegate,"asyncDelegate");
	HX_MARK_MEMBER_NAME(suiteIndex,"suiteIndex");
	HX_MARK_MEMBER_NAME(asyncFactory,"asyncFactory");
	HX_MARK_MEMBER_NAME(emptyParams,"emptyParams");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(testStartTime,"testStartTime");
	HX_MARK_MEMBER_NAME(isDebug,"isDebug");
	HX_MARK_END_CLASS();
}

void TestRunner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(completionHandler,"completionHandler");
	HX_VISIT_MEMBER_NAME(clientCount,"clientCount");
	HX_VISIT_MEMBER_NAME(running,"running");
	HX_VISIT_MEMBER_NAME(testCount,"testCount");
	HX_VISIT_MEMBER_NAME(failCount,"failCount");
	HX_VISIT_MEMBER_NAME(errorCount,"errorCount");
	HX_VISIT_MEMBER_NAME(passCount,"passCount");
	HX_VISIT_MEMBER_NAME(ignoreCount,"ignoreCount");
	HX_VISIT_MEMBER_NAME(clientCompleteCount,"clientCompleteCount");
	HX_VISIT_MEMBER_NAME(clients,"clients");
	HX_VISIT_MEMBER_NAME(activeHelper,"activeHelper");
	HX_VISIT_MEMBER_NAME(testSuites,"testSuites");
	HX_VISIT_MEMBER_NAME(asyncPending,"asyncPending");
	HX_VISIT_MEMBER_NAME(asyncDelegate,"asyncDelegate");
	HX_VISIT_MEMBER_NAME(suiteIndex,"suiteIndex");
	HX_VISIT_MEMBER_NAME(asyncFactory,"asyncFactory");
	HX_VISIT_MEMBER_NAME(emptyParams,"emptyParams");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(testStartTime,"testStartTime");
	HX_VISIT_MEMBER_NAME(isDebug,"isDebug");
}

Dynamic TestRunner_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return debug_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { return running; }
		if (HX_FIELD_EQ(inName,"clients") ) { return clients; }
		if (HX_FIELD_EQ(inName,"isDebug") ) { return isDebug; }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"testCount") ) { return testCount; }
		if (HX_FIELD_EQ(inName,"failCount") ) { return failCount; }
		if (HX_FIELD_EQ(inName,"passCount") ) { return passCount; }
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"errorCount") ) { return errorCount; }
		if (HX_FIELD_EQ(inName,"testSuites") ) { return testSuites; }
		if (HX_FIELD_EQ(inName,"suiteIndex") ) { return suiteIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clientCount") ) { return inCallProp ? get_clientCount() : clientCount; }
		if (HX_FIELD_EQ(inName,"ignoreCount") ) { return ignoreCount; }
		if (HX_FIELD_EQ(inName,"emptyParams") ) { return emptyParams; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeHelper") ) { return activeHelper; }
		if (HX_FIELD_EQ(inName,"asyncPending") ) { return asyncPending; }
		if (HX_FIELD_EQ(inName,"asyncFactory") ) { return asyncFactory; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"asyncDelegate") ) { return asyncDelegate; }
		if (HX_FIELD_EQ(inName,"testStartTime") ) { return testStartTime; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_clientCount") ) { return get_clientCount_dyn(); }
		if (HX_FIELD_EQ(inName,"addResultClient") ) { return addResultClient_dyn(); }
		if (HX_FIELD_EQ(inName,"executeTestCase") ) { return executeTestCase_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_asyncFactory") ) { return set_asyncFactory_dyn(); }
		if (HX_FIELD_EQ(inName,"executeTestCases") ) { return executeTestCases_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { return completionHandler; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createAsyncFactory") ) { return createAsyncFactory_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"clientCompleteCount") ) { return clientCompleteCount; }
		if (HX_FIELD_EQ(inName,"asyncTimeoutHandler") ) { return asyncTimeoutHandler_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"asyncResponseHandler") ) { return asyncResponseHandler_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"clientCompletionHandler") ) { return clientCompletionHandler_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"asyncDelegateCreatedHandler") ) { return asyncDelegateCreatedHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestRunner_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clients") ) { clients=inValue.Cast< Array< ::massive::munit::ITestResultClient > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDebug") ) { isDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"testCount") ) { testCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"failCount") ) { failCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"passCount") ) { passCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"errorCount") ) { errorCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"testSuites") ) { testSuites=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"suiteIndex") ) { suiteIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clientCount") ) { clientCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreCount") ) { ignoreCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyParams") ) { emptyParams=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeHelper") ) { activeHelper=inValue.Cast< ::massive::munit::TestClassHelper >(); return inValue; }
		if (HX_FIELD_EQ(inName,"asyncPending") ) { asyncPending=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"asyncFactory") ) { if (inCallProp) return set_asyncFactory(inValue);asyncFactory=inValue.Cast< ::massive::munit::async::AsyncFactory >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"asyncDelegate") ) { asyncDelegate=inValue.Cast< ::massive::munit::async::AsyncDelegate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"testStartTime") ) { testStartTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { completionHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"clientCompleteCount") ) { clientCompleteCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestRunner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("clientCount"));
	outFields->push(HX_CSTRING("running"));
	outFields->push(HX_CSTRING("testCount"));
	outFields->push(HX_CSTRING("failCount"));
	outFields->push(HX_CSTRING("errorCount"));
	outFields->push(HX_CSTRING("passCount"));
	outFields->push(HX_CSTRING("ignoreCount"));
	outFields->push(HX_CSTRING("clientCompleteCount"));
	outFields->push(HX_CSTRING("clients"));
	outFields->push(HX_CSTRING("activeHelper"));
	outFields->push(HX_CSTRING("testSuites"));
	outFields->push(HX_CSTRING("asyncPending"));
	outFields->push(HX_CSTRING("asyncDelegate"));
	outFields->push(HX_CSTRING("suiteIndex"));
	outFields->push(HX_CSTRING("asyncFactory"));
	outFields->push(HX_CSTRING("emptyParams"));
	outFields->push(HX_CSTRING("startTime"));
	outFields->push(HX_CSTRING("testStartTime"));
	outFields->push(HX_CSTRING("isDebug"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestRunner_obj,completionHandler),HX_CSTRING("completionHandler")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,clientCount),HX_CSTRING("clientCount")},
	{hx::fsBool,(int)offsetof(TestRunner_obj,running),HX_CSTRING("running")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,testCount),HX_CSTRING("testCount")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,failCount),HX_CSTRING("failCount")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,errorCount),HX_CSTRING("errorCount")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,passCount),HX_CSTRING("passCount")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,ignoreCount),HX_CSTRING("ignoreCount")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,clientCompleteCount),HX_CSTRING("clientCompleteCount")},
	{hx::fsObject /*Array< ::massive::munit::ITestResultClient >*/ ,(int)offsetof(TestRunner_obj,clients),HX_CSTRING("clients")},
	{hx::fsObject /*::massive::munit::TestClassHelper*/ ,(int)offsetof(TestRunner_obj,activeHelper),HX_CSTRING("activeHelper")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TestRunner_obj,testSuites),HX_CSTRING("testSuites")},
	{hx::fsBool,(int)offsetof(TestRunner_obj,asyncPending),HX_CSTRING("asyncPending")},
	{hx::fsObject /*::massive::munit::async::AsyncDelegate*/ ,(int)offsetof(TestRunner_obj,asyncDelegate),HX_CSTRING("asyncDelegate")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,suiteIndex),HX_CSTRING("suiteIndex")},
	{hx::fsObject /*::massive::munit::async::AsyncFactory*/ ,(int)offsetof(TestRunner_obj,asyncFactory),HX_CSTRING("asyncFactory")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestRunner_obj,emptyParams),HX_CSTRING("emptyParams")},
	{hx::fsFloat,(int)offsetof(TestRunner_obj,startTime),HX_CSTRING("startTime")},
	{hx::fsFloat,(int)offsetof(TestRunner_obj,testStartTime),HX_CSTRING("testStartTime")},
	{hx::fsBool,(int)offsetof(TestRunner_obj,isDebug),HX_CSTRING("isDebug")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("completionHandler"),
	HX_CSTRING("clientCount"),
	HX_CSTRING("get_clientCount"),
	HX_CSTRING("running"),
	HX_CSTRING("testCount"),
	HX_CSTRING("failCount"),
	HX_CSTRING("errorCount"),
	HX_CSTRING("passCount"),
	HX_CSTRING("ignoreCount"),
	HX_CSTRING("clientCompleteCount"),
	HX_CSTRING("clients"),
	HX_CSTRING("activeHelper"),
	HX_CSTRING("testSuites"),
	HX_CSTRING("asyncPending"),
	HX_CSTRING("asyncDelegate"),
	HX_CSTRING("suiteIndex"),
	HX_CSTRING("asyncFactory"),
	HX_CSTRING("set_asyncFactory"),
	HX_CSTRING("emptyParams"),
	HX_CSTRING("startTime"),
	HX_CSTRING("testStartTime"),
	HX_CSTRING("isDebug"),
	HX_CSTRING("addResultClient"),
	HX_CSTRING("debug"),
	HX_CSTRING("run"),
	HX_CSTRING("execute"),
	HX_CSTRING("executeTestCases"),
	HX_CSTRING("executeTestCase"),
	HX_CSTRING("clientCompletionHandler"),
	HX_CSTRING("asyncResponseHandler"),
	HX_CSTRING("asyncTimeoutHandler"),
	HX_CSTRING("asyncDelegateCreatedHandler"),
	HX_CSTRING("createAsyncFactory"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestRunner_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestRunner_obj::__mClass,"__mClass");
};

#endif

Class TestRunner_obj::__mClass;

void TestRunner_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.TestRunner"), hx::TCanCast< TestRunner_obj> ,sStaticFields,sMemberFields,
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

void TestRunner_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
