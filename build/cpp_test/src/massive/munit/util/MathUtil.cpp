#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_massive_munit_util_MathUtil
#include <massive/munit/util/MathUtil.h>
#endif
namespace massive{
namespace munit{
namespace util{

Void MathUtil_obj::__construct()
{
HX_STACK_FRAME("massive.munit.util.MathUtil","new",0x00c1a6a1,"massive.munit.util.MathUtil.new","massive/munit/util/MathUtil.hx",39,0x3bb7d050)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//MathUtil_obj::~MathUtil_obj() { }

Dynamic MathUtil_obj::__CreateEmpty() { return  new MathUtil_obj; }
hx::ObjectPtr< MathUtil_obj > MathUtil_obj::__new()
{  hx::ObjectPtr< MathUtil_obj > result = new MathUtil_obj();
	result->__construct();
	return result;}

Dynamic MathUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MathUtil_obj > result = new MathUtil_obj();
	result->__construct();
	return result;}

Float MathUtil_obj::round( Float value,int precision){
	HX_STACK_FRAME("massive.munit.util.MathUtil","round",0x45a6a0cf,"massive.munit.util.MathUtil.round","massive/munit/util/MathUtil.hx",49,0x3bb7d050)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(precision,"precision")
	HX_STACK_LINE(50)
	Float _g = ::Math_obj::pow((int)10,precision);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	Float _g1 = (value * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(50)
	value = _g1;
	HX_STACK_LINE(51)
	int _g2 = ::Math_obj::round(value);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(51)
	Float _g3 = ::Math_obj::pow((int)10,precision);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(51)
	return (Float(_g2) / Float(_g3));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,round,return )


MathUtil_obj::MathUtil_obj()
{
}

Dynamic MathUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"round") ) { return round_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MathUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MathUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("round"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MathUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MathUtil_obj::__mClass,"__mClass");
};

#endif

Class MathUtil_obj::__mClass;

void MathUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.util.MathUtil"), hx::TCanCast< MathUtil_obj> ,sStaticFields,sMemberFields,
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

void MathUtil_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
} // end namespace util
