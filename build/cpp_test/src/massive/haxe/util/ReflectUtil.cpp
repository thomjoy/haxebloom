#include <hxcpp.h>

#ifndef INCLUDED_massive_haxe_util_ReflectUtil
#include <massive/haxe/util/ReflectUtil.h>
#endif
namespace massive{
namespace haxe{
namespace util{

Void ReflectUtil_obj::__construct()
{
	return null();
}

//ReflectUtil_obj::~ReflectUtil_obj() { }

Dynamic ReflectUtil_obj::__CreateEmpty() { return  new ReflectUtil_obj; }
hx::ObjectPtr< ReflectUtil_obj > ReflectUtil_obj::__new()
{  hx::ObjectPtr< ReflectUtil_obj > result = new ReflectUtil_obj();
	result->__construct();
	return result;}

Dynamic ReflectUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ReflectUtil_obj > result = new ReflectUtil_obj();
	result->__construct();
	return result;}

Dynamic ReflectUtil_obj::here( Dynamic info){
	HX_STACK_FRAME("massive.haxe.util.ReflectUtil","here",0x42faf86d,"massive.haxe.util.ReflectUtil.here","massive/haxe/util/ReflectUtil.hx",45,0x840d91ae)
	HX_STACK_ARG(info,"info")
	HX_STACK_LINE(45)
	return info;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ReflectUtil_obj,here,return )


ReflectUtil_obj::ReflectUtil_obj()
{
}

Dynamic ReflectUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"here") ) { return here_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ReflectUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ReflectUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("here"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ReflectUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ReflectUtil_obj::__mClass,"__mClass");
};

#endif

Class ReflectUtil_obj::__mClass;

void ReflectUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.haxe.util.ReflectUtil"), hx::TCanCast< ReflectUtil_obj> ,sStaticFields,sMemberFields,
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

void ReflectUtil_obj::__boot()
{
}

} // end namespace massive
} // end namespace haxe
} // end namespace util
