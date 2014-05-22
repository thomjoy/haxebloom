#include <hxcpp.h>

#ifndef INCLUDED_BloomFilterTest
#include <BloomFilterTest.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_massive_munit_Assert
#include <massive/munit/Assert.h>
#endif
#ifndef INCLUDED_massive_munit_util_Timer
#include <massive/munit/util/Timer.h>
#endif

Void BloomFilterTest_obj::__construct()
{
HX_STACK_FRAME("BloomFilterTest","new",0x7ad0c91f,"BloomFilterTest.new","BloomFilterTest.hx",15,0x9dd2ff31)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	::haxe::Log_obj::trace(HX_CSTRING("BloomFilterTest.new"),hx::SourceInfo(HX_CSTRING("BloomFilterTest.hx"),15,HX_CSTRING("BloomFilterTest"),HX_CSTRING("new")));
}
;
	return null();
}

//BloomFilterTest_obj::~BloomFilterTest_obj() { }

Dynamic BloomFilterTest_obj::__CreateEmpty() { return  new BloomFilterTest_obj; }
hx::ObjectPtr< BloomFilterTest_obj > BloomFilterTest_obj::__new()
{  hx::ObjectPtr< BloomFilterTest_obj > result = new BloomFilterTest_obj();
	result->__construct();
	return result;}

Dynamic BloomFilterTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BloomFilterTest_obj > result = new BloomFilterTest_obj();
	result->__construct();
	return result;}

Void BloomFilterTest_obj::testExample( ){
{
		HX_STACK_FRAME("BloomFilterTest","testExample",0xd82645b7,"BloomFilterTest.testExample","BloomFilterTest.hx",21,0x9dd2ff31)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		::massive::munit::Assert_obj::isTrue(true,hx::SourceInfo(HX_CSTRING("BloomFilterTest.hx"),21,HX_CSTRING("BloomFilterTest"),HX_CSTRING("testExample")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BloomFilterTest_obj,testExample,(void))


BloomFilterTest_obj::BloomFilterTest_obj()
{
}

void BloomFilterTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BloomFilterTest);
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_END_CLASS();
}

void BloomFilterTest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timer,"timer");
}

Dynamic BloomFilterTest_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"testExample") ) { return testExample_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BloomFilterTest_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::massive::munit::util::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BloomFilterTest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("timer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::massive::munit::util::Timer*/ ,(int)offsetof(BloomFilterTest_obj,timer),HX_CSTRING("timer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("timer"),
	HX_CSTRING("testExample"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BloomFilterTest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BloomFilterTest_obj::__mClass,"__mClass");
};

#endif

Class BloomFilterTest_obj::__mClass;

void BloomFilterTest_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("BloomFilterTest"), hx::TCanCast< BloomFilterTest_obj> ,sStaticFields,sMemberFields,
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

void BloomFilterTest_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","BloomFilterTest.hx",9,0x9dd2ff31)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","BloomFilterTest.hx",9,0x9dd2ff31)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","BloomFilterTest.hx",9,0x9dd2ff31)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("Test") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("testExample") , _Function_2_1::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_CSTRING("fields") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

