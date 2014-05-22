#include <hxcpp.h>

#ifndef INCLUDED_BloomFilterTest
#include <BloomFilterTest.h>
#endif
#ifndef INCLUDED_TestSuite
#include <TestSuite.h>
#endif
#ifndef INCLUDED_massive_munit_TestSuite
#include <massive/munit/TestSuite.h>
#endif

Void TestSuite_obj::__construct()
{
HX_STACK_FRAME("TestSuite","new",0x1792e8d8,"TestSuite.new","TestSuite.hx",14,0xf6ebf998)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	super::__construct();
	HX_STACK_LINE(17)
	this->add(hx::ClassOf< ::BloomFilterTest >());
}
;
	return null();
}

//TestSuite_obj::~TestSuite_obj() { }

Dynamic TestSuite_obj::__CreateEmpty() { return  new TestSuite_obj; }
hx::ObjectPtr< TestSuite_obj > TestSuite_obj::__new()
{  hx::ObjectPtr< TestSuite_obj > result = new TestSuite_obj();
	result->__construct();
	return result;}

Dynamic TestSuite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestSuite_obj > result = new TestSuite_obj();
	result->__construct();
	return result;}


TestSuite_obj::TestSuite_obj()
{
}

Dynamic TestSuite_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic TestSuite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TestSuite_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestSuite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestSuite_obj::__mClass,"__mClass");
};

#endif

Class TestSuite_obj::__mClass;

void TestSuite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("TestSuite"), hx::TCanCast< TestSuite_obj> ,sStaticFields,sMemberFields,
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

void TestSuite_obj::__boot()
{
}

