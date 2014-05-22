#ifndef INCLUDED_massive_munit_client_ExternalPrintClient
#define INCLUDED_massive_munit_client_ExternalPrintClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(massive,munit,client,ExternalPrintClient)
namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES  ExternalPrintClient_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ExternalPrintClient_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool queue( ::String methodName,Dynamic args)=0;
		Dynamic queue_dyn();
virtual Void setResult( bool value)=0;
		Dynamic setResult_dyn();
virtual Void print( ::String value)=0;
		Dynamic print_dyn();
virtual Void printLine( ::String value)=0;
		Dynamic printLine_dyn();
virtual Void setResultBackground( bool value)=0;
		Dynamic setResultBackground_dyn();
virtual Void createTestClass( ::String className)=0;
		Dynamic createTestClass_dyn();
virtual Void printToTestClassSummary( ::String value)=0;
		Dynamic printToTestClassSummary_dyn();
virtual Void setTestClassResult( int resultType)=0;
		Dynamic setTestClassResult_dyn();
virtual Void trace( Dynamic value)=0;
		Dynamic trace_dyn();
virtual Void addTestPass( ::String value)=0;
		Dynamic addTestPass_dyn();
virtual Void addTestFail( ::String value)=0;
		Dynamic addTestFail_dyn();
virtual Void addTestError( ::String value)=0;
		Dynamic addTestError_dyn();
virtual Void addTestIgnore( ::String value)=0;
		Dynamic addTestIgnore_dyn();
virtual Void addTestClassCoverage( ::String className,hx::Null< Float >  percent)=0;
		Dynamic addTestClassCoverage_dyn();
virtual Void addTestClassCoverageItem( ::String value)=0;
		Dynamic addTestClassCoverageItem_dyn();
virtual Void createCoverageReport( hx::Null< Float >  percent)=0;
		Dynamic createCoverageReport_dyn();
virtual Void addMissingCoverageClass( ::String className,hx::Null< Float >  percent)=0;
		Dynamic addMissingCoverageClass_dyn();
virtual Void addCoverageReportSection( ::String name,::String value)=0;
		Dynamic addCoverageReportSection_dyn();
virtual Void addCoverageSummary( ::String value)=0;
		Dynamic addCoverageSummary_dyn();
virtual Void printSummary( ::String value)=0;
		Dynamic printSummary_dyn();
};

#define DELEGATE_massive_munit_client_ExternalPrintClient \
virtual bool queue( ::String methodName,Dynamic args) { return mDelegate->queue(methodName,args);}  \
virtual Dynamic queue_dyn() { return mDelegate->queue_dyn();}  \
virtual Void setResult( bool value) { return mDelegate->setResult(value);}  \
virtual Dynamic setResult_dyn() { return mDelegate->setResult_dyn();}  \
virtual Void print( ::String value) { return mDelegate->print(value);}  \
virtual Dynamic print_dyn() { return mDelegate->print_dyn();}  \
virtual Void printLine( ::String value) { return mDelegate->printLine(value);}  \
virtual Dynamic printLine_dyn() { return mDelegate->printLine_dyn();}  \
virtual Void setResultBackground( bool value) { return mDelegate->setResultBackground(value);}  \
virtual Dynamic setResultBackground_dyn() { return mDelegate->setResultBackground_dyn();}  \
virtual Void createTestClass( ::String className) { return mDelegate->createTestClass(className);}  \
virtual Dynamic createTestClass_dyn() { return mDelegate->createTestClass_dyn();}  \
virtual Void printToTestClassSummary( ::String value) { return mDelegate->printToTestClassSummary(value);}  \
virtual Dynamic printToTestClassSummary_dyn() { return mDelegate->printToTestClassSummary_dyn();}  \
virtual Void setTestClassResult( int resultType) { return mDelegate->setTestClassResult(resultType);}  \
virtual Dynamic setTestClassResult_dyn() { return mDelegate->setTestClassResult_dyn();}  \
virtual Void trace( Dynamic value) { return mDelegate->trace(value);}  \
virtual Dynamic trace_dyn() { return mDelegate->trace_dyn();}  \
virtual Void addTestPass( ::String value) { return mDelegate->addTestPass(value);}  \
virtual Dynamic addTestPass_dyn() { return mDelegate->addTestPass_dyn();}  \
virtual Void addTestFail( ::String value) { return mDelegate->addTestFail(value);}  \
virtual Dynamic addTestFail_dyn() { return mDelegate->addTestFail_dyn();}  \
virtual Void addTestError( ::String value) { return mDelegate->addTestError(value);}  \
virtual Dynamic addTestError_dyn() { return mDelegate->addTestError_dyn();}  \
virtual Void addTestIgnore( ::String value) { return mDelegate->addTestIgnore(value);}  \
virtual Dynamic addTestIgnore_dyn() { return mDelegate->addTestIgnore_dyn();}  \
virtual Void addTestClassCoverage( ::String className,hx::Null< Float >  percent) { return mDelegate->addTestClassCoverage(className,percent);}  \
virtual Dynamic addTestClassCoverage_dyn() { return mDelegate->addTestClassCoverage_dyn();}  \
virtual Void addTestClassCoverageItem( ::String value) { return mDelegate->addTestClassCoverageItem(value);}  \
virtual Dynamic addTestClassCoverageItem_dyn() { return mDelegate->addTestClassCoverageItem_dyn();}  \
virtual Void createCoverageReport( hx::Null< Float >  percent) { return mDelegate->createCoverageReport(percent);}  \
virtual Dynamic createCoverageReport_dyn() { return mDelegate->createCoverageReport_dyn();}  \
virtual Void addMissingCoverageClass( ::String className,hx::Null< Float >  percent) { return mDelegate->addMissingCoverageClass(className,percent);}  \
virtual Dynamic addMissingCoverageClass_dyn() { return mDelegate->addMissingCoverageClass_dyn();}  \
virtual Void addCoverageReportSection( ::String name,::String value) { return mDelegate->addCoverageReportSection(name,value);}  \
virtual Dynamic addCoverageReportSection_dyn() { return mDelegate->addCoverageReportSection_dyn();}  \
virtual Void addCoverageSummary( ::String value) { return mDelegate->addCoverageSummary(value);}  \
virtual Dynamic addCoverageSummary_dyn() { return mDelegate->addCoverageSummary_dyn();}  \
virtual Void printSummary( ::String value) { return mDelegate->printSummary(value);}  \
virtual Dynamic printSummary_dyn() { return mDelegate->printSummary_dyn();}  \


template<typename IMPL>
class ExternalPrintClient_delegate_ : public ExternalPrintClient_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ExternalPrintClient_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_massive_munit_client_ExternalPrintClient
};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_ExternalPrintClient */ 
