#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

Void StringTools_obj::__construct()
{
	return null();
}

//StringTools_obj::~StringTools_obj() { }

Dynamic StringTools_obj::__CreateEmpty() { return  new StringTools_obj; }
hx::ObjectPtr< StringTools_obj > StringTools_obj::__new()
{  hx::ObjectPtr< StringTools_obj > result = new StringTools_obj();
	result->__construct();
	return result;}

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringTools_obj > result = new StringTools_obj();
	result->__construct();
	return result;}

::String StringTools_obj::urlEncode( ::String s){
	HX_STACK_FRAME("StringTools","urlEncode",0x06afdce1,"StringTools.urlEncode","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",46,0xb9dbeb2d)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(46)
	return s.__URLEncode();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlEncode,return )

::String StringTools_obj::htmlEscape( ::String s,Dynamic quotes){
	HX_STACK_FRAME("StringTools","htmlEscape",0x0e1a5dd0,"StringTools.htmlEscape","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",97,0xb9dbeb2d)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(quotes,"quotes")
	HX_STACK_LINE(98)
	::String _g = s.split(HX_CSTRING("&"))->join(HX_CSTRING("&amp;")).split(HX_CSTRING("<"))->join(HX_CSTRING("&lt;")).split(HX_CSTRING(">"))->join(HX_CSTRING("&gt;"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(98)
	s = _g;
	HX_STACK_LINE(99)
	if ((quotes)){
		HX_STACK_LINE(99)
		return s.split(HX_CSTRING("\""))->join(HX_CSTRING("&quot;")).split(HX_CSTRING("'"))->join(HX_CSTRING("&#039;"));
	}
	else{
		HX_STACK_LINE(99)
		return s;
	}
	HX_STACK_LINE(99)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,htmlEscape,return )

bool StringTools_obj::isSpace( ::String s,int pos){
	HX_STACK_FRAME("StringTools","isSpace",0xe0290778,"StringTools.isSpace","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",165,0xb9dbeb2d)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(166)
	Dynamic c = s.charCodeAt(pos);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(167)
	return (bool((bool((c > (int)8)) && bool((c < (int)14)))) || bool((c == (int)32)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,isSpace,return )

::String StringTools_obj::ltrim( ::String s){
	HX_STACK_FRAME("StringTools","ltrim",0x24d2234a,"StringTools.ltrim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",179,0xb9dbeb2d)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(183)
	int l = s.length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(184)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(185)
	while((true)){
		HX_STACK_LINE(185)
		if ((!(((  (((r < l))) ? bool(::StringTools_obj::isSpace(s,r)) : bool(false) ))))){
			HX_STACK_LINE(185)
			break;
		}
		HX_STACK_LINE(186)
		(r)++;
	}
	HX_STACK_LINE(188)
	if (((r > (int)0))){
		HX_STACK_LINE(189)
		return s.substr(r,(l - r));
	}
	else{
		HX_STACK_LINE(191)
		return s;
	}
	HX_STACK_LINE(188)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,ltrim,return )

::String StringTools_obj::rtrim( ::String s){
	HX_STACK_FRAME("StringTools","rtrim",0x99399e50,"StringTools.rtrim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",204,0xb9dbeb2d)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(208)
	int l = s.length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(209)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(210)
	while((true)){
		HX_STACK_LINE(210)
		if ((!(((  (((r < l))) ? bool(::StringTools_obj::isSpace(s,((l - r) - (int)1))) : bool(false) ))))){
			HX_STACK_LINE(210)
			break;
		}
		HX_STACK_LINE(211)
		(r)++;
	}
	HX_STACK_LINE(213)
	if (((r > (int)0))){
		HX_STACK_LINE(214)
		return s.substr((int)0,(l - r));
	}
	else{
		HX_STACK_LINE(216)
		return s;
	}
	HX_STACK_LINE(213)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,rtrim,return )

::String StringTools_obj::lpad( ::String s,::String c,int l){
	HX_STACK_FRAME("StringTools","lpad",0x23bd8feb,"StringTools.lpad","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",248,0xb9dbeb2d)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(249)
	if (((c.length <= (int)0))){
		HX_STACK_LINE(250)
		return s;
	}
	HX_STACK_LINE(252)
	while((true)){
		HX_STACK_LINE(252)
		if ((!(((s.length < l))))){
			HX_STACK_LINE(252)
			break;
		}
		HX_STACK_LINE(253)
		s = (c + s);
	}
	HX_STACK_LINE(255)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,lpad,return )


StringTools_obj::StringTools_obj()
{
}

Dynamic StringTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lpad") ) { return lpad_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ltrim") ) { return ltrim_dyn(); }
		if (HX_FIELD_EQ(inName,"rtrim") ) { return rtrim_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { return isSpace_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { return urlEncode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"htmlEscape") ) { return htmlEscape_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StringTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StringTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("urlEncode"),
	HX_CSTRING("htmlEscape"),
	HX_CSTRING("isSpace"),
	HX_CSTRING("ltrim"),
	HX_CSTRING("rtrim"),
	HX_CSTRING("lpad"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#endif

Class StringTools_obj::__mClass;

void StringTools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("StringTools"), hx::TCanCast< StringTools_obj> ,sStaticFields,sMemberFields,
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

void StringTools_obj::__boot()
{
}

