#ifndef INCLUDED_BloomFilter
#define INCLUDED_BloomFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BloomFilter)


class HXCPP_CLASS_ATTRIBUTES  BloomFilter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BloomFilter_obj OBJ_;
		BloomFilter_obj();
		Void __construct(Dynamic m,int k);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BloomFilter_obj > __new(Dynamic m,int k);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BloomFilter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BloomFilter"); }

		Dynamic m;
		Dynamic k;
		Array< int > _locations;
		Array< int > buckets;
		virtual Array< int > locations( ::String v);
		Dynamic locations_dyn();

		virtual Void add( ::String v);
		Dynamic add_dyn();

		virtual bool has( ::String v);
		Dynamic has_dyn();

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_BloomFilter */ 
