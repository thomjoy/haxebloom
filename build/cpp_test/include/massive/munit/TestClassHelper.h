#ifndef INCLUDED_massive_munit_TestClassHelper
#define INCLUDED_massive_munit_TestClassHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(massive,munit,TestClassHelper)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  TestClassHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestClassHelper_obj OBJ_;
		TestClassHelper_obj();
		Void __construct(::Class type,Dynamic __o_isDebug);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TestClassHelper_obj > __new(::Class type,Dynamic __o_isDebug);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestClassHelper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TestClassHelper"); }

		::Class type;
		Dynamic test;
		Dynamic beforeClass;
		Dynamic afterClass;
		Dynamic before;
		Dynamic after;
		Dynamic tests;
		int index;
		::String className;
		bool isDebug;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual Dynamic next( );
		Dynamic next_dyn();

		virtual Dynamic current( );
		Dynamic current_dyn();

		virtual Void parse( ::Class type);
		Dynamic parse_dyn();

		virtual Array< ::Dynamic > getInheritanceChain( ::Class clazz);
		Dynamic getInheritanceChain_dyn();

		virtual Dynamic collateFieldMeta( Array< ::Dynamic > inherintanceChain);
		Dynamic collateFieldMeta_dyn();

		virtual Void scanForTests( Dynamic fieldMeta);
		Dynamic scanForTests_dyn();

		virtual Void searchForMatchingTags( ::String fieldName,Dynamic func,Dynamic funcMeta);
		Dynamic searchForMatchingTags_dyn();

		virtual Void addTest( ::String field,Dynamic testFunction,Dynamic testInstance,bool isAsync,bool isIgnored,::String description);
		Dynamic addTest_dyn();

		virtual int sortTestsByName( Dynamic x,Dynamic y);
		Dynamic sortTestsByName_dyn();

		virtual Void nullFunc( );
		Dynamic nullFunc_dyn();

		static ::String META_TAG_BEFORE_CLASS;
		static ::String META_TAG_AFTER_CLASS;
		static ::String META_TAG_BEFORE;
		static ::String META_TAG_AFTER;
		static ::String META_TAG_TEST;
		static ::String META_TAG_ASYNC_TEST;
		static ::String META_TAG_IGNORE;
		static ::String META_PARAM_ASYNC_TEST;
		static ::String META_TAG_TEST_DEBUG;
		static Array< ::String > META_TAGS;
};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_TestClassHelper */ 
