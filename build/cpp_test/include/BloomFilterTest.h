#ifndef INCLUDED_BloomFilterTest
#define INCLUDED_BloomFilterTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BloomFilterTest)
HX_DECLARE_CLASS3(massive,munit,util,Timer)


class HXCPP_CLASS_ATTRIBUTES  BloomFilterTest_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BloomFilterTest_obj OBJ_;
		BloomFilterTest_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BloomFilterTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BloomFilterTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BloomFilterTest"); }

		::massive::munit::util::Timer timer;
		virtual Void testExample( );
		Dynamic testExample_dyn();

		static Dynamic __meta__;
};


#endif /* INCLUDED_BloomFilterTest */ 
