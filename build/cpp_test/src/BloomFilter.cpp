#include <hxcpp.h>

#ifndef INCLUDED_BloomFilter
#include <BloomFilter.h>
#endif
#ifndef INCLUDED_FNV
#include <FNV.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void BloomFilter_obj::__construct(Dynamic m,int k)
{
HX_STACK_FRAME("BloomFilter","new",0x6000fa2d,"BloomFilter.new","BloomFilter.hx",5,0x632829e3)
HX_STACK_THIS(this)
HX_STACK_ARG(m,"m")
HX_STACK_ARG(k,"k")
{
	HX_STACK_LINE(10)
	this->buckets = Array_obj< int >::__new();
	HX_STACK_LINE(9)
	this->_locations = Array_obj< int >::__new();
	HX_STACK_LINE(14)
	int i = (int)-1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(16)
	this->k = k;
	HX_STACK_LINE(17)
	this->m = m;
	HX_STACK_LINE(19)
	if ((::Std_obj::is(m,hx::ClassOf< Array<int> >()))){
		HX_STACK_LINE(21)
		int n = ::Std_obj::_int((m->__Field(HX_CSTRING("length"),true) * (int)32));		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(22)
		while((true)){
			HX_STACK_LINE(22)
			int _g = ++(i);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(22)
			if ((!(((_g < n))))){
				HX_STACK_LINE(22)
				break;
			}
			HX_STACK_LINE(24)
			this->buckets[i] = m->__GetItem(i);
		}
	}
	HX_STACK_LINE(28)
	if ((::Std_obj::is(m,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(30)
		int n = ::Math_obj::ceil((Float(m) / Float((int)32)));		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			int _g1 = ++(i);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(31)
			if ((!(((_g1 < n))))){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(33)
			this->buckets[i] = (int)0;
		}
	}
}
;
	return null();
}

//BloomFilter_obj::~BloomFilter_obj() { }

Dynamic BloomFilter_obj::__CreateEmpty() { return  new BloomFilter_obj; }
hx::ObjectPtr< BloomFilter_obj > BloomFilter_obj::__new(Dynamic m,int k)
{  hx::ObjectPtr< BloomFilter_obj > result = new BloomFilter_obj();
	result->__construct(m,k);
	return result;}

Dynamic BloomFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BloomFilter_obj > result = new BloomFilter_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Array< int > BloomFilter_obj::locations( ::String v){
	HX_STACK_FRAME("BloomFilter","locations",0xd47c022b,"BloomFilter.locations","BloomFilter.hx",39,0x632829e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(40)
	int k = this->k;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(41)
	Float m = this->m;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(42)
	Array< int > r = this->_locations;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(43)
	int a = ::FNV_obj::fnv_1a(v);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(44)
	int b = ::FNV_obj::fnv_1a_b(a);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(45)
	int i = (int)-1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(46)
	int _g = ::Std_obj::_int(a);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	int _g1 = ::Std_obj::_int(m);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(46)
	int x = hx::Mod(_g,_g1);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(48)
	while((true)){
		HX_STACK_LINE(48)
		int _g2 = ++(i);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(48)
		if ((!(((_g2 < k))))){
			HX_STACK_LINE(48)
			break;
		}
		HX_STACK_LINE(50)
		if (((x < (int)0))){
			HX_STACK_LINE(50)
			r[i] = ::Std_obj::_int((x + m));
		}
		else{
			HX_STACK_LINE(50)
			r[i] = ::Std_obj::_int(x);
		}
		HX_STACK_LINE(51)
		int _g3 = ::Std_obj::_int((x + b));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(51)
		int _g4 = ::Std_obj::_int(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(51)
		int _g5 = ::Std_obj::_int(m);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(51)
		int _g6 = hx::Mod(_g4,_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(51)
		x = _g6;
	}
	HX_STACK_LINE(54)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(BloomFilter_obj,locations,return )

Void BloomFilter_obj::add( ::String v){
{
		HX_STACK_FRAME("BloomFilter","add",0x5ff71bee,"BloomFilter.add","BloomFilter.hx",58,0x632829e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(59)
		Array< int > l = this->locations(v);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(60)
		int i = (int)-1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(61)
		int k = this->k;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(63)
		while((true)){
			HX_STACK_LINE(63)
			int _g = ++(i);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			if ((!(((_g < k))))){
				HX_STACK_LINE(63)
				break;
			}
			HX_STACK_LINE(65)
			int _g1 = ::Math_obj::floor(l->__get(i));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(65)
			Float _g2 = (Float(_g1) / Float((int)32));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(65)
			int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(65)
			int _g4 = ::Std_obj::_int(l->__get(i));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(65)
			int _g5 = hx::Mod(_g4,(int)32);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(65)
			hx::OrEq(this->buckets[_g3],(int((int)1) << int(_g5)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BloomFilter_obj,add,(void))

bool BloomFilter_obj::has( ::String v){
	HX_STACK_FRAME("BloomFilter","has",0x5ffc6927,"BloomFilter.has","BloomFilter.hx",70,0x632829e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(71)
	Array< int > l = this->locations(v);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(72)
	int i = (int)-1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(73)
	int k = this->k;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(74)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(76)
	while((true)){
		HX_STACK_LINE(76)
		int _g = ++(i);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		if ((!(((_g < k))))){
			HX_STACK_LINE(76)
			break;
		}
		HX_STACK_LINE(78)
		int _g1 = ::Std_obj::_int(l->__get(i));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(78)
		b = _g1;
		HX_STACK_LINE(79)
		int _g2 = ::Math_obj::floor((Float(b) / Float((int)32)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(79)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(79)
		int _g4 = this->buckets->__get(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(79)
		int _g5 = ::Std_obj::_int(b);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(79)
		int _g6 = hx::Mod(_g5,(int)32);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(79)
		int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(79)
		int _g8 = (int((int)1) << int(_g7));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(79)
		int _g9 = (int(_g4) & int(_g8));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(79)
		if (((_g9 == (int)0))){
			HX_STACK_LINE(81)
			return false;
		}
	}
	HX_STACK_LINE(85)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(BloomFilter_obj,has,return )

Void BloomFilter_obj::main( ){
{
		HX_STACK_FRAME("BloomFilter","main",0xa02da1cc,"BloomFilter.main","BloomFilter.hx",89,0x632829e3)
		HX_STACK_LINE(90)
		::BloomFilter bloom = ::BloomFilter_obj::__new((int)32,(int)4);		HX_STACK_VAR(bloom,"bloom");
		HX_STACK_LINE(92)
		bloom->add(HX_CSTRING("Thom"));
		HX_STACK_LINE(93)
		bloom->add(HX_CSTRING("Tim"));
		HX_STACK_LINE(94)
		bloom->add(HX_CSTRING("Nick"));
		HX_STACK_LINE(96)
		bool _g = bloom->has(HX_CSTRING("Thom"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		::haxe::Log_obj::trace(_g,hx::SourceInfo(HX_CSTRING("BloomFilter.hx"),96,HX_CSTRING("BloomFilter"),HX_CSTRING("main")));
		HX_STACK_LINE(97)
		bool _g1 = bloom->has(HX_CSTRING("Tim"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(97)
		::haxe::Log_obj::trace(_g1,hx::SourceInfo(HX_CSTRING("BloomFilter.hx"),97,HX_CSTRING("BloomFilter"),HX_CSTRING("main")));
		HX_STACK_LINE(98)
		bool _g2 = bloom->has(HX_CSTRING("Nick"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(98)
		::haxe::Log_obj::trace(_g2,hx::SourceInfo(HX_CSTRING("BloomFilter.hx"),98,HX_CSTRING("BloomFilter"),HX_CSTRING("main")));
		HX_STACK_LINE(99)
		bool _g3 = bloom->has(HX_CSTRING("No"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(99)
		::haxe::Log_obj::trace(_g3,hx::SourceInfo(HX_CSTRING("BloomFilter.hx"),99,HX_CSTRING("BloomFilter"),HX_CSTRING("main")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BloomFilter_obj,main,(void))


BloomFilter_obj::BloomFilter_obj()
{
}

void BloomFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BloomFilter);
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(k,"k");
	HX_MARK_MEMBER_NAME(_locations,"_locations");
	HX_MARK_MEMBER_NAME(buckets,"buckets");
	HX_MARK_END_CLASS();
}

void BloomFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(k,"k");
	HX_VISIT_MEMBER_NAME(_locations,"_locations");
	HX_VISIT_MEMBER_NAME(buckets,"buckets");
}

Dynamic BloomFilter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		if (HX_FIELD_EQ(inName,"k") ) { return k; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buckets") ) { return buckets; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"locations") ) { return locations_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_locations") ) { return _locations; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BloomFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k") ) { k=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buckets") ) { buckets=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_locations") ) { _locations=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BloomFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m"));
	outFields->push(HX_CSTRING("k"));
	outFields->push(HX_CSTRING("_locations"));
	outFields->push(HX_CSTRING("buckets"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BloomFilter_obj,m),HX_CSTRING("m")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BloomFilter_obj,k),HX_CSTRING("k")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(BloomFilter_obj,_locations),HX_CSTRING("_locations")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(BloomFilter_obj,buckets),HX_CSTRING("buckets")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("m"),
	HX_CSTRING("k"),
	HX_CSTRING("_locations"),
	HX_CSTRING("buckets"),
	HX_CSTRING("locations"),
	HX_CSTRING("add"),
	HX_CSTRING("has"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BloomFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BloomFilter_obj::__mClass,"__mClass");
};

#endif

Class BloomFilter_obj::__mClass;

void BloomFilter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("BloomFilter"), hx::TCanCast< BloomFilter_obj> ,sStaticFields,sMemberFields,
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

void BloomFilter_obj::__boot()
{
}

