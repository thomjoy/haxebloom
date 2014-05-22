#include <hxcpp.h>

#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
#ifndef INCLUDED_org_hamcrest_MissingImplementationException
#include <org/hamcrest/MissingImplementationException.h>
#endif
namespace org{
namespace hamcrest{

Void MissingImplementationException_obj::__construct(::String __o_message,Dynamic cause,Dynamic info)
{
HX_STACK_FRAME("org.hamcrest.MissingImplementationException","new",0x959d2a6a,"org.hamcrest.MissingImplementationException.new","org/hamcrest/Exception.hx",53,0x940281f0)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
HX_STACK_ARG(cause,"cause")
HX_STACK_ARG(info,"info")
::String message = __o_message.Default(HX_CSTRING("Abstract method not overridden."));
{
	HX_STACK_LINE(53)
	super::__construct(message,cause,info);
}
;
	return null();
}

//MissingImplementationException_obj::~MissingImplementationException_obj() { }

Dynamic MissingImplementationException_obj::__CreateEmpty() { return  new MissingImplementationException_obj; }
hx::ObjectPtr< MissingImplementationException_obj > MissingImplementationException_obj::__new(::String __o_message,Dynamic cause,Dynamic info)
{  hx::ObjectPtr< MissingImplementationException_obj > result = new MissingImplementationException_obj();
	result->__construct(__o_message,cause,info);
	return result;}

Dynamic MissingImplementationException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MissingImplementationException_obj > result = new MissingImplementationException_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


MissingImplementationException_obj::MissingImplementationException_obj()
{
}

Dynamic MissingImplementationException_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic MissingImplementationException_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MissingImplementationException_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(MissingImplementationException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MissingImplementationException_obj::__mClass,"__mClass");
};

#endif

Class MissingImplementationException_obj::__mClass;

void MissingImplementationException_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.hamcrest.MissingImplementationException"), hx::TCanCast< MissingImplementationException_obj> ,sStaticFields,sMemberFields,
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

void MissingImplementationException_obj::__boot()
{
}

} // end namespace org
} // end namespace hamcrest
