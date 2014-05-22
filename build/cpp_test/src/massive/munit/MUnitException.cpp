#include <hxcpp.h>

#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_haxe_util_ReflectUtil
#include <massive/haxe/util/ReflectUtil.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
namespace massive{
namespace munit{

Void MUnitException_obj::__construct(::String message,Dynamic info)
{
HX_STACK_FRAME("massive.munit.MUnitException","new",0x5a5febb7,"massive.munit.MUnitException.new","massive/munit/MUnitException.hx",48,0x12d60697)
HX_STACK_THIS(this)
HX_STACK_ARG(message,"message")
HX_STACK_ARG(info,"info")
{
	HX_STACK_LINE(49)
	super::__construct(message,info);
	HX_STACK_LINE(50)
	this->type = ::massive::haxe::util::ReflectUtil_obj::here(hx::SourceInfo(HX_CSTRING("MUnitException.hx"),50,HX_CSTRING("massive.munit.MUnitException"),HX_CSTRING("new")))->__Field(HX_CSTRING("className"),true);
}
;
	return null();
}

//MUnitException_obj::~MUnitException_obj() { }

Dynamic MUnitException_obj::__CreateEmpty() { return  new MUnitException_obj; }
hx::ObjectPtr< MUnitException_obj > MUnitException_obj::__new(::String message,Dynamic info)
{  hx::ObjectPtr< MUnitException_obj > result = new MUnitException_obj();
	result->__construct(message,info);
	return result;}

Dynamic MUnitException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MUnitException_obj > result = new MUnitException_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


MUnitException_obj::MUnitException_obj()
{
}

Dynamic MUnitException_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic MUnitException_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MUnitException_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(MUnitException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MUnitException_obj::__mClass,"__mClass");
};

#endif

Class MUnitException_obj::__mClass;

void MUnitException_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.MUnitException"), hx::TCanCast< MUnitException_obj> ,sStaticFields,sMemberFields,
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

void MUnitException_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
