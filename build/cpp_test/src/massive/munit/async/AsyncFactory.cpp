#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_async_AsyncDelegate
#include <massive/munit/async/AsyncDelegate.h>
#endif
#ifndef INCLUDED_massive_munit_async_AsyncFactory
#include <massive/munit/async/AsyncFactory.h>
#endif
#ifndef INCLUDED_massive_munit_async_IAsyncDelegateObserver
#include <massive/munit/async/IAsyncDelegateObserver.h>
#endif
namespace massive{
namespace munit{
namespace async{

Void AsyncFactory_obj::__construct(::massive::munit::async::IAsyncDelegateObserver observer)
{
HX_STACK_FRAME("massive.munit.async.AsyncFactory","new",0x8d29f519,"massive.munit.async.AsyncFactory.new","massive/munit/async/AsyncFactory.hx",78,0x7b443f94)
HX_STACK_THIS(this)
HX_STACK_ARG(observer,"observer")
{
	HX_STACK_LINE(79)
	this->observer = observer;
	HX_STACK_LINE(80)
	this->asyncDelegateCount = (int)0;
}
;
	return null();
}

//AsyncFactory_obj::~AsyncFactory_obj() { }

Dynamic AsyncFactory_obj::__CreateEmpty() { return  new AsyncFactory_obj; }
hx::ObjectPtr< AsyncFactory_obj > AsyncFactory_obj::__new(::massive::munit::async::IAsyncDelegateObserver observer)
{  hx::ObjectPtr< AsyncFactory_obj > result = new AsyncFactory_obj();
	result->__construct(observer);
	return result;}

Dynamic AsyncFactory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AsyncFactory_obj > result = new AsyncFactory_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic AsyncFactory_obj::createHandler( Dynamic testCase,Dynamic handler,Dynamic timeout,Dynamic info){
	HX_STACK_FRAME("massive.munit.async.AsyncFactory","createHandler",0xca3f2e27,"massive.munit.async.AsyncFactory.createHandler","massive/munit/async/AsyncFactory.hx",93,0x7b443f94)
	HX_STACK_THIS(this)
	HX_STACK_ARG(testCase,"testCase")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(timeout,"timeout")
	HX_STACK_ARG(info,"info")
	HX_STACK_LINE(94)
	::massive::munit::async::AsyncDelegate delegate = ::massive::munit::async::AsyncDelegate_obj::__new(testCase,handler,timeout,info);		HX_STACK_VAR(delegate,"delegate");
	HX_STACK_LINE(95)
	delegate->observer = this->observer;
	HX_STACK_LINE(96)
	(this->asyncDelegateCount)++;
	HX_STACK_LINE(98)
	this->observer->asyncDelegateCreatedHandler(delegate);
	HX_STACK_LINE(99)
	return delegate->delegateHandler;
}


HX_DEFINE_DYNAMIC_FUNC4(AsyncFactory_obj,createHandler,return )


AsyncFactory_obj::AsyncFactory_obj()
{
}

void AsyncFactory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AsyncFactory);
	HX_MARK_MEMBER_NAME(observer,"observer");
	HX_MARK_MEMBER_NAME(asyncDelegateCount,"asyncDelegateCount");
	HX_MARK_END_CLASS();
}

void AsyncFactory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(observer,"observer");
	HX_VISIT_MEMBER_NAME(asyncDelegateCount,"asyncDelegateCount");
}

Dynamic AsyncFactory_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"observer") ) { return observer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createHandler") ) { return createHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"asyncDelegateCount") ) { return asyncDelegateCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AsyncFactory_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"observer") ) { observer=inValue.Cast< ::massive::munit::async::IAsyncDelegateObserver >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"asyncDelegateCount") ) { asyncDelegateCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AsyncFactory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("observer"));
	outFields->push(HX_CSTRING("asyncDelegateCount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::massive::munit::async::IAsyncDelegateObserver*/ ,(int)offsetof(AsyncFactory_obj,observer),HX_CSTRING("observer")},
	{hx::fsInt,(int)offsetof(AsyncFactory_obj,asyncDelegateCount),HX_CSTRING("asyncDelegateCount")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("observer"),
	HX_CSTRING("asyncDelegateCount"),
	HX_CSTRING("createHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncFactory_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncFactory_obj::__mClass,"__mClass");
};

#endif

Class AsyncFactory_obj::__mClass;

void AsyncFactory_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.async.AsyncFactory"), hx::TCanCast< AsyncFactory_obj> ,sStaticFields,sMemberFields,
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

void AsyncFactory_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
} // end namespace async
