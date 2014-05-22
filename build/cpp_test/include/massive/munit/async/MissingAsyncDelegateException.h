#ifndef INCLUDED_massive_munit_async_MissingAsyncDelegateException
#define INCLUDED_massive_munit_async_MissingAsyncDelegateException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <massive/munit/MUnitException.h>
HX_DECLARE_CLASS2(massive,haxe,Exception)
HX_DECLARE_CLASS2(massive,munit,MUnitException)
HX_DECLARE_CLASS3(massive,munit,async,MissingAsyncDelegateException)
namespace massive{
namespace munit{
namespace async{


class HXCPP_CLASS_ATTRIBUTES  MissingAsyncDelegateException_obj : public ::massive::munit::MUnitException_obj{
	public:
		typedef ::massive::munit::MUnitException_obj super;
		typedef MissingAsyncDelegateException_obj OBJ_;
		MissingAsyncDelegateException_obj();
		Void __construct(::String message,Dynamic info);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MissingAsyncDelegateException_obj > __new(::String message,Dynamic info);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MissingAsyncDelegateException_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MissingAsyncDelegateException"); }

};

} // end namespace massive
} // end namespace munit
} // end namespace async

#endif /* INCLUDED_massive_munit_async_MissingAsyncDelegateException */ 
