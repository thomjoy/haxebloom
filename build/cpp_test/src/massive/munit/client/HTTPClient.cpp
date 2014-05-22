#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_client_HTTPClient
#include <massive/munit/client/HTTPClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_URLRequest
#include <massive/munit/client/URLRequest.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void HTTPClient_obj::__construct(::massive::munit::ITestResultClient client,::String __o_url,Dynamic __o_queueRequest)
{
HX_STACK_FRAME("massive.munit.client.HTTPClient","new",0x4380ec61,"massive.munit.client.HTTPClient.new","massive/munit/client/HTTPClient.hx",106,0xff13f150)
HX_STACK_THIS(this)
HX_STACK_ARG(client,"client")
HX_STACK_ARG(__o_url,"url")
HX_STACK_ARG(__o_queueRequest,"queueRequest")
::String url = __o_url.Default(HX_CSTRING("http://localhost:2000"));
Dynamic queueRequest = __o_queueRequest.Default(true);
{
	HX_STACK_LINE(107)
	this->id = HX_CSTRING("HTTPClient");
	HX_STACK_LINE(108)
	this->client = client;
	HX_STACK_LINE(109)
	this->url = url;
	HX_STACK_LINE(110)
	this->queueRequest = queueRequest;
}
;
	return null();
}

//HTTPClient_obj::~HTTPClient_obj() { }

Dynamic HTTPClient_obj::__CreateEmpty() { return  new HTTPClient_obj; }
hx::ObjectPtr< HTTPClient_obj > HTTPClient_obj::__new(::massive::munit::ITestResultClient client,::String __o_url,Dynamic __o_queueRequest)
{  hx::ObjectPtr< HTTPClient_obj > result = new HTTPClient_obj();
	result->__construct(client,__o_url,__o_queueRequest);
	return result;}

Dynamic HTTPClient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTTPClient_obj > result = new HTTPClient_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *HTTPClient_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::massive::munit::ITestResultClient_obj)) return operator ::massive::munit::ITestResultClient_obj *();
	if (inType==typeid( ::massive::munit::IAdvancedTestResultClient_obj)) return operator ::massive::munit::IAdvancedTestResultClient_obj *();
	return super::__ToInterface(inType);
}

Dynamic HTTPClient_obj::get_completionHandler( ){
	HX_STACK_FRAME("massive.munit.client.HTTPClient","get_completionHandler",0xe0121b26,"massive.munit.client.HTTPClient.get_completionHandler","massive/munit/client/HTTPClient.hx",86,0xff13f150)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	return this->completionHandler_dyn();
}


HX_DEFINE_DYNAMIC_FUNC0(HTTPClient_obj,get_completionHandler,return )

Dynamic HTTPClient_obj::set_completionHandler( Dynamic value){
	HX_STACK_FRAME("massive.munit.client.HTTPClient","set_completionHandler",0x341ae932,"massive.munit.client.HTTPClient.set_completionHandler","massive/munit/client/HTTPClient.hx",90,0xff13f150)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(90)
	return this->completionHandler = value;
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,set_completionHandler,return )

