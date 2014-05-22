#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#define INCLUDED_massive_munit_IAdvancedTestResultClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <massive/munit/ITestResultClient.h>
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  IAdvancedTestResultClient_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IAdvancedTestResultClient_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void setCurrentTestClass( ::String className)=0;
		Dynamic setCurrentTestClass_dyn();
};

#define DELEGATE_massive_munit_IAdvancedTestResultClient \
virtual Void setCurrentTestClass( ::String className) { return mDelegate->setCurrentTestClass(className);}  \
virtual Dynamic setCurrentTestClass_dyn() { return mDelegate->setCurrentTestClass_dyn();}  \


template<typename IMPL>
class IAdvancedTestResultClient_delegate_ : public IAdvancedTestResultClient_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IAdvancedTestResultClient_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_massive_munit_IAdvancedTestResultClient
};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_IAdvancedTestResultClient */ 
