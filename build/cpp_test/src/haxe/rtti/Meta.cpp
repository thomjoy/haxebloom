#include <hxcpp.h>

#ifndef INCLUDED_haxe_rtti_Meta
#include <haxe/rtti/Meta.h>
#endif
namespace haxe{
namespace rtti{

Void Meta_obj::__construct()
{
	return null();
}

//Meta_obj::~Meta_obj() { }

Dynamic Meta_obj::__CreateEmpty() { return  new Meta_obj; }
hx::ObjectPtr< Meta_obj > Meta_obj::__new()
{  hx::ObjectPtr< Meta_obj > result = new Meta_obj();
	result->__construct();
	return result;}

Dynamic Meta_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Meta_obj > result = new Meta_obj();
	result->__construct();
	return result;}

Dynamic Meta_obj::getFields( Dynamic t){
	HX_STACK_FRAME("haxe.rtti.Meta","getFields",0x2f4d8575,"haxe.rtti.Meta.getFields","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/Meta.hx",56,0x1b23a031)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(60)
	Dynamic meta = t->__Field(HX_CSTRING("__meta__"),true);		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(62)
	if (((bool((meta == null())) || bool((meta->__Field(HX_CSTRING("fields"),true) == null()))))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/Meta.hx",62,0x1b23a031)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(62)
		return _Function_2_1::Block();
	}
	else{
		HX_STACK_LINE(62)
		return meta->__Field(HX_CSTRING("fields"),true);
	}
	HX_STACK_LINE(62)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Meta_obj,getFields,return )


Meta_obj::Meta_obj()
{
}

Dynamic Meta_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getFields") ) { return getFields_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Meta_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Meta_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getFields"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Meta_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Meta_obj::__mClass,"__mClass");
};

#endif

Class Meta_obj::__mClass;

void Meta_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.rtti.Meta"), hx::TCanCast< Meta_obj> ,sStaticFields,sMemberFields,
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

void Meta_obj::__boot()
{
}

} // end namespace haxe
} // end namespace rtti
