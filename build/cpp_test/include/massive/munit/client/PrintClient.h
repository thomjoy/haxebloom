#ifndef INCLUDED_massive_munit_client_PrintClient
#define INCLUDED_massive_munit_client_PrintClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <massive/munit/client/PrintClientBase.h>
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ICoverageTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS3(massive,munit,client,AbstractTestResultClient)
HX_DECLARE_CLASS3(massive,munit,client,PrintClient)
HX_DECLARE_CLASS3(massive,munit,client,PrintClientBase)
namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES  PrintClient_obj : public ::massive::munit::client::PrintClientBase_obj{
	public:
		typedef ::massive::munit::client::PrintClientBase_obj super;
		typedef PrintClient_obj OBJ_;
		PrintClient_obj();
		Void __construct(Dynamic __o_includeIgnoredReport);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PrintClient_obj > __new(Dynamic __o_includeIgnoredReport);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PrintClient_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PrintClient"); }

		virtual Void init( );

		virtual Void printOverallResult( bool result);

		virtual Void customTrace( Dynamic value,Dynamic info);
		Dynamic customTrace_dyn();

		virtual Dynamic reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time);

		virtual Void print( Dynamic value);

		virtual Void printLine( Dynamic value,Dynamic indent);

		static ::String DEFAULT_ID;
};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_PrintClient */ 
