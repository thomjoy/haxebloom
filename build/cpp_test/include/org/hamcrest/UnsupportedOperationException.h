#ifndef INCLUDED_org_hamcrest_UnsupportedOperationException
#define INCLUDED_org_hamcrest_UnsupportedOperationException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/hamcrest/Exception.h>
HX_DECLARE_CLASS2(org,hamcrest,Exception)
HX_DECLARE_CLASS2(org,hamcrest,UnsupportedOperationException)
namespace org{
namespace hamcrest{


class HXCPP_CLASS_ATTRIBUTES  UnsupportedOperationException_obj : public ::org::hamcrest::Exception_obj{
	public:
		typedef ::org::hamcrest::Exception_obj super;
		typedef UnsupportedOperationException_obj OBJ_;
		UnsupportedOperationException_obj();
		Void __construct(::String __o_message,Dynamic cause,Dynamic info);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UnsupportedOperationException_obj > __new(::String __o_message,Dynamic cause,Dynamic info);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UnsupportedOperationException_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UnsupportedOperationException"); }

};

} // end namespace org
} // end namespace hamcrest

#endif /* INCLUDED_org_hamcrest_UnsupportedOperationException */ 
