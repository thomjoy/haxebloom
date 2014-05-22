#ifndef INCLUDED_massive_munit_Assert
#define INCLUDED_massive_munit_Assert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(massive,munit,Assert)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  Assert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assert_obj OBJ_;
		Assert_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Assert_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assert_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Assert"); }

		static int assertionCount;
		static Void isTrue( bool value,Dynamic info);
		static Dynamic isTrue_dyn();

		static Void isFalse( bool value,Dynamic info);
		static Dynamic isFalse_dyn();

		static Void isNull( Dynamic value,Dynamic info);
		static Dynamic isNull_dyn();

		static Void isNotNull( Dynamic value,Dynamic info);
		static Dynamic isNotNull_dyn();

		static Void isNaN( Float value,Dynamic info);
		static Dynamic isNaN_dyn();

		static Void isNotNaN( Float value,Dynamic info);
		static Dynamic isNotNaN_dyn();

		static Void isType( Dynamic value,Dynamic type,Dynamic info);
		static Dynamic isType_dyn();

		static Void isNotType( Dynamic value,Dynamic type,Dynamic info);
		static Dynamic isNotType_dyn();

		static Void areEqual( Dynamic expected,Dynamic actual,Dynamic info);
		static Dynamic areEqual_dyn();

		static Void areNotEqual( Dynamic expected,Dynamic actual,Dynamic info);
		static Dynamic areNotEqual_dyn();

		static Void areSame( Dynamic expected,Dynamic actual,Dynamic info);
		static Dynamic areSame_dyn();

		static Void areNotSame( Dynamic expected,Dynamic actual,Dynamic info);
		static Dynamic areNotSame_dyn();

		static Void fail( ::String msg,Dynamic info);
		static Dynamic fail_dyn();

};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_Assert */ 
