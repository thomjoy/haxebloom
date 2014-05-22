#ifndef INCLUDED_massive_munit_TestResultType
#define INCLUDED_massive_munit_TestResultType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(massive,munit,TestResultType)
namespace massive{
namespace munit{


class TestResultType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TestResultType_obj OBJ_;

	public:
		TestResultType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("massive.munit.TestResultType"); }
		::String __ToString() const { return HX_CSTRING("TestResultType.") + tag; }

		static ::massive::munit::TestResultType ERROR;
		static inline ::massive::munit::TestResultType ERROR_dyn() { return ERROR; }
		static ::massive::munit::TestResultType FAIL;
		static inline ::massive::munit::TestResultType FAIL_dyn() { return FAIL; }
		static ::massive::munit::TestResultType IGNORE;
		static inline ::massive::munit::TestResultType IGNORE_dyn() { return IGNORE; }
		static ::massive::munit::TestResultType PASS;
		static inline ::massive::munit::TestResultType PASS_dyn() { return PASS; }
		static ::massive::munit::TestResultType UNKNOWN;
		static inline ::massive::munit::TestResultType UNKNOWN_dyn() { return UNKNOWN; }
};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_TestResultType */ 
