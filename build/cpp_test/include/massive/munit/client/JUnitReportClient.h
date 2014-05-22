#ifndef INCLUDED_massive_munit_client_JUnitReportClient
#define INCLUDED_massive_munit_client_JUnitReportClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <massive/munit/IAdvancedTestResultClient.h>
HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS2(massive,munit,TestResult)
HX_DECLARE_CLASS3(massive,munit,client,JUnitReportClient)
namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES  JUnitReportClient_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JUnitReportClient_obj OBJ_;
		JUnitReportClient_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< JUnitReportClient_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JUnitReportClient_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::massive::munit::ITestResultClient_obj *()
			{ return new ::massive::munit::ITestResultClient_delegate_< JUnitReportClient_obj >(this); }
		inline operator ::massive::munit::IAdvancedTestResultClient_obj *()
			{ return new ::massive::munit::IAdvancedTestResultClient_delegate_< JUnitReportClient_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("JUnitReportClient"); }

		::String id;
		Dynamic completionHandler;
		Dynamic &completionHandler_dyn() { return completionHandler;}
		virtual Dynamic get_completionHandler( );
		Dynamic get_completionHandler_dyn();

		virtual Dynamic set_completionHandler( Dynamic value);
		Dynamic set_completionHandler_dyn();

		::String newline;
		::StringBuf xml;
		::StringBuf testSuiteXML;
		::String currentTestClass;
		int suitePassCount;
		int suiteFailCount;
		int suiteErrorCount;
		Float suiteExecutionTime;
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

		virtual Dynamic reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time);
		Dynamic reportFinalStatistics_dyn();

		virtual Void endTestSuite( );
		Dynamic endTestSuite_dyn();

		virtual Void startTestSuite( );
		Dynamic startTestSuite_dyn();

		static ::String DEFAULT_ID;
};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_JUnitReportClient */ 
