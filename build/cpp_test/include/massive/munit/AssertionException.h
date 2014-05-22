#ifndef INCLUDED_massive_munit_AssertionException
#define INCLUDED_massive_munit_AssertionException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <massive/munit/MUnitException.h>
HX_DECLARE_CLASS2(massive,haxe,Exception)
HX_DECLARE_CLASS2(massive,munit,AssertionException)
HX_DECLARE_CLASS2(massive,munit,MUnitException)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  AssertionException_obj : public ::massive::munit::MUnitException_obj{
	public:
		typedef ::massive::munit::MUnitException_obj super;
		typedef AssertionException_obj OBJ_;
		AssertionException_obj();
		Void __construct(::String msg,Dynamic info);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssertionException_obj > __new(::String msg,Dynamic info);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssertionException_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AssertionException"); }

};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_AssertionException */ 
