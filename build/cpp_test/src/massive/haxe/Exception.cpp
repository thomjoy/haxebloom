#include <hxcpp.h>

#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_haxe_util_ReflectUtil
#include <massive/haxe/util/ReflectUtil.h>
#endif
namespace massive{
namespace haxe{

Void Exception_obj::__construct(::String message,Dynamic info)
{
HX_STACK_FRAME("massive.haxe.Exception","new",0x75c9a923,"massive.haxe.Exception.new","massive/haxe/Exception.hx",67,0x32c9780d)
HX_STACK_THIS(this)
HX_STACK_ARG(message,"message")
HX_STACK_ARG(info,"info")
{
	HX_STACK_LINE(68)
	this->message = message;
	HX_STACK_LINE(69)
	this->info = info;
	HX_STACK_LINE(70)
	this->type = ::massive::haxe::util::ReflectUtil_obj::here(hx::SourceInfo(HX_CSTRING("Exception.hx"),70,HX_CSTRING("massive.haxe.Exception"),HX_CSTRING("new")))->__Field(HX_CSTRING("className"),true);
}
;
	return null();
}

//Exception_obj::~Exception_obj() { }

Dynamic Exception_obj::__CreateEmpty() { return  new Exception_obj; }
hx::ObjectPtr< Exception_obj > Exception_obj::__new(::String message,Dynamic info)
{  hx::ObjectPtr< Exception_obj > result = new Exception_obj();
	result->__construct(message,info);
	return result;}

Dynamic Exception_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Exception_obj > result = new Exception_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Exception_obj::toString( ){
	HX_STACK_FRAME("massive.haxe.Exception","toString",0xe8615509,"massive.haxe.Exception.toString","massive/haxe/Exception.hx",79,0x32c9780d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	::String str = ((this->type + HX_CSTRING(": ")) + this->message);		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(81)
	if (((this->info != null()))){
		HX_STACK_LINE(82)
		hx::AddEq(str,((((((HX_CSTRING(" at ") + this->info->__Field(HX_CSTRING("className"),true)) + HX_CSTRING("#")) + this->info->__Field(HX_CSTRING("methodName"),true)) + HX_CSTRING(" (")) + this->info->__Field(HX_CSTRING("lineNumber"),true)) + HX_CSTRING(")")));
	}
	HX_STACK_LINE(83)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,toString,return )


Exception_obj::Exception_obj()
{
}

void Exception_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Exception);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_END_CLASS();
}

void Exception_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(info,"info");
}

Dynamic Exception_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"info") ) { return info; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return message; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Exception_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Exception_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("message"));
	outFields->push(HX_CSTRING("info"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Exception_obj,type),HX_CSTRING("type")},
	{hx::fsString,(int)offsetof(Exception_obj,message),HX_CSTRING("message")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Exception_obj,info),HX_CSTRING("info")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("type"),
	HX_CSTRING("message"),
	HX_CSTRING("info"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Exception_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Exception_obj::__mClass,"__mClass");
};

#endif

Class Exception_obj::__mClass;

void Exception_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.haxe.Exception"), hx::TCanCast< Exception_obj> ,sStaticFields,sMemberFields,
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

void Exception_obj::__boot()
{
}

} // end namespace massive
} // end namespace haxe
