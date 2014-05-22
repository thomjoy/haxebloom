#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_TestResultType
#include <massive/munit/TestResultType.h>
#endif
namespace massive{
namespace munit{

::massive::munit::TestResultType TestResultType_obj::ERROR;

::massive::munit::TestResultType TestResultType_obj::FAIL;

::massive::munit::TestResultType TestResultType_obj::IGNORE;

::massive::munit::TestResultType TestResultType_obj::PASS;

::massive::munit::TestResultType TestResultType_obj::UNKNOWN;

HX_DEFINE_CREATE_ENUM(TestResultType_obj)

int TestResultType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("ERROR")) return 3;
	if (inName==HX_CSTRING("FAIL")) return 2;
	if (inName==HX_CSTRING("IGNORE")) return 4;
	if (inName==HX_CSTRING("PASS")) return 1;
	if (inName==HX_CSTRING("UNKNOWN")) return 0;
	return super::__FindIndex(inName);
}

int TestResultType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("ERROR")) return 0;
	if (inName==HX_CSTRING("FAIL")) return 0;
	if (inName==HX_CSTRING("IGNORE")) return 0;
	if (inName==HX_CSTRING("PASS")) return 0;
	if (inName==HX_CSTRING("UNKNOWN")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TestResultType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("ERROR")) return ERROR;
	if (inName==HX_CSTRING("FAIL")) return FAIL;
	if (inName==HX_CSTRING("IGNORE")) return IGNORE;
	if (inName==HX_CSTRING("PASS")) return PASS;
	if (inName==HX_CSTRING("UNKNOWN")) return UNKNOWN;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("UNKNOWN"),
	HX_CSTRING("PASS"),
	HX_CSTRING("FAIL"),
	HX_CSTRING("ERROR"),
	HX_CSTRING("IGNORE"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestResultType_obj::ERROR,"ERROR");
	HX_MARK_MEMBER_NAME(TestResultType_obj::FAIL,"FAIL");
	HX_MARK_MEMBER_NAME(TestResultType_obj::IGNORE,"IGNORE");
	HX_MARK_MEMBER_NAME(TestResultType_obj::PASS,"PASS");
	HX_MARK_MEMBER_NAME(TestResultType_obj::UNKNOWN,"UNKNOWN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestResultType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TestResultType_obj::ERROR,"ERROR");
	HX_VISIT_MEMBER_NAME(TestResultType_obj::FAIL,"FAIL");
	HX_VISIT_MEMBER_NAME(TestResultType_obj::IGNORE,"IGNORE");
	HX_VISIT_MEMBER_NAME(TestResultType_obj::PASS,"PASS");
	HX_VISIT_MEMBER_NAME(TestResultType_obj::UNKNOWN,"UNKNOWN");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class TestResultType_obj::__mClass;

Dynamic __Create_TestResultType_obj() { return new TestResultType_obj; }

void TestResultType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.TestResultType"), hx::TCanCast< TestResultType_obj >,sStaticFields,sMemberFields,
	&__Create_TestResultType_obj, &__Create,
	&super::__SGetClass(), &CreateTestResultType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TestResultType_obj::__boot()
{
hx::Static(ERROR) = hx::CreateEnum< TestResultType_obj >(HX_CSTRING("ERROR"),3);
hx::Static(FAIL) = hx::CreateEnum< TestResultType_obj >(HX_CSTRING("FAIL"),2);
hx::Static(IGNORE) = hx::CreateEnum< TestResultType_obj >(HX_CSTRING("IGNORE"),4);
hx::Static(PASS) = hx::CreateEnum< TestResultType_obj >(HX_CSTRING("PASS"),1);
hx::Static(UNKNOWN) = hx::CreateEnum< TestResultType_obj >(HX_CSTRING("UNKNOWN"),0);
}


} // end namespace massive
} // end namespace munit
