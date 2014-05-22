#ifndef INCLUDED_FNV
#define INCLUDED_FNV

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(FNV)


class HXCPP_CLASS_ATTRIBUTES  FNV_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FNV_obj OBJ_;
		FNV_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FNV_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FNV_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FNV"); }

		static int fnv_1a( ::String s);
		static Dynamic fnv_1a_dyn();

		static int fnv_1a_b( int a);
		static Dynamic fnv_1a_b_dyn();

};


#endif /* INCLUDED_FNV */ 
