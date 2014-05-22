#include <hxcpp.h>

#ifndef INCLUDED_org_hamcrest_AssertionException
#include <org/hamcrest/AssertionException.h>
#endif
#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
namespace org{
namespace hamcrest{

Void AssertionException_obj::__construct(::String __o_message,Dynamic cause,Dynamic info)
{
HX_STACK_FRAME("org.hamcrest.AssertionException","new",0x059f6420,"org.hamcrest.AssertionException.new","org/hamcrest/AssertionException.hx",12,0xacddbb70)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
HX_STACK_ARG(cause,"cause")
HX_STACK_ARG(info,"info")
::String message = __o_message.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(12)
	super::__construct(message,cause,info);
}
;
	return null();
}

//AssertionException_obj::~AssertionException_obj() { }

Dynamic AssertionException_obj::__CreateEmpty() { return  new AssertionException_obj; }
hx::ObjectPtr< AssertionException_obj > AssertionException_obj::__new(::String __o_message,Dynamic cause,Dynamic info)
{  hx::ObjectPtr< AssertionException_obj > result = new AssertionException_obj();
	result->__construct(__o_message,cause,info);
	return result;}

Dynamic AssertionException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssertionException_obj > result = new AssertionException_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.hamcrest.AssertionException"), hx::TCanCast< AssertionException_obj> ,sStaticFields,sMemberFields,
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

} // end namespace org
} // end namespace hamcrest
