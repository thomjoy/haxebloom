#ifndef INCLUDED_TestSuite
#define INCLUDED_TestSuite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <massive/munit/TestSuite.h>
HX_DECLARE_CLASS0(TestSuite)
HX_DECLARE_CLASS2(massive,munit,TestSuite)


class HXCPP_CLASS_ATTRIBUTES  TestSuite_obj : public ::massive::munit::TestSuite_obj{
	public:
		typedef ::massive::munit::TestSuite_obj super;
		typedef TestSuite_obj OBJ_;
		TestSuite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TestSuite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestSuite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TestSuite"); }

};


#endif /* INCLUDED_TestSuite */ 
