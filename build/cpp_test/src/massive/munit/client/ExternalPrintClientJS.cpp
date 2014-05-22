#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_massive_munit_client_ExternalPrintClient
#include <massive/munit/client/ExternalPrintClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_ExternalPrintClientJS
#include <massive/munit/client/ExternalPrintClientJS.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void ExternalPrintClientJS_obj::__construct()
{
HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","new",0x5bc6472c,"massive.munit.client.ExternalPrintClientJS.new","massive/munit/client/PrintClientBase.hx",314,0x1ddc6930)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ExternalPrintClientJS_obj::~ExternalPrintClientJS_obj() { }

Dynamic ExternalPrintClientJS_obj::__CreateEmpty() { return  new ExternalPrintClientJS_obj; }
hx::ObjectPtr< ExternalPrintClientJS_obj > ExternalPrintClientJS_obj::__new()
{  hx::ObjectPtr< ExternalPrintClientJS_obj > result = new ExternalPrintClientJS_obj();
	result->__construct();
	return result;}

Dynamic ExternalPrintClientJS_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExternalPrintClientJS_obj > result = new ExternalPrintClientJS_obj();
	result->__construct();
	return result;}

hx::Object *ExternalPrintClientJS_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::massive::munit::client::ExternalPrintClient_obj)) return operator ::massive::munit::client::ExternalPrintClient_obj *();
	return super::__ToInterface(inType);
}

