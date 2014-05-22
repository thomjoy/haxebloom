#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_async_AsyncDelegate
#include <massive/munit/async/AsyncDelegate.h>
#endif
#ifndef INCLUDED_massive_munit_async_IAsyncDelegateObserver
#include <massive/munit/async/IAsyncDelegateObserver.h>
#endif
namespace massive{
namespace munit{
namespace async{

HX_DEFINE_DYNAMIC_FUNC1(IAsyncDelegateObserver_obj,asyncResponseHandler,)

HX_DEFINE_DYNAMIC_FUNC1(IAsyncDelegateObserver_obj,asyncTimeoutHandler,)

HX_DEFINE_DYNAMIC_FUNC1(IAsyncDelegateObserver_obj,asyncDelegateCreatedHandler,)


static ::String sMemberFields[] = {
	HX_CSTRING("asyncResponseHandler"),
	HX_CSTRING("asyncTimeoutHandler"),
	HX_CSTRING("asyncDelegateCreatedHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IAsyncDelegateObserver_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IAsyncDelegateObserver_obj::__mClass,"__mClass");
};

#endif

Class IAsyncDelegateObserver_obj::__mClass;

void IAsyncDelegateObserver_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.async.IAsyncDelegateObserver"), hx::TCanCast< IAsyncDelegateObserver_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IAsyncDelegateObserver_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
} // end namespace async
