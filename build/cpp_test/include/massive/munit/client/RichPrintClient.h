#ifndef INCLUDED_massive_munit_client_RichPrintClient
#define INCLUDED_massive_munit_client_RichPrintClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <massive/munit/client/PrintClientBase.h>
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ICoverageTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS2(massive,munit,TestResult)
HX_DECLARE_CLASS2(massive,munit,TestResultType)
HX_DECLARE_CLASS3(massive,munit,client,AbstractTestResultClient)
HX_DECLARE_CLASS3(massive,munit,client,ExternalPrintClient)
HX_DECLARE_CLASS3(massive,munit,client,PrintClientBase)
HX_DECLARE_CLASS3(massive,munit,client,RichPrintClient)
namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES  RichPrintClient_obj : public ::massive::munit::client::PrintClientBase_obj{
	public:
		typedef ::massive::munit::client::PrintClientBase_obj super;
		typedef RichPrintClient_obj OBJ_;
		RichPrintClient_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RichPrintClient_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RichPrintClient_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RichPrintClient"); }

		::massive::munit::TestResultType testClassResultType;
		::massive::munit::client::ExternalPrintClient external;
		virtual Void init( );

		virtual Void initializeTestClass( );

		virtual Void updateTestClass( ::massive::munit::TestResult result);

		virtual ::String serializeTestResult( ::massive::munit::TestResult result);
		Dynamic serializeTestResult_dyn();

		virtual Void finalizeTestClass( );

		virtual ::massive::munit::TestResultType getTestClassResultType( );
		Dynamic getTestClassResultType_dyn();

		virtual Void setCurrentTestClassCoverage( Dynamic result);

		virtual Void reportFinalCoverage( Dynamic percent,Dynamic missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency);

		virtual ::String trim( ::String output);
		Dynamic trim_dyn();

		virtual Void printMissingCoverage( Dynamic missingCoverageResults);
		Dynamic printMissingCoverage_dyn();

		virtual Void printReports( );

		virtual Void printFinalStatistics( bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time);

		virtual Void printOverallResult( bool result);

		virtual Void customTrace( Dynamic value,Dynamic info);
		Dynamic customTrace_dyn();

		virtual Void print( Dynamic value);

		virtual Void printLine( Dynamic value,Dynamic indent);

		static ::String DEFAULT_ID;
};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_RichPrintClient */ 
