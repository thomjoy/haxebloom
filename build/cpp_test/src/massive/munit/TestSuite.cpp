#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_massive_munit_TestSuite
#include <massive/munit/TestSuite.h>
#endif
namespace massive{
namespace munit{

Void TestSuite_obj::__construct()
{
HX_STACK_FRAME("massive.munit.TestSuite","new",0x8e962f11,"massive.munit.TestSuite.new","massive/munit/TestSuite.hx",70,0x3355af41)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(71)
	Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(71)
	this->tests = _g;
	HX_STACK_LINE(72)
	this->index = (int)0;
}
;
	return null();
}

//TestSuite_obj::~TestSuite_obj() { }

Dynamic TestSuite_obj::__CreateEmpty() { return  new TestSuite_obj; }
hx::ObjectPtr< TestSuite_obj > TestSuite_obj::__new()
{  hx::ObjectPtr< TestSuite_obj > result = new TestSuite_obj();
	result->__construct();
	return result;}

Dynamic TestSuite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestSuite_obj > result = new TestSuite_obj();
	result->__construct();
	return result;}

Void TestSuite_obj::add( ::Class test){
{
		HX_STACK_FRAME("massive.munit.TestSuite","add",0x8e8c50d2,"massive.munit.TestSuite.add","massive/munit/TestSuite.hx",81,0x3355af41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(test,"test")
		HX_STACK_LINE(82)
		this->tests->__Field(HX_CSTRING("push"),true)(test);
		HX_STACK_LINE(83)
		this->sortTests();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestSuite_obj,add,(void))

bool TestSuite_obj::hasNext( ){
	HX_STACK_FRAME("massive.munit.TestSuite","hasNext",0x83fcb09e,"massive.munit.TestSuite.hasNext","massive/munit/TestSuite.hx",93,0x3355af41)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	return (this->index < this->tests->__Field(HX_CSTRING("length"),true));
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,hasNext,return )

::Class TestSuite_obj::next( ){
	HX_STACK_FRAME("massive.munit.TestSuite","next",0x34d30122,"massive.munit.TestSuite.next","massive/munit/TestSuite.hx",103,0x3355af41)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	if ((this->hasNext())){
		HX_STACK_LINE(103)
		int _g = (this->index)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		return this->tests->__GetItem(_g);
	}
	else{
		HX_STACK_LINE(103)
		return null();
	}
	HX_STACK_LINE(103)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,next,return )

Void TestSuite_obj::repeat( ){
{
		HX_STACK_FRAME("massive.munit.TestSuite","repeat",0xe487bd4a,"massive.munit.TestSuite.repeat","massive/munit/TestSuite.hx",112,0x3355af41)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		if (((this->index > (int)0))){
			HX_STACK_LINE(112)
			(this->index)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,repeat,(void))

Void TestSuite_obj::sortTests( ){
{
		HX_STACK_FRAME("massive.munit.TestSuite","sortTests",0x63bd4d14,"massive.munit.TestSuite.sortTests","massive/munit/TestSuite.hx",117,0x3355af41)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		this->tests->__Field(HX_CSTRING("sort"),true)(this->sortByName_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,sortTests,(void))

int TestSuite_obj::sortByName( ::Class x,::Class y){
	HX_STACK_FRAME("massive.munit.TestSuite","sortByName",0x1af9eb2f,"massive.munit.TestSuite.sortByName","massive/munit/TestSuite.hx",121,0x3355af41)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(122)
	::String xName = ::Type_obj::getClassName(x);		HX_STACK_VAR(xName,"xName");
	HX_STACK_LINE(123)
	::String yName = ::Type_obj::getClassName(y);		HX_STACK_VAR(yName,"yName");
	HX_STACK_LINE(124)
	if (((xName == yName))){
		HX_STACK_LINE(124)
		return (int)0;
	}
	HX_STACK_LINE(125)
	if (((xName > yName))){
		HX_STACK_LINE(125)
		return (int)1;
	}
	else{
		HX_STACK_LINE(126)
		return (int)-1;
	}
	HX_STACK_LINE(125)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(TestSuite_obj,sortByName,return )


TestSuite_obj::TestSuite_obj()
{
}

void TestSuite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestSuite);
	HX_MARK_MEMBER_NAME(tests,"tests");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

void TestSuite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tests,"tests");
	HX_VISIT_MEMBER_NAME(index,"index");
}

Dynamic TestSuite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tests") ) { return tests; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sortTests") ) { return sortTests_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortByName") ) { return sortByName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestSuite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tests") ) { tests=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestSuite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tests"));
	outFields->push(HX_CSTRING("index"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestSuite_obj,tests),HX_CSTRING("tests")},
	{hx::fsInt,(int)offsetof(TestSuite_obj,index),HX_CSTRING("index")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tests"),
	HX_CSTRING("index"),
	HX_CSTRING("add"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("next"),
	HX_CSTRING("repeat"),
	HX_CSTRING("sortTests"),
	HX_CSTRING("sortByName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestSuite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestSuite_obj::__mClass,"__mClass");
};

#endif

Class TestSuite_obj::__mClass;

void TestSuite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.TestSuite"), hx::TCanCast< TestSuite_obj> ,sStaticFields,sMemberFields,
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

void TestSuite_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
