#ifndef INCLUDED_TestMain
#define INCLUDED_TestMain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(TestMain)


class HXCPP_CLASS_ATTRIBUTES  TestMain_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestMain_obj OBJ_;
		TestMain_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TestMain_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestMain_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TestMain"); }

		virtual Void completionHandler( bool successful);
		Dynamic completionHandler_dyn();

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_TestMain */ 
