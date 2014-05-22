#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
namespace massive{
namespace munit{

HX_DEFINE_DYNAMIC_FUNC1(ITestResultClient_obj,addPass,)

HX_DEFINE_DYNAMIC_FUNC1(ITestResultClient_obj,addFail,)

HX_DEFINE_DYNAMIC_FUNC1(ITestResultClient_obj,addError,)

HX_DEFINE_DYNAMIC_FUNC1(ITestResultClient_obj,addIgnore,)

HX_DEFINE_DYNAMIC_FUNC6(ITestResultClient_obj,reportFinalStatistics,return )


static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("addPass"),
	HX_CSTRING("addFail"),
	HX_CSTRING("addError"),
	HX_CSTRING("addIgnore"),
	HX_CSTRING("reportFinalStatistics"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ITestResultClient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ITestResultClient_obj::__mClass,"__mClass");
};

#endif

Class ITestResultClient_obj::__mClass;

void ITestResultClient_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.ITestResultClient"), hx::TCanCast< ITestResultClient_obj> ,0,sMemberFields,
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

void ITestResultClient_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
