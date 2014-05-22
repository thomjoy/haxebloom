#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
namespace massive{
namespace munit{

HX_DEFINE_DYNAMIC_FUNC1(IAdvancedTestResultClient_obj,setCurrentTestClass,)


static ::String sMemberFields[] = {
	HX_CSTRING("setCurrentTestClass"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IAdvancedTestResultClient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IAdvancedTestResultClient_obj::__mClass,"__mClass");
};

#endif

Class IAdvancedTestResultClient_obj::__mClass;

void IAdvancedTestResultClient_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.IAdvancedTestResultClient"), hx::TCanCast< IAdvancedTestResultClient_obj> ,0,sMemberFields,
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

void IAdvancedTestResultClient_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
