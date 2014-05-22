#include <hxcpp.h>

#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_haxe_util_ReflectUtil
#include <massive/haxe/util/ReflectUtil.h>
#endif
#ifndef INCLUDED_massive_munit_AssertionException
#include <massive/munit/AssertionException.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
namespace massive{
namespace munit{

Void AssertionException_obj::__construct(::String msg,Dynamic info)
{
HX_STACK_FRAME("massive.munit.AssertionException","new",0xc7bddb66,"massive.munit.AssertionException.new","massive/munit/AssertionException.hx",47,0xfa5e38c8)
HX_STACK_THIS(this)
HX_STACK_ARG(msg,"msg")
HX_STACK_ARG(info,"info")
{
	HX_STACK_LINE(48)
	super::__construct(msg,info);
	HX_STACK_LINE(49)
	this->type = ::massive::haxe::util::ReflectUtil_obj::here(hx::SourceInfo(HX_CSTRING("AssertionException.hx"),49,HX_CSTRING("massive.munit.AssertionException"),HX_CSTRING("new")))->__Field(HX_CSTRING("className"),true);
}
;
	return null();
}

//AssertionException_obj::~AssertionException_obj() { }

Dynamic AssertionException_obj::__CreateEmpty() { return  new AssertionException_obj; }
hx::ObjectPtr< AssertionException_obj > AssertionException_obj::__new(::String msg,Dynamic info)
{  hx::ObjectPtr< AssertionException_obj > result = new AssertionException_obj();
	result->__construct(msg,info);
	return result;}

Dynamic AssertionException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssertionException_obj > result = new AssertionException_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


AssertionException_obj::AssertionException_obj()
{
}

Dynamic AssertionException_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AssertionException_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AssertionException_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(AssertionException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssertionException_obj::__mClass,"__mClass");
};

#endif

Class AssertionException_obj::__mClass;

void AssertionException_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.AssertionException"), hx::TCanCast< AssertionException_obj> ,sStaticFields,sMemberFields,
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

void AssertionException_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
