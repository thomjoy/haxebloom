#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif

Void Type_obj::__construct()
{
	return null();
}

//Type_obj::~Type_obj() { }

Dynamic Type_obj::__CreateEmpty() { return  new Type_obj; }
hx::ObjectPtr< Type_obj > Type_obj::__new()
{  hx::ObjectPtr< Type_obj > result = new Type_obj();
	result->__construct();
	return result;}

Dynamic Type_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Type_obj > result = new Type_obj();
	result->__construct();
	return result;}

::Class Type_obj::getClass( Dynamic o){
	HX_STACK_FRAME("Type","getClass",0xc4e49bd6,"Type.getClass","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",35,0x00143afe)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(36)
	if (((  ((!(((o == null()))))) ? bool(!(::Reflect_obj::isObject(o))) : bool(true) ))){
		HX_STACK_LINE(36)
		return null();
	}
	HX_STACK_LINE(37)
	Dynamic c = o->__GetClass();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::String _g = c->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		::String _switch_1 = (_g);
		if (  ( _switch_1==HX_CSTRING("__Anon"))){
			HX_STACK_LINE(40)
			return null();
		}
		else if (  ( _switch_1==HX_CSTRING("Class"))){
			HX_STACK_LINE(41)
			return null();
		}
	}
	HX_STACK_LINE(43)
	return c;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClass,return )

::Class Type_obj::getSuperClass( ::Class c){
	HX_STACK_FRAME("Type","getSuperClass",0xd9ffa85f,"Type.getSuperClass","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",53,0x00143afe)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(53)
	return c->GetSuper();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getSuperClass,return )

::String Type_obj::getClassName( ::Class c){
	HX_STACK_FRAME("Type","getClassName",0x8e66dd41,"Type.getClassName","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",56,0x00143afe)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(57)
	if (((c == null()))){
		HX_STACK_LINE(58)
		return null();
	}
	HX_STACK_LINE(59)
	return c->mName;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClassName,return )

Dynamic Type_obj::createInstance( ::Class cl,Dynamic args){
	HX_STACK_FRAME("Type","createInstance",0xab84f9c5,"Type.createInstance","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",80,0x00143afe)
	HX_STACK_ARG(cl,"cl")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(81)
	if (((cl != null()))){
		HX_STACK_LINE(82)
		return cl->ConstructArgs(args);
	}
	HX_STACK_LINE(83)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,createInstance,return )

Dynamic Type_obj::createEmptyInstance( ::Class cl){
	HX_STACK_FRAME("Type","createEmptyInstance",0xcb752312,"Type.createEmptyInstance","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",87,0x00143afe)
	HX_STACK_ARG(cl,"cl")
	HX_STACK_LINE(87)
	return cl->ConstructEmpty();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,createEmptyInstance,return )

::ValueType Type_obj::_typeof( Dynamic v){
	HX_STACK_FRAME("Type","typeof",0xd6c51d65,"Type.typeof","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",112,0x00143afe)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(113)
	if (((v == null()))){
		HX_STACK_LINE(113)
		return ::ValueType_obj::TNull;
	}
	HX_STACK_LINE(114)
	int t = v->__GetType();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(115)
	switch( (int)(t)){
		case (int)2: {
			HX_STACK_LINE(117)
			return ::ValueType_obj::TBool;
		}
		;break;
		case (int)255: {
			HX_STACK_LINE(118)
			return ::ValueType_obj::TInt;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(119)
			return ::ValueType_obj::TFloat;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(120)
			return ::ValueType_obj::TFunction;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(121)
			return ::ValueType_obj::TObject;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(122)
			Dynamic _g = v->__GetClass();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(122)
			return ::ValueType_obj::TEnum(_g);
		}
		;break;
		default: {
			HX_STACK_LINE(124)
			Dynamic _g1 = v->__GetClass();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(124)
			return ::ValueType_obj::TClass(_g1);
		}
	}
	HX_STACK_LINE(115)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,_typeof,return )

bool Type_obj::enumEq( Dynamic a,Dynamic b){
	HX_STACK_FRAME("Type","enumEq",0x855650e1,"Type.enumEq","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",129,0x00143afe)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(129)
	return (a == b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,enumEq,return )


Type_obj::Type_obj()
{
}

Dynamic Type_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"typeof") ) { return _typeof_dyn(); }
		if (HX_FIELD_EQ(inName,"enumEq") ) { return enumEq_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getClass") ) { return getClass_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { return getClassName_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getSuperClass") ) { return getSuperClass_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createInstance") ) { return createInstance_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createEmptyInstance") ) { return createEmptyInstance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Type_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Type_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getClass"),
	HX_CSTRING("getSuperClass"),
	HX_CSTRING("getClassName"),
	HX_CSTRING("createInstance"),
	HX_CSTRING("createEmptyInstance"),
	HX_CSTRING("typeof"),
	HX_CSTRING("enumEq"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#endif

Class Type_obj::__mClass;

void Type_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Type"), hx::TCanCast< Type_obj> ,sStaticFields,sMemberFields,
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

void Type_obj::__boot()
{
}
