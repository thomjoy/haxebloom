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
#ifndef INCLUDED_massive_munit_async_MissingAsyncDelegateException
#include <massive/munit/async/MissingAsyncDelegateException.h>
#endif
namespace massive{
namespace munit{
namespace async{

Void MissingAsyncDelegateException_obj::__construct(::String message,Dynamic info)
{
HX_STACK_FRAME("massive.munit.async.MissingAsyncDelegateException","new",0xcec4300d,"massive.munit.async.MissingAsyncDelegateException.new","massive/munit/async/MissingAsyncDelegateException.hx",45,0x3fd83046)
HX_STACK_THIS(this)
HX_STACK_ARG(message,"message")
HX_STACK_ARG(info,"info")
{
	HX_STACK_LINE(46)
	super::__construct(message,info);
	HX_STACK_LINE(47)
	this->type = ::massive::haxe::util::ReflectUtil_obj::here(hx::SourceInfo(HX_CSTRING("MissingAsyncDelegateException.hx"),47,HX_CSTRING("massive.munit.async.MissingAsyncDelegateException"),HX_CSTRING("new")))->__Field(HX_CSTRING("className"),true);
}
;
	return null();
}

//MissingAsyncDelegateException_obj::~MissingAsyncDelegateException_obj() { }

Dynamic MissingAsyncDelegateException_obj::__CreateEmpty() { return  new MissingAsyncDelegateException_obj; }
hx::ObjectPtr< MissingAsyncDelegateException_obj > MissingAsyncDelegateException_obj::__new(::String message,Dynamic info)
{  hx::ObjectPtr< MissingAsyncDelegateException_obj > result = new MissingAsyncDelegateException_obj();
	result->__construct(message,info);
	return result;}

Dynamic MissingAsyncDelegateException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MissingAsyncDelegateException_obj > result = new MissingAsyncDelegateException_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


MissingAsyncDelegateException_obj::MissingAsyncDelegateException_obj()
{
}

Dynamic MissingAsyncDelegateException_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic MissingAsyncDelegateException_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MissingAsyncDelegateException_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(MissingAsyncDelegateException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MissingAsyncDelegateException_obj::__mClass,"__mClass");
};

#endif

Class MissingAsyncDelegateException_obj::__mClass;

void MissingAsyncDelegateException_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.async.MissingAsyncDelegateException"), hx::TCanCast< MissingAsyncDelegateException_obj> ,sStaticFields,sMemberFields,
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

void MissingAsyncDelegateException_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
} // end namespace async
