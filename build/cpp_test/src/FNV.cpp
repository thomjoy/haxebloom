#include <hxcpp.h>

#ifndef INCLUDED_FNV
#include <FNV.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif

Void FNV_obj::__construct()
{
	return null();
}

//FNV_obj::~FNV_obj() { }

Dynamic FNV_obj::__CreateEmpty() { return  new FNV_obj; }
hx::ObjectPtr< FNV_obj > FNV_obj::__new()
{  hx::ObjectPtr< FNV_obj > result = new FNV_obj();
	result->__construct();
	return result;}

Dynamic FNV_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FNV_obj > result = new FNV_obj();
	result->__construct();
	return result;}

int FNV_obj::fnv_1a( ::String s){
	HX_STACK_FRAME("FNV","fnv_1a",0xf67a7e21,"FNV.fnv_1a","FNV.hx",7,0x1f381d70)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(8)
	int n = s.length;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(9)
	Dynamic a = 2166136261;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(10)
	Dynamic c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(11)
	Dynamic d;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(12)
	int i = (int)-1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(14)
	while((true)){
		HX_STACK_LINE(14)
		int _g = ++(i);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(14)
		if ((!(((_g < n))))){
			HX_STACK_LINE(14)
			break;
		}
		HX_STACK_LINE(16)
		Dynamic _g1 = s.charCodeAt(i);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(16)
		c = _g1;
		HX_STACK_LINE(18)
		Dynamic _g2 = d = (int(c) & int((int)-16777216));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(18)
		if (((_g2 != (int)0))){
			HX_STACK_LINE(20)
			int _g3 = ::Std_obj::_int(a);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(20)
			int _g4 = ::Std_obj::_int(d);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(20)
			int _g5 = (int(_g4) >> int((int)24));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(20)
			int _g6 = (int(_g3) ^ int(_g5));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(20)
			a = _g6;
			HX_STACK_LINE(21)
			hx::AddEq(a,((((((int(a) << int((int)1))) + ((int(a) << int((int)4)))) + ((int(a) << int((int)7)))) + ((int(a) << int((int)8)))) + ((int(a) << int((int)24)))));
		}
		HX_STACK_LINE(24)
		Dynamic _g7 = d = (int(c) & int((int)16711680));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(24)
		if (((_g7 != (int)0))){
			HX_STACK_LINE(26)
			int _g8 = ::Std_obj::_int(a);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(26)
			int _g9 = ::Std_obj::_int(d);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(26)
			int _g10 = (int(_g9) >> int((int)16));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(26)
			int _g11 = (int(_g8) ^ int(_g10));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(26)
			a = _g11;
			HX_STACK_LINE(27)
			hx::AddEq(a,((((((int(a) << int((int)1))) + ((int(a) << int((int)4)))) + ((int(a) << int((int)7)))) + ((int(a) << int((int)8)))) + ((int(a) << int((int)24)))));
		}
		HX_STACK_LINE(30)
		Dynamic _g12 = d = (int(c) & int((int)65280));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(30)
		if (((_g12 != (int)0))){
			HX_STACK_LINE(32)
			int _g13 = ::Std_obj::_int(a);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(32)
			int _g14 = ::Std_obj::_int(d);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(32)
			int _g15 = (int(_g14) >> int((int)8));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(32)
			int _g16 = (int(_g13) ^ int(_g15));		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(32)
			a = _g16;
			HX_STACK_LINE(33)
			hx::AddEq(a,((((((int(a) << int((int)1))) + ((int(a) << int((int)4)))) + ((int(a) << int((int)7)))) + ((int(a) << int((int)8)))) + ((int(a) << int((int)24)))));
		}
		HX_STACK_LINE(36)
		int _g17 = ::Std_obj::_int(a);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(36)
		int _g18 = ::Std_obj::_int((int(c) & int((int)255)));		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(36)
		int _g19 = (int(_g17) ^ int(_g18));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(36)
		a = _g19;
		HX_STACK_LINE(37)
		hx::AddEq(a,((((((int(a) << int((int)1))) + ((int(a) << int((int)4)))) + ((int(a) << int((int)7)))) + ((int(a) << int((int)8)))) + ((int(a) << int((int)24)))));
	}
	HX_STACK_LINE(41)
	hx::AddEq(a,(int(a) << int((int)13)));
	HX_STACK_LINE(42)
	int _g20 = ::Std_obj::_int(a);		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(42)
	int _g21 = ::Std_obj::_int(a);		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(42)
	int _g22 = (int(_g21) >> int((int)7));		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(42)
	int _g23 = (int(_g20) ^ int(_g22));		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(42)
	a = _g23;
	HX_STACK_LINE(43)
	hx::AddEq(a,(int(a) << int((int)3)));
	HX_STACK_LINE(44)
	int _g24 = ::Std_obj::_int(a);		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(44)
	int _g25 = ::Std_obj::_int(a);		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(44)
	int _g26 = (int(_g25) >> int((int)17));		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(44)
	int _g27 = (int(_g24) ^ int(_g26));		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(44)
	a = _g27;
	HX_STACK_LINE(45)
	hx::AddEq(a,(int(a) << int((int)5)));
	HX_STACK_LINE(46)
	return (int(a) & int((int)-1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FNV_obj,fnv_1a,return )

int FNV_obj::fnv_1a_b( int a){
	HX_STACK_FRAME("FNV","fnv_1a_b",0x68af5b84,"FNV.fnv_1a_b","FNV.hx",50,0x1f381d70)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(51)
	hx::AddEq(a,((((((int(a) << int((int)1))) + ((int(a) << int((int)4)))) + ((int(a) << int((int)7)))) + ((int(a) << int((int)8)))) + ((int(a) << int((int)24)))));
	HX_STACK_LINE(52)
	hx::AddEq(a,(int(a) << int((int)13)));
	HX_STACK_LINE(53)
	int _g = ::Std_obj::_int(a);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	int _g1 = ::Std_obj::_int(a);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(53)
	int _g2 = (int(_g1) >> int((int)7));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(53)
	int _g3 = (int(_g) ^ int(_g2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(53)
	a = _g3;
	HX_STACK_LINE(54)
	hx::AddEq(a,(int(a) << int((int)3)));
	HX_STACK_LINE(55)
	int _g4 = ::Std_obj::_int(a);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(55)
	int _g5 = ::Std_obj::_int(a);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(55)
	int _g6 = (int(_g5) >> int((int)17));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(55)
	int _g7 = (int(_g4) ^ int(_g6));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(55)
	a = _g7;
	HX_STACK_LINE(56)
	hx::AddEq(a,(int(a) << int((int)5)));
	HX_STACK_LINE(57)
	return (int(a) & int((int)-1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FNV_obj,fnv_1a_b,return )


FNV_obj::FNV_obj()
{
}

Dynamic FNV_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fnv_1a") ) { return fnv_1a_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fnv_1a_b") ) { return fnv_1a_b_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FNV_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FNV_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fnv_1a"),
	HX_CSTRING("fnv_1a_b"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FNV_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FNV_obj::__mClass,"__mClass");
};

#endif

Class FNV_obj::__mClass;

void FNV_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("FNV"), hx::TCanCast< FNV_obj> ,sStaticFields,sMemberFields,
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

void FNV_obj::__boot()
{
}

