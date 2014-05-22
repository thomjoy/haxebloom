#ifndef INCLUDED_massive_munit_UnhandledException
#define INCLUDED_massive_munit_UnhandledException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <massive/munit/MUnitException.h>
HX_DECLARE_CLASS2(massive,haxe,Exception)
HX_DECLARE_CLASS2(massive,munit,MUnitException)
HX_DECLARE_CLASS2(massive,munit,UnhandledException)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  UnhandledException_obj : public ::massive::munit::MUnitException_obj{
	public:
		typedef ::massive::munit::MUnitException_obj super;
		typedef UnhandledException_obj OBJ_;
		UnhandledException_obj();
		Void __construct(Dynamic source,::String testLocation);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UnhandledException_obj > __new(Dynamic source,::String testLocation);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UnhandledException_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UnhandledException"); }

		virtual ::String formatLocation( Dynamic source,::String testLocation);
		Dynamic formatLocation_dyn();

		virtual ::String getStackTrace( Dynamic source);
		Dynamic getStackTrace_dyn();

};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_UnhandledException */ 