Void ExternalPrintClientJS_obj::print( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","print",0xbea219f9,"massive.munit.client.ExternalPrintClientJS.print","massive/munit/client/PrintClientBase.hx",383,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(383)
		this->queue(HX_CSTRING("munitPrint"),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,print,(void))

Void ExternalPrintClientJS_obj::printLine( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","printLine",0x4d754e8d,"massive.munit.client.ExternalPrintClientJS.printLine","massive/munit/client/PrintClientBase.hx",388,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(388)
		this->queue(HX_CSTRING("munitPrintLine"),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,printLine,(void))

Void ExternalPrintClientJS_obj::setResult( bool value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","setResult",0xecf575eb,"massive.munit.client.ExternalPrintClientJS.setResult","massive/munit/client/PrintClientBase.hx",393,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(393)
		this->queue(HX_CSTRING("setResult"),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,setResult,(void))

Void ExternalPrintClientJS_obj::setResultBackground( bool value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","setResultBackground",0xa134c1b9,"massive.munit.client.ExternalPrintClientJS.setResultBackground","massive/munit/client/PrintClientBase.hx",398,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(398)
		this->queue(HX_CSTRING("setResultBackground"),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,setResultBackground,(void))

Void ExternalPrintClientJS_obj::trace( Dynamic value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","trace",0x0c365051,"massive.munit.client.ExternalPrintClientJS.trace","massive/munit/client/PrintClientBase.hx",405,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(405)
		this->queue(HX_CSTRING("munitTrace"),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,trace,(void))

Void ExternalPrintClientJS_obj::createTestClass( ::String className){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","createTestClass",0xbffee8b6,"massive.munit.client.ExternalPrintClientJS.createTestClass","massive/munit/client/PrintClientBase.hx",410,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_LINE(410)
		this->queue(HX_CSTRING("createTestClass"),className);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,createTestClass,(void))

Void ExternalPrintClientJS_obj::printToTestClassSummary( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","printToTestClassSummary",0x73fc5134,"massive.munit.client.ExternalPrintClientJS.printToTestClassSummary","massive/munit/client/PrintClientBase.hx",415,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(415)
		this->queue(HX_CSTRING("updateTestSummary"),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,printToTestClassSummary,(void))

Void ExternalPrintClientJS_obj::setTestClassResult( int resultType){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","setTestClassResult",0xa6341d35,"massive.munit.client.ExternalPrintClientJS.setTestClassResult","massive/munit/client/PrintClientBase.hx",420,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resultType,"resultType")
		HX_STACK_LINE(420)
		this->queue(HX_CSTRING("setTestClassResult"),resultType);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,setTestClassResult,(void))

Void ExternalPrintClientJS_obj::addTestPass( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addTestPass",0xfb18c450,"massive.munit.client.ExternalPrintClientJS.addTestPass","massive/munit/client/PrintClientBase.hx",424,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(425)
		if (((value == null()))){
			HX_STACK_LINE(425)
			return null();
		}
		HX_STACK_LINE(426)
		this->queue(HX_CSTRING("addTestPass"),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestPass,(void))

Void ExternalPrintClientJS_obj::addTestFail( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addTestFail",0xf47c995d,"massive.munit.client.ExternalPrintClientJS.addTestFail","massive/munit/client/PrintClientBase.hx",431,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(431)
		this->queue(HX_CSTRING("addTestFail"),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestFail,(void))

Void ExternalPrintClientJS_obj::addTestError( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addTestError",0x70667b69,"massive.munit.client.ExternalPrintClientJS.addTestError","massive/munit/client/PrintClientBase.hx",436,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(436)
		this->queue(HX_CSTRING("addTestError"),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestError,(void))

Void ExternalPrintClientJS_obj::addTestIgnore( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addTestIgnore",0x2aa5b651,"massive.munit.client.ExternalPrintClientJS.addTestIgnore","massive/munit/client/PrintClientBase.hx",441,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(441)
		this->queue(HX_CSTRING("addTestIgnore"),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestIgnore,(void))

Void ExternalPrintClientJS_obj::addTestClassCoverage( ::String className,hx::Null< Float >  __o_percent){
Float percent = __o_percent.Default(0);
	HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addTestClassCoverage",0x9971f6e1,"massive.munit.client.ExternalPrintClientJS.addTestClassCoverage","massive/munit/client/PrintClientBase.hx",446,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(percent,"percent")
{
		HX_STACK_LINE(446)
		this->queue(HX_CSTRING("addTestCoverageClass"),Dynamic( Array_obj<Dynamic>::__new().Add(className).Add(percent)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,addTestClassCoverage,(void))

Void ExternalPrintClientJS_obj::addTestClassCoverageItem( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addTestClassCoverageItem",0xf6666c94,"massive.munit.client.ExternalPrintClientJS.addTestClassCoverageItem","massive/munit/client/PrintClientBase.hx",451,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(451)
		this->queue(HX_CSTRING("addTestCoverageItem"),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestClassCoverageItem,(void))

Void ExternalPrintClientJS_obj::createCoverageReport( hx::Null< Float >  __o_percent){
Float percent = __o_percent.Default(0);
	HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","createCoverageReport",0xaa81008c,"massive.munit.client.ExternalPrintClientJS.createCoverageReport","massive/munit/client/PrintClientBase.hx",458,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(percent,"percent")
{
		HX_STACK_LINE(458)
		this->queue(HX_CSTRING("createCoverageReport"),percent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,createCoverageReport,(void))

Void ExternalPrintClientJS_obj::addMissingCoverageClass( ::String className,hx::Null< Float >  __o_percent){
Float percent = __o_percent.Default(0);
	HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addMissingCoverageClass",0x5a530f77,"massive.munit.client.ExternalPrintClientJS.addMissingCoverageClass","massive/munit/client/PrintClientBase.hx",463,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(percent,"percent")
{
		HX_STACK_LINE(463)
		this->queue(HX_CSTRING("addMissingCoverageClass"),Dynamic( Array_obj<Dynamic>::__new().Add(className).Add(percent)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,addMissingCoverageClass,(void))

Void ExternalPrintClientJS_obj::addCoverageReportSection( ::String name,::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addCoverageReportSection",0x01287e5c,"massive.munit.client.ExternalPrintClientJS.addCoverageReportSection","massive/munit/client/PrintClientBase.hx",468,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(468)
		this->queue(HX_CSTRING("addCoverageReportSection"),Dynamic( Array_obj<Dynamic>::__new().Add(name).Add(value)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,addCoverageReportSection,(void))

Void ExternalPrintClientJS_obj::addCoverageSummary( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addCoverageSummary",0xabd65fb1,"massive.munit.client.ExternalPrintClientJS.addCoverageSummary","massive/munit/client/PrintClientBase.hx",473,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(473)
		this->queue(HX_CSTRING("addCoverageSummary"),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addCoverageSummary,(void))

Void ExternalPrintClientJS_obj::printSummary( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","printSummary",0x170e3a2d,"massive.munit.client.ExternalPrintClientJS.printSummary","massive/munit/client/PrintClientBase.hx",481,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(481)
		this->queue(HX_CSTRING("printSummary"),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,printSummary,(void))

bool ExternalPrintClientJS_obj::queue( ::String method,Dynamic args){
	HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","queue",0x54014f5d,"massive.munit.client.ExternalPrintClientJS.queue","massive/munit/client/PrintClientBase.hx",487,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(488)
	Dynamic a = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(489)
	if ((::Std_obj::is(args,hx::ClassOf< Array<int> >()))){
		HX_STACK_LINE(491)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(491)
		_g = hx::TCastToArray(args);
		HX_STACK_LINE(491)
		Dynamic _g1 = a->__Field(HX_CSTRING("concat"),true)(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(491)
		a = _g1;
	}
	else{
		HX_STACK_LINE(495)
		a->__Field(HX_CSTRING("push"),true)(args);
	}
	HX_STACK_LINE(500)
	return false;
	HX_STACK_LINE(503)
	::String jsCode = this->convertToJavaScript(method,a);		HX_STACK_VAR(jsCode,"jsCode");
	HX_STACK_LINE(510)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,queue,return )

::String ExternalPrintClientJS_obj::convertToJavaScript( ::String method,Dynamic args){
	HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","convertToJavaScript",0x43a9b207,"massive.munit.client.ExternalPrintClientJS.convertToJavaScript","massive/munit/client/PrintClientBase.hx",517,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(518)
	Array< ::String > htmlArgs = Array_obj< ::String >::__new();		HX_STACK_VAR(htmlArgs,"htmlArgs");
	HX_STACK_LINE(520)
	{
		HX_STACK_LINE(520)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(520)
		while((true)){
			HX_STACK_LINE(520)
			if ((!(((_g < args->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(520)
				break;
			}
			HX_STACK_LINE(520)
			Dynamic arg = args->__GetItem(_g);		HX_STACK_VAR(arg,"arg");
			HX_STACK_LINE(520)
			++(_g);
			HX_STACK_LINE(522)
			::String _g1 = ::Std_obj::string(arg);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(522)
			::String html = this->serialiseToHTML(_g1);		HX_STACK_VAR(html,"html");
			HX_STACK_LINE(523)
			htmlArgs->push(html);
		}
	}
	HX_STACK_LINE(525)
	::String jsCode;		HX_STACK_VAR(jsCode,"jsCode");
	HX_STACK_LINE(527)
	if (((bool((htmlArgs == null())) || bool((htmlArgs->length == (int)0))))){
		HX_STACK_LINE(529)
		jsCode = ((HX_CSTRING("addToQueue(\"") + method) + HX_CSTRING("\")"));
	}
	else{
		HX_STACK_LINE(533)
		jsCode = ((HX_CSTRING("addToQueue(\"") + method) + HX_CSTRING("\""));
		HX_STACK_LINE(535)
		{
			HX_STACK_LINE(535)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(535)
			while((true)){
				HX_STACK_LINE(535)
				if ((!(((_g < htmlArgs->length))))){
					HX_STACK_LINE(535)
					break;
				}
				HX_STACK_LINE(535)
				::String arg = htmlArgs->__get(_g);		HX_STACK_VAR(arg,"arg");
				HX_STACK_LINE(535)
				++(_g);
				HX_STACK_LINE(537)
				hx::AddEq(jsCode,((HX_CSTRING(",\"") + arg) + HX_CSTRING("\"")));
			}
		}
		HX_STACK_LINE(539)
		hx::AddEq(jsCode,HX_CSTRING(")"));
	}
	HX_STACK_LINE(541)
	return jsCode;
}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,convertToJavaScript,return )

::String ExternalPrintClientJS_obj::serialiseToHTML( Dynamic value){
	HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","serialiseToHTML",0x11f87059,"massive.munit.client.ExternalPrintClientJS.serialiseToHTML","massive/munit/client/PrintClientBase.hx",545,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(550)
	::String v = ::StringTools_obj::htmlEscape(value,null());		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(551)
	::String _g = v.split(HX_CSTRING("\n"))->join(HX_CSTRING("<br/>"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(551)
	v = _g;
	HX_STACK_LINE(552)
	::String _g1 = v.split(HX_CSTRING(" "))->join(HX_CSTRING("&nbsp;"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(552)
	v = _g1;
	HX_STACK_LINE(553)
	::String _g2 = v.split(HX_CSTRING("\""))->join(HX_CSTRING("\\'"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(553)
	v = _g2;
	HX_STACK_LINE(555)
	return v;
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,serialiseToHTML,return )


ExternalPrintClientJS_obj::ExternalPrintClientJS_obj()
{
}

Dynamic ExternalPrintClientJS_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		if (HX_FIELD_EQ(inName,"trace") ) { return trace_dyn(); }
		if (HX_FIELD_EQ(inName,"queue") ) { return queue_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"printLine") ) { return printLine_dyn(); }
		if (HX_FIELD_EQ(inName,"setResult") ) { return setResult_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTestPass") ) { return addTestPass_dyn(); }
		if (HX_FIELD_EQ(inName,"addTestFail") ) { return addTestFail_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addTestError") ) { return addTestError_dyn(); }
		if (HX_FIELD_EQ(inName,"printSummary") ) { return printSummary_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addTestIgnore") ) { return addTestIgnore_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTestClass") ) { return createTestClass_dyn(); }
		if (HX_FIELD_EQ(inName,"serialiseToHTML") ) { return serialiseToHTML_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setTestClassResult") ) { return setTestClassResult_dyn(); }
		if (HX_FIELD_EQ(inName,"addCoverageSummary") ) { return addCoverageSummary_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setResultBackground") ) { return setResultBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"convertToJavaScript") ) { return convertToJavaScript_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addTestClassCoverage") ) { return addTestClassCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"createCoverageReport") ) { return createCoverageReport_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"printToTestClassSummary") ) { return printToTestClassSummary_dyn(); }
		if (HX_FIELD_EQ(inName,"addMissingCoverageClass") ) { return addMissingCoverageClass_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"addTestClassCoverageItem") ) { return addTestClassCoverageItem_dyn(); }
		if (HX_FIELD_EQ(inName,"addCoverageReportSection") ) { return addCoverageReportSection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ExternalPrintClientJS_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ExternalPrintClientJS_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("print"),
	HX_CSTRING("printLine"),
	HX_CSTRING("setResult"),
	HX_CSTRING("setResultBackground"),
	HX_CSTRING("trace"),
	HX_CSTRING("createTestClass"),
	HX_CSTRING("printToTestClassSummary"),
	HX_CSTRING("setTestClassResult"),
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
	HX_CSTRING("queue"),
	HX_CSTRING("convertToJavaScript"),
	HX_CSTRING("serialiseToHTML"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExternalPrintClientJS_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExternalPrintClientJS_obj::__mClass,"__mClass");
};

#endif

Class ExternalPrintClientJS_obj::__mClass;

void ExternalPrintClientJS_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.client.ExternalPrintClientJS"), hx::TCanCast< ExternalPrintClientJS_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ExternalPrintClientJS_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
} // end namespace client
