#ifndef INCLUDED_massive_munit_ICoverageTestResultClient
#define INCLUDED_massive_munit_ICoverageTestResultClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <massive/munit/IAdvancedTestResultClient.h>
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ICoverageTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  ICoverageTestResultClient_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ICoverageTestResultClient_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void setCurrentTestClassCoverage( Dynamic result)=0;
		Dynamic setCurrentTestClassCoverage_dyn();
virtual Void reportFinalCoverage( Dynamic percent,Dynamic missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency)=0;
		Dynamic reportFinalCoverage_dyn();
};

#define DELEGATE_massive_munit_ICoverageTestResultClient \
virtual Void setCurrentTestClassCoverage( Dynamic result) { return mDelegate->setCurrentTestClassCoverage(result);}  \
virtual Dynamic setCurrentTestClassCoverage_dyn() { return mDelegate->setCurrentTestClassCoverage_dyn();}  \
virtual Void reportFinalCoverage( Dynamic percent,Dynamic missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency) { return mDelegate->reportFinalCoverage(percent,missingCoverageResults,summary,classBreakdown,packageBreakdown,executionFrequency);}  \
virtual Dynamic reportFinalCoverage_dyn() { return mDelegate->reportFinalCoverage_dyn();}  \


template<typename IMPL>
class ICoverageTestResultClient_delegate_ : public ICoverageTestResultClient_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ICoverageTestResultClient_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_massive_munit_ICoverageTestResultClient
};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_ICoverageTestResultClient */ 
