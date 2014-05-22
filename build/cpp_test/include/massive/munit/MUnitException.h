#ifndef INCLUDED_massive_munit_MUnitException
#define INCLUDED_massive_munit_MUnitException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <massive/haxe/Exception.h>
HX_DECLARE_CLASS2(massive,haxe,Exception)
HX_DECLARE_CLASS2(massive,munit,MUnitException)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  MUnitException_obj : public ::massive::haxe::Exception_obj{
	public:
		typedef ::massive::haxe::Exception_obj super;
		typedef MUnitException_obj OBJ_;
		MUnitException_obj();
		Void __construct(::String message,Dynamic info);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MUnitException_obj > __new(::String message,Dynamic info);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MUnitException_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MUnitException"); }

};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_MUnitException */ 
