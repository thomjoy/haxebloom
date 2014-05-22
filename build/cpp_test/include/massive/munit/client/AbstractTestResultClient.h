#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#define INCLUDED_massive_munit_client_AbstractTestResultClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <massive/munit/ICoverageTestResultClient.h>
#include <massive/munit/IAdvancedTestResultClient.h>
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ICoverageTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS2(massive,munit,TestResult)
HX_DECLARE_CLASS3(massive,munit,client,AbstractTestResultClient)
namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES  AbstractTestResultClient_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AbstractTestResultClient_obj OBJ_;
		AbstractTestResultClient_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AbstractTestResultClient_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbstractTestResultClient_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::massive::munit::ITestResultClient_obj *()
			{ return new ::massive::munit::ITestResultClient_delegate_< AbstractTestResultClient_obj >(this); }
		inline operator ::massive::munit::ICoverageTestResultClient_obj *()
			{ return new ::massive::munit::ICoverageTestResultClient_delegate_< AbstractTestResultClient_obj >(this); }
		inline operator ::massive::munit::IAdvancedTestResultClient_obj *()
			{ return new ::massive::munit::IAdvancedTestResultClient_delegate_< AbstractTestResultClient_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AbstractTestResultClient"); }

		::String id;
		Dynamic completionHandler;
		Dynamic &completionHandler_dyn() { return completionHandler;}
		virtual Dynamic get_completionHandler( );
		Dynamic get_completionHandler_dyn();

		virtual Dynamic set_completionHandler( Dynamic value);
		Dynamic set_completionHandler_dyn();

		::String output;
		virtual ::String get_output( );
		Dynamic get_output_dyn();

		int passCount;
		int failCount;
		int errorCount;
		int ignoreCount;
		::String currentTestClass;
		Array< ::Dynamic > currentClassResults;
		Dynamic currentCoverageResult;
		Array< ::Dynamic > totalResults;
		Float totalCoveragePercent;
		::String totalCoverageReport;
		Dynamic totalCoverageResults;
		Dynamic originalTrace;
		bool finalResult;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void setCurrentTestClass( ::String className);
		Dynamic setCurrentTestClass_dyn();

		virtual Void addPass( ::massive::munit::TestResult result);
		Dynamic addPass_dyn();

		virtual Void addFail( ::massive::munit::TestResult result);
		Dynamic addFail_dyn();

		virtual Void addError( ::massive::munit::TestResult result);
		Dynamic addError_dyn();

		virtual Void addIgnore( ::massive::munit::TestResult result);
		Dynamic addIgnore_dyn();

		virtual Void setCurrentTestClassCoverage( Dynamic result);
		Dynamic setCurrentTestClassCoverage_dyn();

		virtual Void reportFinalCoverage( Dynamic percent,Dynamic missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency);
		Dynamic reportFinalCoverage_dyn();

		virtual Dynamic reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time);
		Dynamic reportFinalStatistics_dyn();

		virtual Void initializeTestClass( );
		Dynamic initializeTestClass_dyn();

		virtual Void updateTestClass( ::massive::munit::TestResult result);
		Dynamic updateTestClass_dyn();

		virtual Void finalizeTestClass( );
		Dynamic finalizeTestClass_dyn();

		virtual Void printReports( );
		Dynamic printReports_dyn();

		virtual Void printFinalStatistics( bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time);
		Dynamic printFinalStatistics_dyn();

		virtual Void printOverallResult( bool result);
		Dynamic printOverallResult_dyn();

		virtual Void addTrace( Dynamic value,Dynamic info);
		Dynamic addTrace_dyn();

		virtual Array< ::String > getTraces( );
		Dynamic getTraces_dyn();

		virtual int sortTestResults( ::massive::munit::TestResult a,::massive::munit::TestResult b);
		Dynamic sortTestResults_dyn();

		static Array< ::String > traces;
};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_AbstractTestResultClient */ 
