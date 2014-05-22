#ifndef INCLUDED_massive_munit_client_SummaryReportClient
#define INCLUDED_massive_munit_client_SummaryReportClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <massive/munit/client/AbstractTestResultClient.h>
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ICoverageTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS3(massive,munit,client,AbstractTestResultClient)
HX_DECLARE_CLASS3(massive,munit,client,SummaryReportClient)
namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES  SummaryReportClient_obj : public ::massive::munit::client::AbstractTestResultClient_obj{
	public:
		typedef ::massive::munit::client::AbstractTestResultClient_obj super;
		typedef SummaryReportClient_obj OBJ_;
		SummaryReportClient_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SummaryReportClient_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SummaryReportClient_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SummaryReportClient"); }

		virtual Void printFinalStatistics( bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time);

		virtual Void printOverallResult( bool result);

		virtual Void printReports( );

		static ::String DEFAULT_ID;
};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_SummaryReportClient */ 
