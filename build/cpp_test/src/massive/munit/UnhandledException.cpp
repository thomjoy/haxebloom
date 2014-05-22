#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_haxe_util_ReflectUtil
#include <massive/haxe/util/ReflectUtil.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
#ifndef INCLUDED_massive_munit_UnhandledException
#include <massive/munit/UnhandledException.h>
#endif
namespace massive{
namespace munit{

Void UnhandledException_obj::__construct(Dynamic source,::String testLocation)
{
HX_STACK_FRAME("massive.munit.UnhandledException","new",0x1b256705,"massive.munit.UnhandledException.new","massive/munit/UnhandledException.hx",51,0x46824609)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(testLocation,"testLocation")
{
	HX_STACK_LINE(52)
	Dynamic _g = source->toString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	::String _g1 = ::Std_obj::string(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(52)
	::String _g2 = this->formatLocation(source,testLocation);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(52)
	::String _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(52)
	super::__construct(_g3,null());
	HX_STACK_LINE(53)
	this->type = ::massive::haxe::util::ReflectUtil_obj::here(hx::SourceInfo(HX_CSTRING("UnhandledException.hx"),53,HX_CSTRING("massive.munit.UnhandledException"),HX_CSTRING("new")))->__Field(HX_CSTRING("className"),true);
}
;
	return null();
}

//UnhandledException_obj::~UnhandledException_obj() { }

Dynamic UnhandledException_obj::__CreateEmpty() { return  new UnhandledException_obj; }
hx::ObjectPtr< UnhandledException_obj > UnhandledException_obj::__new(Dynamic source,::String testLocation)
{  hx::ObjectPtr< UnhandledException_obj > result = new UnhandledException_obj();
	result->__construct(source,testLocation);
	return result;}

Dynamic UnhandledException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UnhandledException_obj > result = new UnhandledException_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String UnhandledException_obj::formatLocation( Dynamic source,::String testLocation){
	HX_STACK_FRAME("massive.munit.UnhandledException","formatLocation",0x55771a07,"massive.munit.UnhandledException.formatLocation","massive/munit/UnhandledException.hx",57,0x46824609)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(testLocation,"testLocation")
	HX_STACK_LINE(58)
	::String stackTrace = (HX_CSTRING(" at ") + testLocation);		HX_STACK_VAR(stackTrace,"stackTrace");
	HX_STACK_LINE(60)
	::String stack = this->getStackTrace(source);		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(62)
	if (((stack != HX_CSTRING("")))){
		HX_STACK_LINE(63)
		::String _g = stack.substr((int)1,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		::String _g1 = (HX_CSTRING(" ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		hx::AddEq(stackTrace,_g1);
	}
	HX_STACK_LINE(65)
	return stackTrace;
}


HX_DEFINE_DYNAMIC_FUNC2(UnhandledException_obj,formatLocation,return )

::String UnhandledException_obj::getStackTrace( Dynamic source){
	HX_STACK_FRAME("massive.munit.UnhandledException","getStackTrace",0x11f4c538,"massive.munit.UnhandledException.getStackTrace","massive/munit/UnhandledException.hx",69,0x46824609)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(70)
	::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(82)
	if (((s == HX_CSTRING("")))){
		HX_STACK_LINE(84)
		Array< ::Dynamic > stack = ::haxe::CallStack_obj::exceptionStack();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(85)
		while((true)){
			HX_STACK_LINE(85)
			if ((!(((stack->length > (int)0))))){
				HX_STACK_LINE(85)
				break;
			}
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				::haxe::StackItem _g = stack->shift().StaticCast< ::haxe::StackItem >();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(87)
				switch( (int)(_g->__Index())){
					case (int)2: {
						HX_STACK_LINE(87)
						int line = (::haxe::StackItem(_g))->__Param(2);		HX_STACK_VAR(line,"line");
						HX_STACK_LINE(87)
						::String file = (::haxe::StackItem(_g))->__Param(1);		HX_STACK_VAR(file,"file");
						HX_STACK_LINE(90)
						hx::AddEq(s,((((HX_CSTRING("\tat ") + file) + HX_CSTRING(" (")) + line) + HX_CSTRING(")\n")));
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(87)
						::String method = (::haxe::StackItem(_g))->__Param(1);		HX_STACK_VAR(method,"method");
						HX_STACK_LINE(87)
						::String classname = (::haxe::StackItem(_g))->__Param(0);		HX_STACK_VAR(classname,"classname");
						HX_STACK_LINE(91)
						hx::AddEq(s,((((HX_CSTRING("\tat ") + classname) + HX_CSTRING("#")) + method) + HX_CSTRING("\n")));
					}
					;break;
					default: {
					}
				}
			}
		}
	}
	HX_STACK_LINE(107)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC1(UnhandledException_obj,getStackTrace,return )


UnhandledException_obj::UnhandledException_obj()
{
}

Dynamic UnhandledException_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"getStackTrace") ) { return getStackTrace_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"formatLocation") ) { return formatLocation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UnhandledException_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void UnhandledException_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("formatLocation"),
	HX_CSTRING("getStackTrace"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UnhandledException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UnhandledException_obj::__mClass,"__mClass");
};

#endif

Class UnhandledException_obj::__mClass;

void UnhandledException_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.UnhandledException"), hx::TCanCast< UnhandledException_obj> ,sStaticFields,sMemberFields,
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

void UnhandledException_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
