#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
namespace org{
namespace hamcrest{

Void Exception_obj::__construct(::String __o_message,Dynamic cause,Dynamic info)
{
HX_STACK_FRAME("org.hamcrest.Exception","new",0xab539160,"org.hamcrest.Exception.new","org/hamcrest/Exception.hx",22,0x940281f0)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
HX_STACK_ARG(cause,"cause")
HX_STACK_ARG(info,"info")
::String message = __o_message.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(23)
	::Class _g = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(23)
	::String _g1 = ::Type_obj::getClassName(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(23)
	this->name = _g1;
	HX_STACK_LINE(24)
	this->message = message;
	HX_STACK_LINE(25)
	this->cause = cause;
	HX_STACK_LINE(26)
	this->info = info;
}
;
	return null();
}

//Exception_obj::~Exception_obj() { }

Dynamic Exception_obj::__CreateEmpty() { return  new Exception_obj; }
hx::ObjectPtr< Exception_obj > Exception_obj::__new(::String __o_message,Dynamic cause,Dynamic info)
{  hx::ObjectPtr< Exception_obj > result = new Exception_obj();
	result->__construct(__o_message,cause,info);
	return result;}

Dynamic Exception_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Exception_obj > result = new Exception_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String Exception_obj::get_name( ){
	HX_STACK_FRAME("org.hamcrest.Exception","get_name",0xc1feccd4,"org.hamcrest.Exception.get_name","org/hamcrest/Exception.hx",11,0x940281f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,get_name,return )

::String Exception_obj::get_message( ){
	HX_STACK_FRAME("org.hamcrest.Exception","get_message",0x623456de,"org.hamcrest.Exception.get_message","org/hamcrest/Exception.hx",14,0x940281f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	return this->message;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,get_message,return )

Dynamic Exception_obj::get_cause( ){
	HX_STACK_FRAME("org.hamcrest.Exception","get_cause",0xa79229c0,"org.hamcrest.Exception.get_cause","org/hamcrest/Exception.hx",17,0x940281f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	return this->cause;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,get_cause,return )

::String Exception_obj::toString( ){
	HX_STACK_FRAME("org.hamcrest.Exception","toString",0x31b36fac,"org.hamcrest.Exception.toString","org/hamcrest/Exception.hx",31,0x940281f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::String _g = this->get_name();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	::String _g1 = (_g + HX_CSTRING(": "));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(32)
	::String _g2 = this->get_message();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(32)
	::String str = (_g1 + _g2);		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(33)
	if (((this->info != null()))){
		HX_STACK_LINE(34)
		hx::AddEq(str,((((((HX_CSTRING(" at ") + this->info->__Field(HX_CSTRING("className"),true)) + HX_CSTRING("#")) + this->info->__Field(HX_CSTRING("methodName"),true)) + HX_CSTRING(" (")) + this->info->__Field(HX_CSTRING("lineNumber"),true)) + HX_CSTRING(")")));
	}
	HX_STACK_LINE(35)
	Dynamic _g3 = this->get_cause();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(35)
	if (((_g3 != null()))){
		HX_STACK_LINE(36)
		Dynamic _g4 = this->get_cause();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(36)
		::String _g5 = ::Std_obj::string(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(36)
		::String _g6 = (HX_CSTRING("\n\t Caused by: ") + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(36)
		hx::AddEq(str,_g6);
	}
	HX_STACK_LINE(37)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,toString,return )


Exception_obj::Exception_obj()
{
}

void Exception_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Exception);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(cause,"cause");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_END_CLASS();
}

void Exception_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(cause,"cause");
	HX_VISIT_MEMBER_NAME(info,"info");
}

Dynamic Exception_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return inCallProp ? get_name() : name; }
		if (HX_FIELD_EQ(inName,"info") ) { return info; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cause") ) { return inCallProp ? get_cause() : cause; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return inCallProp ? get_message() : message; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_cause") ) { return get_cause_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_message") ) { return get_message_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Exception_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cause") ) { cause=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Exception_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("message"));
	outFields->push(HX_CSTRING("cause"));
	outFields->push(HX_CSTRING("info"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Exception_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(Exception_obj,message),HX_CSTRING("message")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Exception_obj,cause),HX_CSTRING("cause")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Exception_obj,info),HX_CSTRING("info")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("get_name"),
	HX_CSTRING("message"),
	HX_CSTRING("get_message"),
	HX_CSTRING("cause"),
	HX_CSTRING("get_cause"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.hamcrest.Exception"), hx::TCanCast< Exception_obj> ,sStaticFields,sMemberFields,
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

} // end namespace org
} // end namespace hamcrest
