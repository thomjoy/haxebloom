#include <hxcpp.h>

#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
#ifndef INCLUDED_org_hamcrest_IllegalArgumentException
#include <org/hamcrest/IllegalArgumentException.h>
#endif
namespace org{
namespace hamcrest{

Void IllegalArgumentException_obj::__construct(::String __o_message,Dynamic cause,Dynamic info)
{
HX_STACK_FRAME("org.hamcrest.IllegalArgumentException","new",0x236854ef,"org.hamcrest.IllegalArgumentException.new","org/hamcrest/Exception.hx",45,0x940281f0)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
HX_STACK_ARG(cause,"cause")
HX_STACK_ARG(info,"info")
::String message = __o_message.Default(HX_CSTRING("Argument could not be processed."));
{
	HX_STACK_LINE(45)
	super::__construct(message,cause,info);
}
;
	return null();
}

//IllegalArgumentException_obj::~IllegalArgumentException_obj() { }

Dynamic IllegalArgumentException_obj::__CreateEmpty() { return  new IllegalArgumentException_obj; }
hx::ObjectPtr< IllegalArgumentException_obj > IllegalArgumentException_obj::__new(::String __o_message,Dynamic cause,Dynamic info)
{  hx::ObjectPtr< IllegalArgumentException_obj > result = new IllegalArgumentException_obj();
	result->__construct(__o_message,cause,info);
	return result;}

Dynamic IllegalArgumentException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IllegalArgumentException_obj > result = new IllegalArgumentException_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


IllegalArgumentException_obj::IllegalArgumentException_obj()
{
}

Dynamic IllegalArgumentException_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic IllegalArgumentException_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void IllegalArgumentException_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(IllegalArgumentException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IllegalArgumentException_obj::__mClass,"__mClass");
};

#endif

Class IllegalArgumentException_obj::__mClass;

void IllegalArgumentException_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.hamcrest.IllegalArgumentException"), hx::TCanCast< IllegalArgumentException_obj> ,sStaticFields,sMemberFields,
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

void IllegalArgumentException_obj::__boot()
{
}

} // end namespace org
} // end namespace hamcrest
