#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_Http
#include <haxe/Http.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_massive_munit_client_URLRequest
#include <massive/munit/client/URLRequest.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void URLRequest_obj::__construct(::String url)
{
HX_STACK_FRAME("massive.munit.client.URLRequest","new",0xe54fb6ae,"massive.munit.client.URLRequest.new","massive/munit/client/HTTPClient.hx",271,0xff13f150)
HX_STACK_THIS(this)
HX_STACK_ARG(url,"url")
{
	HX_STACK_LINE(272)
	this->url = url;
	HX_STACK_LINE(273)
	this->createClient(url);
	HX_STACK_LINE(274)
	this->setHeader(HX_CSTRING("Content-Type"),HX_CSTRING("text/plain"));
}
;
	return null();
}

//URLRequest_obj::~URLRequest_obj() { }

Dynamic URLRequest_obj::__CreateEmpty() { return  new URLRequest_obj; }
hx::ObjectPtr< URLRequest_obj > URLRequest_obj::__new(::String url)
{  hx::ObjectPtr< URLRequest_obj > result = new URLRequest_obj();
	result->__construct(url);
	return result;}

Dynamic URLRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLRequest_obj > result = new URLRequest_obj();
	result->__construct(inArgs[0]);
	return result;}

Void URLRequest_obj::createClient( ::String url){
{
		HX_STACK_FRAME("massive.munit.client.URLRequest","createClient",0xceacea59,"massive.munit.client.URLRequest.createClient","massive/munit/client/HTTPClient.hx",278,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(url,"url")
		HX_STACK_LINE(280)
		::haxe::Http _g = ::haxe::Http_obj::__new(url);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(280)
		this->client = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLRequest_obj,createClient,(void))

Void URLRequest_obj::setHeader( ::String name,::String value){
{
		HX_STACK_FRAME("massive.munit.client.URLRequest","setHeader",0xa41e139d,"massive.munit.client.URLRequest.setHeader","massive/munit/client/HTTPClient.hx",291,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(291)
		this->client->setHeader(name,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLRequest_obj,setHeader,(void))

Void URLRequest_obj::send( ){
{
		HX_STACK_FRAME("massive.munit.client.URLRequest","send",0xc3be2b3a,"massive.munit.client.URLRequest.send","massive/munit/client/HTTPClient.hx",300,0xff13f150)
		HX_STACK_THIS(this)
		HX_STACK_LINE(302)
		this->client->onData = this->onData_dyn();
		HX_STACK_LINE(303)
		this->client->onError = this->onError_dyn();
		HX_STACK_LINE(307)
		this->client->setParameter(HX_CSTRING("data"),this->data);
		HX_STACK_LINE(309)
		this->client->request(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLRequest_obj,send,(void))


URLRequest_obj::URLRequest_obj()
{
}

void URLRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequest);
	HX_MARK_MEMBER_NAME(onData,"onData");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(headers,"headers");
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_END_CLASS();
}

void URLRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onData,"onData");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(headers,"headers");
	HX_VISIT_MEMBER_NAME(client,"client");
}

Dynamic URLRequest_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"send") ) { return send_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onData") ) { return onData; }
		if (HX_FIELD_EQ(inName,"client") ) { return client; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return onError; }
		if (HX_FIELD_EQ(inName,"headers") ) { return headers; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setHeader") ) { return setHeader_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createClient") ) { return createClient_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLRequest_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onData") ) { onData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast< ::haxe::Http >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"headers") ) { headers=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("headers"));
	outFields->push(HX_CSTRING("client"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLRequest_obj,onData),HX_CSTRING("onData")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLRequest_obj,onError),HX_CSTRING("onError")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLRequest_obj,data),HX_CSTRING("data")},
	{hx::fsString,(int)offsetof(URLRequest_obj,url),HX_CSTRING("url")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(URLRequest_obj,headers),HX_CSTRING("headers")},
	{hx::fsObject /*::haxe::Http*/ ,(int)offsetof(URLRequest_obj,client),HX_CSTRING("client")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("onData"),
	HX_CSTRING("onError"),
	HX_CSTRING("data"),
	HX_CSTRING("url"),
	HX_CSTRING("headers"),
	HX_CSTRING("client"),
	HX_CSTRING("createClient"),
	HX_CSTRING("setHeader"),
	HX_CSTRING("send"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

#endif

Class URLRequest_obj::__mClass;

void URLRequest_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.client.URLRequest"), hx::TCanCast< URLRequest_obj> ,sStaticFields,sMemberFields,
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

void URLRequest_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
} // end namespace client
