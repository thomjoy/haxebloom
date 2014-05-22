#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_client_ExternalPrintClient
#include <massive/munit/client/ExternalPrintClient.h>
#endif
namespace massive{
namespace munit{
namespace client{

HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClient_obj,queue,return )

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,setResult,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,print,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,printLine,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,setResultBackground,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,createTestClass,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,printToTestClassSummary,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,setTestClassResult,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,trace,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,addTestPass,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,addTestFail,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,addTestError,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,addTestIgnore,)

HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClient_obj,addTestClassCoverage,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,addTestClassCoverageItem,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,createCoverageReport,)

HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClient_obj,addMissingCoverageClass,)

HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClient_obj,addCoverageReportSection,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,addCoverageSummary,)

HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClient_obj,printSummary,)


static ::String sMemberFields[] = {
	HX_CSTRING("queue"),
	HX_CSTRING("setResult"),
	HX_CSTRING("print"),
	HX_CSTRING("printLine"),
	HX_CSTRING("setResultBackground"),
	HX_CSTRING("createTestClass"),
	HX_CSTRING("printToTestClassSummary"),
	HX_CSTRING("setTestClassResult"),
	HX_CSTRING("trace"),
	HX_CSTRING("addTestPass"),
	HX_CSTRING("addTestFail"),
	HX_CSTRING("addTestError"),
	HX_CSTRING("addTestIgnore"),
	HX_CSTRING("addTestClassCoverage"),
	HX_CSTRING("addTestClassCoverageItem"),
	HX_CSTRING("createCoverageReport"),
	HX_CSTRING("addMissingCoverageClass"),
	HX_CSTRING("addCoverageReportSection"),
	HX_CSTRING("addCoverageSummary"),
	HX_CSTRING("printSummary"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExternalPrintClient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExternalPrintClient_obj::__mClass,"__mClass");
};

#endif

Class ExternalPrintClient_obj::__mClass;

void ExternalPrintClient_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.client.ExternalPrintClient"), hx::TCanCast< ExternalPrintClient_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ExternalPrintClient_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
} // end namespace client
