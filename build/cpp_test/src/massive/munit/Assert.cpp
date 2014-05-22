#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_munit_Assert
#include <massive/munit/Assert.h>
#endif
#ifndef INCLUDED_massive_munit_AssertionException
#include <massive/munit/AssertionException.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
namespace massive{
namespace munit{

Void Assert_obj::__construct()
{
	return null();
}

//Assert_obj::~Assert_obj() { }

Dynamic Assert_obj::__CreateEmpty() { return  new Assert_obj; }
hx::ObjectPtr< Assert_obj > Assert_obj::__new()
{  hx::ObjectPtr< Assert_obj > result = new Assert_obj();
	result->__construct();
	return result;}

Dynamic Assert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assert_obj > result = new Assert_obj();
	result->__construct();
	return result;}

int Assert_obj::assertionCount;

Void Assert_obj::isTrue( bool value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isTrue",0x34cf1719,"massive.munit.Assert.isTrue","massive/munit/Assert.hx",52,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(53)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(54)
		if (((value != true))){
			HX_STACK_LINE(54)
			::String _g = ::Std_obj::string(value);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			::String _g1 = (HX_CSTRING("Expected TRUE but was [") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(54)
			::String _g2 = (_g1 + HX_CSTRING("]"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(54)
			::massive::munit::Assert_obj::fail(_g2,info);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isTrue,(void))

Void Assert_obj::isFalse( bool value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isFalse",0xe5859778,"massive.munit.Assert.isFalse","massive/munit/Assert.hx",64,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(65)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(66)
		if (((value != false))){
			HX_STACK_LINE(66)
			::String _g = ::Std_obj::string(value);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(66)
			::String _g1 = (HX_CSTRING("Expected FALSE but was [") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(66)
			::String _g2 = (_g1 + HX_CSTRING("]"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(66)
			::massive::munit::Assert_obj::fail(_g2,info);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isFalse,(void))

Void Assert_obj::isNull( Dynamic value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isNull",0x30da0e52,"massive.munit.Assert.isNull","massive/munit/Assert.hx",76,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(77)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(78)
		if (((value != null()))){
			HX_STACK_LINE(78)
			::String _g = ::Std_obj::string(value);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			::String _g1 = (HX_CSTRING("Value [") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(78)
			::String _g2 = (_g1 + HX_CSTRING("] was not NULL"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(78)
			::massive::munit::Assert_obj::fail(_g2,info);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isNull,(void))

Void Assert_obj::isNotNull( Dynamic value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isNotNull",0xec2b6a4f,"massive.munit.Assert.isNotNull","massive/munit/Assert.hx",88,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(89)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(90)
		if (((value == null()))){
			HX_STACK_LINE(90)
			::String _g = ::Std_obj::string(value);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			::String _g1 = (HX_CSTRING("Value [") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(90)
			::String _g2 = (_g1 + HX_CSTRING("] was NULL"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(90)
			::massive::munit::Assert_obj::fail(_g2,info);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isNotNull,(void))

Void Assert_obj::isNaN( Float value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isNaN",0x97c09f50,"massive.munit.Assert.isNaN","massive/munit/Assert.hx",100,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(101)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(102)
		if ((!(::Math_obj::isNaN(value)))){
			HX_STACK_LINE(102)
			::massive::munit::Assert_obj::fail(((HX_CSTRING("Value [") + value) + HX_CSTRING("]  was not NaN")),info);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isNaN,(void))

Void Assert_obj::isNotNaN( Float value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isNotNaN",0x370391f3,"massive.munit.Assert.isNotNaN","massive/munit/Assert.hx",112,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(113)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(114)
		if ((::Math_obj::isNaN(value))){
			HX_STACK_LINE(114)
			::massive::munit::Assert_obj::fail(((HX_CSTRING("Value [") + value) + HX_CSTRING("] was NaN")),info);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isNotNaN,(void))

Void Assert_obj::isType( Dynamic value,Dynamic type,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isType",0x34d46285,"massive.munit.Assert.isType","massive/munit/Assert.hx",124,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(125)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(126)
		if ((!(::Std_obj::is(value,type)))){
			HX_STACK_LINE(126)
			::String _g = ::Std_obj::string(value);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(126)
			::String _g1 = (HX_CSTRING("Value [") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(126)
			::String _g2 = (_g1 + HX_CSTRING("] was not of type: "));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(126)
			::String _g3 = ::Type_obj::getClassName(type);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(126)
			::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(126)
			::massive::munit::Assert_obj::fail(_g4,info);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,isType,(void))

Void Assert_obj::isNotType( Dynamic value,Dynamic type,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","isNotType",0xf025be82,"massive.munit.Assert.isNotType","massive/munit/Assert.hx",136,0xdba0f24f)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(137)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(138)
		if ((::Std_obj::is(value,type))){
			HX_STACK_LINE(138)
			::String _g = ::Std_obj::string(value);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(138)
			::String _g1 = (HX_CSTRING("Value [") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(138)
			::String _g2 = (_g1 + HX_CSTRING("] was of type: "));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(138)
			::String _g3 = ::Type_obj::getClassName(type);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(138)
			::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(138)
			::massive::munit::Assert_obj::fail(_g4,info);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,isNotType,(void))

Void Assert_obj::areEqual( Dynamic expected,Dynamic actual,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","areEqual",0x455d6dc1,"massive.munit.Assert.areEqual","massive/munit/Assert.hx",152,0xdba0f24f)
		HX_STACK_ARG(expected,"expected")
		HX_STACK_ARG(actual,"actual")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(153)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(154)
		bool equal;		HX_STACK_VAR(equal,"equal");
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			::ValueType _g = ::Type_obj::_typeof(expected);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(154)
			switch( (int)(_g->__Index())){
				case (int)7: {
					HX_STACK_LINE(157)
					equal = ::Type_obj::enumEq(expected,actual);
				}
				;break;
				default: {
					HX_STACK_LINE(162)
					equal = (expected == actual);
				}
			}
		}
		HX_STACK_LINE(164)
		if ((!(equal))){
			HX_STACK_LINE(164)
			::String _g = ::Std_obj::string(actual);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(164)
			::String _g1 = (HX_CSTRING("Value [") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(164)
			::String _g2 = (_g1 + HX_CSTRING("] was not equal to expected value ["));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(164)
			::String _g3 = ::Std_obj::string(expected);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(164)
			::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(164)
			::String _g5 = (_g4 + HX_CSTRING("]"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(164)
			::massive::munit::Assert_obj::fail(_g5,info);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,areEqual,(void))

Void Assert_obj::areNotEqual( Dynamic expected,Dynamic actual,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","areNotEqual",0x6c4589b4,"massive.munit.Assert.areNotEqual","massive/munit/Assert.hx",178,0xdba0f24f)
		HX_STACK_ARG(expected,"expected")
		HX_STACK_ARG(actual,"actual")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(179)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(180)
		bool equal;		HX_STACK_VAR(equal,"equal");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			::ValueType _g = ::Type_obj::_typeof(expected);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(180)
			switch( (int)(_g->__Index())){
				case (int)7: {
					HX_STACK_LINE(183)
					equal = ::Type_obj::enumEq(expected,actual);
				}
				;break;
				default: {
					HX_STACK_LINE(187)
					equal = (expected == actual);
				}
			}
		}
		HX_STACK_LINE(190)
		if ((equal)){
			HX_STACK_LINE(190)
			::String _g = ::Std_obj::string(actual);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			::String _g1 = (HX_CSTRING("Value [") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(190)
			::String _g2 = (_g1 + HX_CSTRING("] was equal to value ["));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(190)
			::String _g3 = ::Std_obj::string(expected);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(190)
			::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(190)
			::String _g5 = (_g4 + HX_CSTRING("]"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(190)
			::massive::munit::Assert_obj::fail(_g5,info);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,areNotEqual,(void))

Void Assert_obj::areSame( Dynamic expected,Dynamic actual,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","areSame",0x02a125f9,"massive.munit.Assert.areSame","massive/munit/Assert.hx",201,0xdba0f24f)
		HX_STACK_ARG(expected,"expected")
		HX_STACK_ARG(actual,"actual")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(202)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(203)
		if (((expected != actual))){
			HX_STACK_LINE(203)
			::String _g = ::Std_obj::string(actual);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(203)
			::String _g1 = (HX_CSTRING("Value [") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(203)
			::String _g2 = (_g1 + HX_CSTRING("] was not the same as expected value ["));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(203)
			::String _g3 = ::Std_obj::string(expected);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(203)
			::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(203)
			::String _g5 = (_g4 + HX_CSTRING("]"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(203)
			::massive::munit::Assert_obj::fail(_g5,info);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,areSame,(void))

Void Assert_obj::areNotSame( Dynamic expected,Dynamic actual,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","areNotSame",0x76c00966,"massive.munit.Assert.areNotSame","massive/munit/Assert.hx",214,0xdba0f24f)
		HX_STACK_ARG(expected,"expected")
		HX_STACK_ARG(actual,"actual")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(215)
		(::massive::munit::Assert_obj::assertionCount)++;
		HX_STACK_LINE(216)
		if (((expected == actual))){
			HX_STACK_LINE(216)
			::String _g = ::Std_obj::string(actual);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(216)
			::String _g1 = (HX_CSTRING("Value [") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(216)
			::String _g2 = (_g1 + HX_CSTRING("] was the same as expected value ["));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(216)
			::String _g3 = ::Std_obj::string(expected);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(216)
			::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(216)
			::String _g5 = (_g4 + HX_CSTRING("]"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(216)
			::massive::munit::Assert_obj::fail(_g5,info);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,areNotSame,(void))

Void Assert_obj::fail( ::String msg,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.Assert","fail",0x65f6825f,"massive.munit.Assert.fail","massive/munit/Assert.hx",227,0xdba0f24f)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(227)
		HX_STACK_DO_THROW(::massive::munit::AssertionException_obj::__new(msg,info));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,fail,(void))


Assert_obj::Assert_obj()
{
}

Dynamic Assert_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fail") ) { return fail_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isNaN") ) { return isNaN_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isTrue") ) { return isTrue_dyn(); }
		if (HX_FIELD_EQ(inName,"isNull") ) { return isNull_dyn(); }
		if (HX_FIELD_EQ(inName,"isType") ) { return isType_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isFalse") ) { return isFalse_dyn(); }
		if (HX_FIELD_EQ(inName,"areSame") ) { return areSame_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isNotNaN") ) { return isNotNaN_dyn(); }
		if (HX_FIELD_EQ(inName,"areEqual") ) { return areEqual_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isNotNull") ) { return isNotNull_dyn(); }
		if (HX_FIELD_EQ(inName,"isNotType") ) { return isNotType_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"areNotSame") ) { return areNotSame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"areNotEqual") ) { return areNotEqual_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"assertionCount") ) { return assertionCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"assertionCount") ) { assertionCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assert_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("assertionCount"),
	HX_CSTRING("isTrue"),
	HX_CSTRING("isFalse"),
	HX_CSTRING("isNull"),
	HX_CSTRING("isNotNull"),
	HX_CSTRING("isNaN"),
	HX_CSTRING("isNotNaN"),
	HX_CSTRING("isType"),
	HX_CSTRING("isNotType"),
	HX_CSTRING("areEqual"),
	HX_CSTRING("areNotEqual"),
	HX_CSTRING("areSame"),
	HX_CSTRING("areNotSame"),
	HX_CSTRING("fail"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assert_obj::assertionCount,"assertionCount");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assert_obj::assertionCount,"assertionCount");
};

#endif

Class Assert_obj::__mClass;

void Assert_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.Assert"), hx::TCanCast< Assert_obj> ,sStaticFields,sMemberFields,
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

void Assert_obj::__boot()
{
	assertionCount= (int)0;
}

} // end namespace massive
} // end namespace munit