Void HTTPClient_obj::setCurrentTestClass( ::String className){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","setCurrentTestClass",0x566774d0,"massive.munit.client.HTTPClient.setCurrentTestClass","massive/munit/client/HTTPClient.hx",120,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_LINE(120)
		if ((::Std_obj::is(this->client,hx::ClassOf< ::massive::munit::IAdvancedTestResultClient >()))){
			HX_STACK_LINE(122)
			(hx::TCast< massive::munit::IAdvancedTestResultClient >::cast(this->client))->setCurrentTestClass(className);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,setCurrentTestClass,(void))

Void HTTPClient_obj::addPass( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","addPass",0x2fe0d813,"massive.munit.client.HTTPClient.addPass","massive/munit/client/HTTPClient.hx",133,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(133)
		this->client->addPass(result);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addPass,(void))

Void HTTPClient_obj::addFail( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","addFail",0x2944ad20,"massive.munit.client.HTTPClient.addFail","massive/munit/client/HTTPClient.hx",143,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(143)
		this->client->addFail(result);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addFail,(void))

Void HTTPClient_obj::addError( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","addError",0x6aafb246,"massive.munit.client.HTTPClient.addError","massive/munit/client/HTTPClient.hx",153,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(153)
		this->client->addError(result);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addError,(void))

Void HTTPClient_obj::addIgnore( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","addIgnore",0x306c80d4,"massive.munit.client.HTTPClient.addIgnore","massive/munit/client/HTTPClient.hx",163,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(163)
		this->client->addIgnore(result);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addIgnore,(void))

Dynamic HTTPClient_obj::reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
	HX_STACK_FRAME("massive.munit.client.HTTPClient","reportFinalStatistics",0x120fd026,"massive.munit.client.HTTPClient.reportFinalStatistics","massive/munit/client/HTTPClient.hx",178,0xff13f150)
	HX_STACK_THIS(this)
	HX_STACK_ARG(testCount,"testCount")
	HX_STACK_ARG(passCount,"passCount")
	HX_STACK_ARG(failCount,"failCount")
	HX_STACK_ARG(errorCount,"errorCount")
	HX_STACK_ARG(ignoreCount,"ignoreCount")
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(179)
	Dynamic result = this->client->reportFinalStatistics(testCount,passCount,failCount,errorCount,ignoreCount,time);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(180)
	this->sendResult(result);
	HX_STACK_LINE(181)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC6(HTTPClient_obj,reportFinalStatistics,return )

Void HTTPClient_obj::sendResult( Dynamic result){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","sendResult",0x93fb6664,"massive.munit.client.HTTPClient.sendResult","massive/munit/client/HTTPClient.hx",185,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(186)
		::massive::munit::client::URLRequest _g = ::massive::munit::client::URLRequest_obj::__new(this->url);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		this->request = _g;
		HX_STACK_LINE(187)
		this->request->setHeader(HX_CSTRING("munit-clientId"),this->client->__Field(HX_CSTRING("id"),true));
		HX_STACK_LINE(188)
		::String _g1 = this->platform();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(188)
		this->request->setHeader(HX_CSTRING("munit-platformId"),_g1);
		HX_STACK_LINE(189)
		this->request->onData = this->onData_dyn();
		HX_STACK_LINE(190)
		this->request->onError = this->onError_dyn();
		HX_STACK_LINE(191)
		this->request->data = result;
		HX_STACK_LINE(193)
		if ((this->queueRequest)){
			HX_STACK_LINE(195)
			::massive::munit::client::HTTPClient_obj::queue->unshift(this->request);
			HX_STACK_LINE(196)
			::massive::munit::client::HTTPClient_obj::dispatchNextRequest();
		}
		else{
			HX_STACK_LINE(200)
			this->request->send();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,sendResult,(void))

::String HTTPClient_obj::platform( ){
	HX_STACK_FRAME("massive.munit.client.HTTPClient","platform",0xe6227312,"massive.munit.client.HTTPClient.platform","massive/munit/client/HTTPClient.hx",205,0xff13f150)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	return HX_CSTRING("cpp");
	HX_STACK_LINE(213)
	return HX_CSTRING("unknown");
}


HX_DEFINE_DYNAMIC_FUNC0(HTTPClient_obj,platform,return )

Void HTTPClient_obj::onData( ::String data){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","onData",0x9e82f988,"massive.munit.client.HTTPClient.onData","massive/munit/client/HTTPClient.hx",217,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(218)
		if ((this->queueRequest)){
			HX_STACK_LINE(220)
			::massive::munit::client::HTTPClient_obj::responsePending = false;
			HX_STACK_LINE(221)
			::massive::munit::client::HTTPClient_obj::dispatchNextRequest();
		}
		HX_STACK_LINE(223)
		Dynamic _g = this->get_completionHandler();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(223)
		if (((_g != null()))){
			HX_STACK_LINE(224)
			this->get_completionHandler()(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,onData,(void))

Void HTTPClient_obj::onError( ::String msg){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","onError",0xb2b91aaa,"massive.munit.client.HTTPClient.onError","massive/munit/client/HTTPClient.hx",228,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(229)
		if ((this->queueRequest)){
			HX_STACK_LINE(231)
			::massive::munit::client::HTTPClient_obj::responsePending = false;
			HX_STACK_LINE(232)
			::massive::munit::client::HTTPClient_obj::dispatchNextRequest();
		}
		HX_STACK_LINE(234)
		Dynamic _g = this->get_completionHandler();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(234)
		if (((_g != null()))){
			HX_STACK_LINE(235)
			this->get_completionHandler()(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,onError,(void))

Array< ::Dynamic > HTTPClient_obj::queue;

bool HTTPClient_obj::responsePending;

Void HTTPClient_obj::dispatchNextRequest( ){
{
		HX_STACK_FRAME("massive.munit.client.HTTPClient","dispatchNextRequest",0x2fe27403,"massive.munit.client.HTTPClient.dispatchNextRequest","massive/munit/client/HTTPClient.hx",239,0xff13f150)
		HX_STACK_LINE(240)
		if (((bool(::massive::munit::client::HTTPClient_obj::responsePending) || bool((::massive::munit::client::HTTPClient_obj::queue->length == (int)0))))){
			HX_STACK_LINE(241)
			return null();
		}
		HX_STACK_LINE(243)
		::massive::munit::client::HTTPClient_obj::responsePending = true;
		HX_STACK_LINE(245)
		::massive::munit::client::URLRequest request = ::massive::munit::client::HTTPClient_obj::queue->pop().StaticCast< ::massive::munit::client::URLRequest >();		HX_STACK_VAR(request,"request");
		HX_STACK_LINE(246)
		request->send();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HTTPClient_obj,dispatchNextRequest,(void))


HTTPClient_obj::HTTPClient_obj()
{
}

void HTTPClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPClient);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(completionHandler,"completionHandler");
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(request,"request");
	HX_MARK_MEMBER_NAME(queueRequest,"queueRequest");
	HX_MARK_END_CLASS();
}

void HTTPClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(completionHandler,"completionHandler");
	HX_VISIT_MEMBER_NAME(client,"client");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(request,"request");
	HX_VISIT_MEMBER_NAME(queueRequest,"queueRequest");
}

Dynamic HTTPClient_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { return queue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { return client; }
		if (HX_FIELD_EQ(inName,"onData") ) { return onData_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return request; }
		if (HX_FIELD_EQ(inName,"addPass") ) { return addPass_dyn(); }
		if (HX_FIELD_EQ(inName,"addFail") ) { return addFail_dyn(); }
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addError") ) { return addError_dyn(); }
		if (HX_FIELD_EQ(inName,"platform") ) { return platform_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addIgnore") ) { return addIgnore_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sendResult") ) { return sendResult_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"queueRequest") ) { return queueRequest; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responsePending") ) { return responsePending; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { return inCallProp ? get_completionHandler() : completionHandler; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"dispatchNextRequest") ) { return dispatchNextRequest_dyn(); }
		if (HX_FIELD_EQ(inName,"setCurrentTestClass") ) { return setCurrentTestClass_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_completionHandler") ) { return get_completionHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_completionHandler") ) { return set_completionHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"reportFinalStatistics") ) { return reportFinalStatistics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HTTPClient_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { queue=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast< ::massive::munit::ITestResultClient >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { request=inValue.Cast< ::massive::munit::client::URLRequest >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"queueRequest") ) { queueRequest=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responsePending") ) { responsePending=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { if (inCallProp) return set_completionHandler(inValue);completionHandler=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HTTPClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("client"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("request"));
	outFields->push(HX_CSTRING("queueRequest"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("queue"),
	HX_CSTRING("responsePending"),
	HX_CSTRING("dispatchNextRequest"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(HTTPClient_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(HTTPClient_obj,completionHandler),HX_CSTRING("completionHandler")},
	{hx::fsObject /*::massive::munit::ITestResultClient*/ ,(int)offsetof(HTTPClient_obj,client),HX_CSTRING("client")},
	{hx::fsString,(int)offsetof(HTTPClient_obj,url),HX_CSTRING("url")},
	{hx::fsObject /*::massive::munit::client::URLRequest*/ ,(int)offsetof(HTTPClient_obj,request),HX_CSTRING("request")},
	{hx::fsBool,(int)offsetof(HTTPClient_obj,queueRequest),HX_CSTRING("queueRequest")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("completionHandler"),
	HX_CSTRING("get_completionHandler"),
	HX_CSTRING("set_completionHandler"),
	HX_CSTRING("client"),
	HX_CSTRING("url"),
	HX_CSTRING("request"),
	HX_CSTRING("queueRequest"),
	HX_CSTRING("setCurrentTestClass"),
	HX_CSTRING("addPass"),
	HX_CSTRING("addFail"),
	HX_CSTRING("addError"),
	HX_CSTRING("addIgnore"),
	HX_CSTRING("reportFinalStatistics"),
	HX_CSTRING("sendResult"),
	HX_CSTRING("platform"),
	HX_CSTRING("onData"),
	HX_CSTRING("onError"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HTTPClient_obj::queue,"queue");
	HX_MARK_MEMBER_NAME(HTTPClient_obj::responsePending,"responsePending");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HTTPClient_obj::queue,"queue");
	HX_VISIT_MEMBER_NAME(HTTPClient_obj::responsePending,"responsePending");
};

#endif

Class HTTPClient_obj::__mClass;

void HTTPClient_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.client.HTTPClient"), hx::TCanCast< HTTPClient_obj> ,sStaticFields,sMemberFields,
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

void HTTPClient_obj::__boot()
{
	queue= Array_obj< ::Dynamic >::__new();
	responsePending= false;
}

} // end namespace massive
} // end namespace munit
} // end namespace client
