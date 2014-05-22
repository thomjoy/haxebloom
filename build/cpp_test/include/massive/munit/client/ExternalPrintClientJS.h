#ifndef INCLUDED_massive_munit_client_ExternalPrintClientJS
#define INCLUDED_massive_munit_client_ExternalPrintClientJS

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <massive/munit/client/ExternalPrintClient.h>
HX_DECLARE_CLASS3(massive,munit,client,ExternalPrintClient)
HX_DECLARE_CLASS3(massive,munit,client,ExternalPrintClientJS)
namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES  ExternalPrintClientJS_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ExternalPrintClientJS_obj OBJ_;
		ExternalPrintClientJS_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ExternalPrintClientJS_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExternalPrintClientJS_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::massive::munit::client::ExternalPrintClient_obj *()
			{ return new ::massive::munit::client::ExternalPrintClient_delegate_< ExternalPrintClientJS_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ExternalPrintClientJS"); }

		virtual Void print( ::String value);
		Dynamic print_dyn();

		virtual Void printLine( ::String value);
		Dynamic printLine_dyn();

		virtual Void setResult( bool value);
		Dynamic setResult_dyn();

		virtual Void setResultBackground( bool value);
		Dynamic setResultBackground_dyn();

		virtual Void trace( Dynamic value);
		Dynamic trace_dyn();

		virtual Void createTestClass( ::String className);
		Dynamic createTestClass_dyn();

		virtual Void printToTestClassSummary( ::String value);
		Dynamic printToTestClassSummary_dyn();

		virtual Void setTestClassResult( int resultType);
		Dynamic setTestClassResult_dyn();

		virtual Void addTestPass( ::String value);
		Dynamic addTestPass_dyn();

		virtual Void addTestFail( ::String value);
		Dynamic addTestFail_dyn();

		virtual Void addTestError( ::String value);
		Dynamic addTestError_dyn();

		virtual Void addTestIgnore( ::String value);
		Dynamic addTestIgnore_dyn();

		virtual Void addTestClassCoverage( ::String className,hx::Null< Float >  percent);
		Dynamic addTestClassCoverage_dyn();

		virtual Void addTestClassCoverageItem( ::String value);
		Dynamic addTestClassCoverageItem_dyn();

		virtual Void createCoverageReport( hx::Null< Float >  percent);
		Dynamic createCoverageReport_dyn();

		virtual Void addMissingCoverageClass( ::String className,hx::Null< Float >  percent);
		Dynamic addMissingCoverageClass_dyn();

		virtual Void addCoverageReportSection( ::String name,::String value);
		Dynamic addCoverageReportSection_dyn();

		virtual Void addCoverageSummary( ::String value);
		Dynamic addCoverageSummary_dyn();

		virtual Void printSummary( ::String value);
		Dynamic printSummary_dyn();

		virtual bool queue( ::String method,Dynamic args);
		Dynamic queue_dyn();

		virtual ::String convertToJavaScript( ::String method,Dynamic args);
		Dynamic convertToJavaScript_dyn();

		virtual ::String serialiseToHTML( Dynamic value);
		Dynamic serialiseToHTML_dyn();

};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_ExternalPrintClientJS */ 
