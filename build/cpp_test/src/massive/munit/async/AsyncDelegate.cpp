#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_massive_munit_async_AsyncDelegate
#include <massive/munit/async/AsyncDelegate.h>
#endif
#ifndef INCLUDED_massive_munit_async_IAsyncDelegateObserver
#include <massive/munit/async/IAsyncDelegateObserver.h>
#endif
#ifndef INCLUDED_massive_munit_util_Timer
#include <massive/munit/util/Timer.h>
#endif
namespace massive{
namespace munit{
namespace async{

Void AsyncDelegate_obj::__construct(Dynamic testCase,Dynamic handler,Dynamic timeout,Dynamic info)
{
HX_STACK_FRAME("massive.munit.async.AsyncDelegate","new",0xd27a25ba,"massive.munit.async.AsyncDelegate.new","massive/munit/async/AsyncDelegate.hx",92,0x9ad95939)
HX_STACK_THIS(this)
HX_STACK_ARG(testCase,"testCase")
HX_STACK_ARG(handler,"handler")
HX_STACK_ARG(timeout,"timeout")
HX_STACK_ARG(info,"info")
{
	HX_STACK_LINE(93)
	::massive::munit::async::AsyncDelegate self = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(self,"self");
	HX_STACK_LINE(94)
	this->testCase = testCase;
	HX_STACK_LINE(95)
	this->handler = handler;
	HX_STACK_LINE(96)
	Dynamic _g = ::Reflect_obj::makeVarArgs(this->responseHandler_dyn());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(96)
	this->delegateHandler = _g;
	HX_STACK_LINE(97)
	this->info = info;
	HX_STACK_LINE(98)
	this->params = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(99)
	this->timedOut = false;
	HX_STACK_LINE(100)
	this->canceled = false;
	HX_STACK_LINE(102)
	if (((bool((timeout == null())) || bool((timeout <= (int)0))))){
		HX_STACK_LINE(102)
		timeout = (int)400;
	}
	HX_STACK_LINE(103)
	this->timeoutDelay = timeout;
	HX_STACK_LINE(104)
	::massive::munit::util::Timer _g1 = ::massive::munit::util::Timer_obj::delay(this->timeoutHandler_dyn(),this->timeoutDelay);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(104)
	this->timer = _g1;
}
;
	return null();
}

//AsyncDelegate_obj::~AsyncDelegate_obj() { }

Dynamic AsyncDelegate_obj::__CreateEmpty() { return  new AsyncDelegate_obj; }
hx::ObjectPtr< AsyncDelegate_obj > AsyncDelegate_obj::__new(Dynamic testCase,Dynamic handler,Dynamic timeout,Dynamic info)
{  hx::ObjectPtr< AsyncDelegate_obj > result = new AsyncDelegate_obj();
	result->__construct(testCase,handler,timeout,info);
	return result;}

Dynamic AsyncDelegate_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AsyncDelegate_obj > result = new AsyncDelegate_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void AsyncDelegate_obj::runTest( ){
{
		HX_STACK_FRAME("massive.munit.async.AsyncDelegate","runTest",0x98bbe797,"massive.munit.async.AsyncDelegate.runTest","massive/munit/async/AsyncDelegate.hx",113,0x9ad95939)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		::Reflect_obj::callMethod(this->testCase,this->handler,this->params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncDelegate_obj,runTest,(void))

Void AsyncDelegate_obj::cancelTest( ){
{
		HX_STACK_FRAME("massive.munit.async.AsyncDelegate","cancelTest",0xf61e90d2,"massive.munit.async.AsyncDelegate.cancelTest","massive/munit/async/AsyncDelegate.hx",120,0x9ad95939)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		this->canceled = true;
		HX_STACK_LINE(122)
		this->timer->stop();
		HX_STACK_LINE(123)
		if (((this->deferredTimer != null()))){
			HX_STACK_LINE(123)
			this->deferredTimer->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncDelegate_obj,cancelTest,(void))

Dynamic AsyncDelegate_obj::responseHandler( Dynamic params){
	HX_STACK_FRAME("massive.munit.async.AsyncDelegate","responseHandler",0x09155fa3,"massive.munit.async.AsyncDelegate.responseHandler","massive/munit/async/AsyncDelegate.hx",127,0x9ad95939)
	HX_STACK_THIS(this)
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(128)
	if (((bool(this->timedOut) || bool(this->canceled)))){
		HX_STACK_LINE(128)
		return null();
	}
	HX_STACK_LINE(130)
	this->timer->stop();
	HX_STACK_LINE(132)
	if (((this->deferredTimer != null()))){
		HX_STACK_LINE(132)
		this->deferredTimer->stop();
	}
	HX_STACK_LINE(134)
	if (((params == null()))){
		HX_STACK_LINE(134)
		params = Dynamic( Array_obj<Dynamic>::__new());
	}
	HX_STACK_LINE(135)
	this->params = params;
	HX_STACK_LINE(138)
	if (((this->observer != null()))){
		HX_STACK_LINE(138)
		::massive::munit::util::Timer_obj::delay(this->delayActualResponseHandler_dyn(),(int)1);
	}
	HX_STACK_LINE(140)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncDelegate_obj,responseHandler,return )

Void AsyncDelegate_obj::delayActualResponseHandler( ){
{
		HX_STACK_FRAME("massive.munit.async.AsyncDelegate","delayActualResponseHandler",0x12ec55be,"massive.munit.async.AsyncDelegate.delayActualResponseHandler","massive/munit/async/AsyncDelegate.hx",144,0x9ad95939)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		this->observer->asyncResponseHandler(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(146)
		this->observer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncDelegate_obj,delayActualResponseHandler,(void))

Void AsyncDelegate_obj::timeoutHandler( ){
{
		HX_STACK_FRAME("massive.munit.async.AsyncDelegate","timeoutHandler",0xcfad180f,"massive.munit.async.AsyncDelegate.timeoutHandler","massive/munit/async/AsyncDelegate.hx",155,0x9ad95939)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		this->actualTimeoutHandler();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncDelegate_obj,timeoutHandler,(void))

Void AsyncDelegate_obj::actualTimeoutHandler( ){
{
		HX_STACK_FRAME("massive.munit.async.AsyncDelegate","actualTimeoutHandler",0x6491c3bd,"massive.munit.async.AsyncDelegate.actualTimeoutHandler","massive/munit/async/AsyncDelegate.hx",160,0x9ad95939)
		HX_STACK_THIS(this)
		HX_STACK_LINE(161)
		this->deferredTimer = null();
		HX_STACK_LINE(162)
		this->handler = null();
		HX_STACK_LINE(163)
		this->delegateHandler = null();
		HX_STACK_LINE(164)
		this->timedOut = true;
		HX_STACK_LINE(165)
		if (((this->observer != null()))){
			HX_STACK_LINE(167)
			this->observer->asyncTimeoutHandler(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(168)
			this->observer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncDelegate_obj,actualTimeoutHandler,(void))

int AsyncDelegate_obj::DEFAULT_TIMEOUT;


AsyncDelegate_obj::AsyncDelegate_obj()
{
}

void AsyncDelegate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AsyncDelegate);
	HX_MARK_MEMBER_NAME(observer,"observer");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(delegateHandler,"delegateHandler");
	HX_MARK_MEMBER_NAME(timeoutDelay,"timeoutDelay");
	HX_MARK_MEMBER_NAME(timedOut,"timedOut");
	HX_MARK_MEMBER_NAME(testCase,"testCase");
	HX_MARK_MEMBER_NAME(handler,"handler");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(deferredTimer,"deferredTimer");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_END_CLASS();
}

void AsyncDelegate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(observer,"observer");
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(delegateHandler,"delegateHandler");
	HX_VISIT_MEMBER_NAME(timeoutDelay,"timeoutDelay");
	HX_VISIT_MEMBER_NAME(timedOut,"timedOut");
	HX_VISIT_MEMBER_NAME(testCase,"testCase");
	HX_VISIT_MEMBER_NAME(handler,"handler");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(deferredTimer,"deferredTimer");
	HX_VISIT_MEMBER_NAME(params,"params");
}

Dynamic AsyncDelegate_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return info; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return handler; }
		if (HX_FIELD_EQ(inName,"runTest") ) { return runTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"observer") ) { return observer; }
		if (HX_FIELD_EQ(inName,"timedOut") ) { return timedOut; }
		if (HX_FIELD_EQ(inName,"testCase") ) { return testCase; }
		if (HX_FIELD_EQ(inName,"canceled") ) { return canceled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cancelTest") ) { return cancelTest_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"timeoutDelay") ) { return timeoutDelay; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"deferredTimer") ) { return deferredTimer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"timeoutHandler") ) { return timeoutHandler_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"delegateHandler") ) { return delegateHandler; }
		if (HX_FIELD_EQ(inName,"responseHandler") ) { return responseHandler_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"actualTimeoutHandler") ) { return actualTimeoutHandler_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"delayActualResponseHandler") ) { return delayActualResponseHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AsyncDelegate_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::massive::munit::util::Timer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"observer") ) { observer=inValue.Cast< ::massive::munit::async::IAsyncDelegateObserver >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timedOut") ) { timedOut=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"testCase") ) { testCase=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"timeoutDelay") ) { timeoutDelay=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"deferredTimer") ) { deferredTimer=inValue.Cast< ::massive::munit::util::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"delegateHandler") ) { delegateHandler=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AsyncDelegate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("observer"));
	outFields->push(HX_CSTRING("info"));
	outFields->push(HX_CSTRING("delegateHandler"));
	outFields->push(HX_CSTRING("timeoutDelay"));
	outFields->push(HX_CSTRING("timedOut"));
	outFields->push(HX_CSTRING("testCase"));
	outFields->push(HX_CSTRING("handler"));
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("canceled"));
	outFields->push(HX_CSTRING("deferredTimer"));
	outFields->push(HX_CSTRING("params"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT_TIMEOUT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::massive::munit::async::IAsyncDelegateObserver*/ ,(int)offsetof(AsyncDelegate_obj,observer),HX_CSTRING("observer")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncDelegate_obj,info),HX_CSTRING("info")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncDelegate_obj,delegateHandler),HX_CSTRING("delegateHandler")},
	{hx::fsInt,(int)offsetof(AsyncDelegate_obj,timeoutDelay),HX_CSTRING("timeoutDelay")},
	{hx::fsBool,(int)offsetof(AsyncDelegate_obj,timedOut),HX_CSTRING("timedOut")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncDelegate_obj,testCase),HX_CSTRING("testCase")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncDelegate_obj,handler),HX_CSTRING("handler")},
	{hx::fsObject /*::massive::munit::util::Timer*/ ,(int)offsetof(AsyncDelegate_obj,timer),HX_CSTRING("timer")},
	{hx::fsBool,(int)offsetof(AsyncDelegate_obj,canceled),HX_CSTRING("canceled")},
	{hx::fsObject /*::massive::munit::util::Timer*/ ,(int)offsetof(AsyncDelegate_obj,deferredTimer),HX_CSTRING("deferredTimer")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncDelegate_obj,params),HX_CSTRING("params")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("observer"),
	HX_CSTRING("info"),
	HX_CSTRING("delegateHandler"),
	HX_CSTRING("timeoutDelay"),
	HX_CSTRING("timedOut"),
	HX_CSTRING("testCase"),
	HX_CSTRING("handler"),
	HX_CSTRING("timer"),
	HX_CSTRING("canceled"),
	HX_CSTRING("deferredTimer"),
	HX_CSTRING("params"),
	HX_CSTRING("runTest"),
	HX_CSTRING("cancelTest"),
	HX_CSTRING("responseHandler"),
	HX_CSTRING("delayActualResponseHandler"),
	HX_CSTRING("timeoutHandler"),
	HX_CSTRING("actualTimeoutHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncDelegate_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AsyncDelegate_obj::DEFAULT_TIMEOUT,"DEFAULT_TIMEOUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncDelegate_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AsyncDelegate_obj::DEFAULT_TIMEOUT,"DEFAULT_TIMEOUT");
};

#endif

Class AsyncDelegate_obj::__mClass;

void AsyncDelegate_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.async.AsyncDelegate"), hx::TCanCast< AsyncDelegate_obj> ,sStaticFields,sMemberFields,
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

void AsyncDelegate_obj::__boot()
{
	DEFAULT_TIMEOUT= (int)400;
}

} // end namespace massive
} // end namespace munit
} // end namespace async
