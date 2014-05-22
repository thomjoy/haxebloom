#ifndef INCLUDED_massive_munit_ITestResultClient
#define INCLUDED_massive_munit_ITestResultClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS2(massive,munit,TestResult)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  ITestResultClient_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ITestResultClient_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void addPass( ::massive::munit::TestResult result)=0;
		Dynamic addPass_dyn();
virtual Void addFail( ::massive::munit::TestResult result)=0;
		Dynamic addFail_dyn();
virtual Void addError( ::massive::munit::TestResult result)=0;
		Dynamic addError_dyn();
virtual Void addIgnore( ::massive::munit::TestResult result)=0;
		Dynamic addIgnore_dyn();
virtual Dynamic reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time)=0;
		Dynamic reportFinalStatistics_dyn();
};

#define DELEGATE_massive_munit_ITestResultClient \
virtual Void addPass( ::massive::munit::TestResult result) { return mDelegate->addPass(result);}  \
virtual Dynamic addPass_dyn() { return mDelegate->addPass_dyn();}  \
virtual Void addFail( ::massive::munit::TestResult result) { return mDelegate->addFail(result);}  \
virtual Dynamic addFail_dyn() { return mDelegate->addFail_dyn();}  \
virtual Void addError( ::massive::munit::TestResult result) { return mDelegate->addError(result);}  \
virtual Dynamic addError_dyn() { return mDelegate->addError_dyn();}  \
virtual Void addIgnore( ::massive::munit::TestResult result) { return mDelegate->addIgnore(result);}  \
virtual Dynamic addIgnore_dyn() { return mDelegate->addIgnore_dyn();}  \
virtual Dynamic reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time) { return mDelegate->reportFinalStatistics(testCount,passCount,failCount,errorCount,ignoreCount,time);}  \
virtual Dynamic reportFinalStatistics_dyn() { return mDelegate->reportFinalStatistics_dyn();}  \


template<typename IMPL>
class ITestResultClient_delegate_ : public ITestResultClient_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ITestResultClient_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_massive_munit_ITestResultClient
};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_ITestResultClient */ 
