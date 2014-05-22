#include <hxcpp.h>

#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_munit_AssertionException
#include <massive/munit/AssertionException.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_TestResultType
#include <massive/munit/TestResultType.h>
#endif
namespace massive{
namespace munit{

Void TestResult_obj::__construct()
{
HX_STACK_FRAME("massive.munit.TestResult","new",0x9b452308,"massive.munit.TestResult.new","massive/munit/TestResult.hx",98,0x8da40d66)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(99)
	this->passed = false;
	HX_STACK_LINE(100)
	this->executionTime = 0.0;
	HX_STACK_LINE(101)
	this->name = HX_CSTRING("");
	HX_STACK_LINE(102)
	this->className = HX_CSTRING("");
	HX_STACK_LINE(103)
	this->description = HX_CSTRING("");
	HX_STACK_LINE(104)
	this->async = false;
	HX_STACK_LINE(105)
	this->ignore = false;
	HX_STACK_LINE(106)
	this->error = null();
	HX_STACK_LINE(107)
	this->failure = null();
}
;
	return null();
}

//TestResult_obj::~TestResult_obj() { }

Dynamic TestResult_obj::__CreateEmpty() { return  new TestResult_obj; }
hx::ObjectPtr< TestResult_obj > TestResult_obj::__new()
{  hx::ObjectPtr< TestResult_obj > result = new TestResult_obj();
	result->__construct();
	return result;}

Dynamic TestResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestResult_obj > result = new TestResult_obj();
	result->__construct();
	return result;}

::String TestResult_obj::get_location( ){
	HX_STACK_FRAME("massive.munit.TestResult","get_location",0xa4933a96,"massive.munit.TestResult.get_location","massive/munit/TestResult.hx",70,0x8da40d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	if (((bool((this->name == HX_CSTRING(""))) && bool((this->className == HX_CSTRING("")))))){
		HX_STACK_LINE(70)
		return HX_CSTRING("");
	}
	else{
		HX_STACK_LINE(70)
		return ((this->className + HX_CSTRING("#")) + this->name);
	}
	HX_STACK_LINE(70)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestResult_obj,get_location,return )

::massive::munit::TestResultType TestResult_obj::get_type( ){
	HX_STACK_FRAME("massive.munit.TestResult","get_type",0x57bdba9b,"massive.munit.TestResult.get_type","massive/munit/TestResult.hx",111,0x8da40d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	if (((this->error != null()))){
		HX_STACK_LINE(112)
		return ::massive::munit::TestResultType_obj::ERROR;
	}
	HX_STACK_LINE(113)
	if (((this->failure != null()))){
		HX_STACK_LINE(113)
		return ::massive::munit::TestResultType_obj::FAIL;
	}
	HX_STACK_LINE(114)
	if (((this->ignore == true))){
		HX_STACK_LINE(114)
		return ::massive::munit::TestResultType_obj::IGNORE;
	}
	HX_STACK_LINE(115)
	if (((this->passed == true))){
		HX_STACK_LINE(115)
		return ::massive::munit::TestResultType_obj::PASS;
	}
	HX_STACK_LINE(117)
	return ::massive::munit::TestResultType_obj::UNKNOWN;
}


HX_DEFINE_DYNAMIC_FUNC0(TestResult_obj,get_type,return )


TestResult_obj::TestResult_obj()
{
}

void TestResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestResult);
	HX_MARK_MEMBER_NAME(passed,"passed");
	HX_MARK_MEMBER_NAME(executionTime,"executionTime");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(location,"location");
	HX_MARK_MEMBER_NAME(async,"async");
	HX_MARK_MEMBER_NAME(ignore,"ignore");
	HX_MARK_MEMBER_NAME(failure,"failure");
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void TestResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(passed,"passed");
	HX_VISIT_MEMBER_NAME(executionTime,"executionTime");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(location,"location");
	HX_VISIT_MEMBER_NAME(async,"async");
	HX_VISIT_MEMBER_NAME(ignore,"ignore");
	HX_VISIT_MEMBER_NAME(failure,"failure");
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic TestResult_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return inCallProp ? get_type() : type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"async") ) { return async; }
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"passed") ) { return passed; }
		if (HX_FIELD_EQ(inName,"ignore") ) { return ignore; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"failure") ) { return failure; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { return inCallProp ? get_location() : location; }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return description; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_location") ) { return get_location_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"executionTime") ) { return executionTime; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::massive::munit::TestResultType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"async") ) { async=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"passed") ) { passed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignore") ) { ignore=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"failure") ) { failure=inValue.Cast< ::massive::munit::AssertionException >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { location=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"executionTime") ) { executionTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("passed"));
	outFields->push(HX_CSTRING("executionTime"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("className"));
	outFields->push(HX_CSTRING("description"));
	outFields->push(HX_CSTRING("location"));
	outFields->push(HX_CSTRING("async"));
	outFields->push(HX_CSTRING("ignore"));
	outFields->push(HX_CSTRING("failure"));
	outFields->push(HX_CSTRING("error"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(TestResult_obj,passed),HX_CSTRING("passed")},
	{hx::fsFloat,(int)offsetof(TestResult_obj,executionTime),HX_CSTRING("executionTime")},
	{hx::fsString,(int)offsetof(TestResult_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(TestResult_obj,className),HX_CSTRING("className")},
	{hx::fsString,(int)offsetof(TestResult_obj,description),HX_CSTRING("description")},
	{hx::fsString,(int)offsetof(TestResult_obj,location),HX_CSTRING("location")},
	{hx::fsBool,(int)offsetof(TestResult_obj,async),HX_CSTRING("async")},
	{hx::fsBool,(int)offsetof(TestResult_obj,ignore),HX_CSTRING("ignore")},
	{hx::fsObject /*::massive::munit::AssertionException*/ ,(int)offsetof(TestResult_obj,failure),HX_CSTRING("failure")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestResult_obj,error),HX_CSTRING("error")},
	{hx::fsObject /*::massive::munit::TestResultType*/ ,(int)offsetof(TestResult_obj,type),HX_CSTRING("type")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("passed"),
	HX_CSTRING("executionTime"),
	HX_CSTRING("name"),
	HX_CSTRING("className"),
	HX_CSTRING("description"),
	HX_CSTRING("location"),
	HX_CSTRING("get_location"),
	HX_CSTRING("async"),
	HX_CSTRING("ignore"),
	HX_CSTRING("failure"),
	HX_CSTRING("error"),
	HX_CSTRING("type"),
	HX_CSTRING("get_type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestResult_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestResult_obj::__mClass,"__mClass");
};

#endif

Class TestResult_obj::__mClass;

void TestResult_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.TestResult"), hx::TCanCast< TestResult_obj> ,sStaticFields,sMemberFields,
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

void TestResult_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
