#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_rtti_Meta
#include <haxe/rtti/Meta.h>
#endif
#ifndef INCLUDED_massive_munit_TestClassHelper
#include <massive/munit/TestClassHelper.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
namespace massive{
namespace munit{

Void TestClassHelper_obj::__construct(::Class type,Dynamic __o_isDebug)
{
HX_STACK_FRAME("massive.munit.TestClassHelper","new",0xfa387a5f,"massive.munit.TestClassHelper.new","massive/munit/TestClassHelper.hx",147,0xfbaf8533)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_isDebug,"isDebug")
Dynamic isDebug = __o_isDebug.Default(false);
{
	HX_STACK_LINE(148)
	this->type = type;
	HX_STACK_LINE(149)
	this->isDebug = isDebug;
	HX_STACK_LINE(150)
	this->tests = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(151)
	this->index = (int)0;
	HX_STACK_LINE(152)
	::String _g = ::Type_obj::getClassName(type);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(152)
	this->className = _g;
	HX_STACK_LINE(154)
	this->beforeClass = this->nullFunc_dyn();
	HX_STACK_LINE(155)
	this->afterClass = this->nullFunc_dyn();
	HX_STACK_LINE(156)
	this->before = this->nullFunc_dyn();
	HX_STACK_LINE(157)
	this->after = this->nullFunc_dyn();
	HX_STACK_LINE(159)
	this->parse(type);
}
;
	return null();
}

//TestClassHelper_obj::~TestClassHelper_obj() { }

Dynamic TestClassHelper_obj::__CreateEmpty() { return  new TestClassHelper_obj; }
hx::ObjectPtr< TestClassHelper_obj > TestClassHelper_obj::__new(::Class type,Dynamic __o_isDebug)
{  hx::ObjectPtr< TestClassHelper_obj > result = new TestClassHelper_obj();
	result->__construct(type,__o_isDebug);
	return result;}

Dynamic TestClassHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestClassHelper_obj > result = new TestClassHelper_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool TestClassHelper_obj::hasNext( ){
	HX_STACK_FRAME("massive.munit.TestClassHelper","hasNext",0x5f61baec,"massive.munit.TestClassHelper.hasNext","massive/munit/TestClassHelper.hx",169,0xfbaf8533)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	return (this->index < this->tests->__Field(HX_CSTRING("length"),true));
}


HX_DEFINE_DYNAMIC_FUNC0(TestClassHelper_obj,hasNext,return )

Dynamic TestClassHelper_obj::next( ){
	HX_STACK_FRAME("massive.munit.TestClassHelper","next",0xf7329a14,"massive.munit.TestClassHelper.next","massive/munit/TestClassHelper.hx",179,0xfbaf8533)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	if ((this->hasNext())){
		HX_STACK_LINE(179)
		int _g = (this->index)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(179)
		return this->tests->__GetItem(_g);
	}
	else{
		HX_STACK_LINE(179)
		return null();
	}
	HX_STACK_LINE(179)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestClassHelper_obj,next,return )

Dynamic TestClassHelper_obj::current( ){
	HX_STACK_FRAME("massive.munit.TestClassHelper","current",0x12feb1b8,"massive.munit.TestClassHelper.current","massive/munit/TestClassHelper.hx",189,0xfbaf8533)
	HX_STACK_THIS(this)
	HX_STACK_LINE(189)
	if (((this->index <= (int)0))){
		HX_STACK_LINE(189)
		return this->tests->__GetItem((int)0);
	}
	else{
		HX_STACK_LINE(189)
		return this->tests->__GetItem((this->index - (int)1));
	}
	HX_STACK_LINE(189)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestClassHelper_obj,current,return )

Void TestClassHelper_obj::parse( ::Class type){
{
		HX_STACK_FRAME("massive.munit.TestClassHelper","parse",0x7937f7f2,"massive.munit.TestClassHelper.parse","massive/munit/TestClassHelper.hx",193,0xfbaf8533)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(194)
		Dynamic _g = ::Type_obj::createEmptyInstance(type);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(194)
		this->test = _g;
		HX_STACK_LINE(196)
		Array< ::Dynamic > inherintanceChain = this->getInheritanceChain(type);		HX_STACK_VAR(inherintanceChain,"inherintanceChain");
		HX_STACK_LINE(197)
		Dynamic fieldMeta = this->collateFieldMeta(inherintanceChain);		HX_STACK_VAR(fieldMeta,"fieldMeta");
		HX_STACK_LINE(198)
		this->scanForTests(fieldMeta);
		HX_STACK_LINE(199)
		this->tests->__Field(HX_CSTRING("sort"),true)(this->sortTestsByName_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestClassHelper_obj,parse,(void))

Array< ::Dynamic > TestClassHelper_obj::getInheritanceChain( ::Class clazz){
	HX_STACK_FRAME("massive.munit.TestClassHelper","getInheritanceChain",0x89dc7b0c,"massive.munit.TestClassHelper.getInheritanceChain","massive/munit/TestClassHelper.hx",203,0xfbaf8533)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clazz,"clazz")
	HX_STACK_LINE(204)
	Array< ::Dynamic > inherintanceChain = Array_obj< ::Dynamic >::__new().Add(clazz);		HX_STACK_VAR(inherintanceChain,"inherintanceChain");
	HX_STACK_LINE(205)
	while((true)){
		HX_STACK_LINE(205)
		::Class _g = ::Type_obj::getSuperClass(clazz);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		::Class _g1 = clazz = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(205)
		if ((!(((_g1 != null()))))){
			HX_STACK_LINE(205)
			break;
		}
		HX_STACK_LINE(206)
		inherintanceChain->push(clazz);
	}
	HX_STACK_LINE(207)
	return inherintanceChain;
}


HX_DEFINE_DYNAMIC_FUNC1(TestClassHelper_obj,getInheritanceChain,return )

Dynamic TestClassHelper_obj::collateFieldMeta( Array< ::Dynamic > inherintanceChain){
	HX_STACK_FRAME("massive.munit.TestClassHelper","collateFieldMeta",0xda874afa,"massive.munit.TestClassHelper.collateFieldMeta","massive/munit/TestClassHelper.hx",211,0xfbaf8533)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inherintanceChain,"inherintanceChain")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","massive/munit/TestClassHelper.hx",212,0xfbaf8533)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(212)
	Dynamic meta = _Function_1_1::Block();		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(213)
	while((true)){
		HX_STACK_LINE(213)
		if ((!(((inherintanceChain->length > (int)0))))){
			HX_STACK_LINE(213)
			break;
		}
		HX_STACK_LINE(215)
		::Class clazz = inherintanceChain->pop().StaticCast< ::Class >();		HX_STACK_VAR(clazz,"clazz");
		HX_STACK_LINE(216)
		Dynamic newMeta = ::haxe::rtti::Meta_obj::getFields(clazz);		HX_STACK_VAR(newMeta,"newMeta");
		HX_STACK_LINE(217)
		Array< ::String > markedFieldNames = ::Reflect_obj::fields(newMeta);		HX_STACK_VAR(markedFieldNames,"markedFieldNames");
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(219)
			while((true)){
				HX_STACK_LINE(219)
				if ((!(((_g < markedFieldNames->length))))){
					HX_STACK_LINE(219)
					break;
				}
				HX_STACK_LINE(219)
				::String fieldName = markedFieldNames->__get(_g);		HX_STACK_VAR(fieldName,"fieldName");
				HX_STACK_LINE(219)
				++(_g);
				HX_STACK_LINE(221)
				Dynamic recordedFieldTags = ::Reflect_obj::field(meta,fieldName);		HX_STACK_VAR(recordedFieldTags,"recordedFieldTags");
				HX_STACK_LINE(222)
				Dynamic newFieldTags = ::Reflect_obj::field(newMeta,fieldName);		HX_STACK_VAR(newFieldTags,"newFieldTags");
				HX_STACK_LINE(224)
				Array< ::String > newTagNames = ::Reflect_obj::fields(newFieldTags);		HX_STACK_VAR(newTagNames,"newTagNames");
				HX_STACK_LINE(225)
				if (((recordedFieldTags == null()))){
					struct _Function_5_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","massive/munit/TestClassHelper.hx",230,0xfbaf8533)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(230)
					Dynamic tagsCopy = _Function_5_1::Block();		HX_STACK_VAR(tagsCopy,"tagsCopy");
					HX_STACK_LINE(231)
					{
						HX_STACK_LINE(231)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(231)
						while((true)){
							HX_STACK_LINE(231)
							if ((!(((_g1 < newTagNames->length))))){
								HX_STACK_LINE(231)
								break;
							}
							HX_STACK_LINE(231)
							::String tagName = newTagNames->__get(_g1);		HX_STACK_VAR(tagName,"tagName");
							HX_STACK_LINE(231)
							++(_g1);
							HX_STACK_LINE(232)
							Dynamic value = ::Reflect_obj::field(newFieldTags,tagName);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(232)
							if (((tagsCopy != null()))){
								HX_STACK_LINE(232)
								tagsCopy->__SetField(tagName,value,false);
							}
						}
					}
					HX_STACK_LINE(234)
					if (((meta != null()))){
						HX_STACK_LINE(234)
						meta->__SetField(fieldName,tagsCopy,false);
					}
				}
				else{
					HX_STACK_LINE(238)
					bool ignored = false;		HX_STACK_VAR(ignored,"ignored");
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(239)
						while((true)){
							HX_STACK_LINE(239)
							if ((!(((_g1 < newTagNames->length))))){
								HX_STACK_LINE(239)
								break;
							}
							HX_STACK_LINE(239)
							::String tagName = newTagNames->__get(_g1);		HX_STACK_VAR(tagName,"tagName");
							HX_STACK_LINE(239)
							++(_g1);
							HX_STACK_LINE(241)
							if (((tagName == HX_CSTRING("Ignore")))){
								HX_STACK_LINE(242)
								ignored = true;
							}
							HX_STACK_LINE(247)
							if (((  (((bool(!(ignored)) && bool(((bool((tagName == HX_CSTRING("Test"))) || bool((tagName == HX_CSTRING("AsyncTest"))))))))) ? bool(::Reflect_obj::hasField(recordedFieldTags,HX_CSTRING("Ignore"))) : bool(false) ))){
								HX_STACK_LINE(250)
								::Reflect_obj::deleteField(recordedFieldTags,HX_CSTRING("Ignore"));
							}
							HX_STACK_LINE(252)
							Dynamic tagValue = ::Reflect_obj::field(newFieldTags,tagName);		HX_STACK_VAR(tagValue,"tagValue");
							HX_STACK_LINE(253)
							if (((recordedFieldTags != null()))){
								HX_STACK_LINE(253)
								recordedFieldTags->__SetField(tagName,tagValue,false);
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(258)
	return meta;
}


HX_DEFINE_DYNAMIC_FUNC1(TestClassHelper_obj,collateFieldMeta,return )

Void TestClassHelper_obj::scanForTests( Dynamic fieldMeta){
{
		HX_STACK_FRAME("massive.munit.TestClassHelper","scanForTests",0x1ceba4d6,"massive.munit.TestClassHelper.scanForTests","massive/munit/TestClassHelper.hx",262,0xfbaf8533)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fieldMeta,"fieldMeta")
		HX_STACK_LINE(263)
		Array< ::String > fieldNames = ::Reflect_obj::fields(fieldMeta);		HX_STACK_VAR(fieldNames,"fieldNames");
		HX_STACK_LINE(264)
		{
			HX_STACK_LINE(264)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(264)
			while((true)){
				HX_STACK_LINE(264)
				if ((!(((_g < fieldNames->length))))){
					HX_STACK_LINE(264)
					break;
				}
				HX_STACK_LINE(264)
				::String fieldName = fieldNames->__get(_g);		HX_STACK_VAR(fieldName,"fieldName");
				HX_STACK_LINE(264)
				++(_g);
				HX_STACK_LINE(266)
				Dynamic f = ::Reflect_obj::field(this->test,fieldName);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(267)
				if ((::Reflect_obj::isFunction(f))){
					HX_STACK_LINE(269)
					Dynamic funcMeta = ::Reflect_obj::field(fieldMeta,fieldName);		HX_STACK_VAR(funcMeta,"funcMeta");
					HX_STACK_LINE(270)
					this->searchForMatchingTags(fieldName,f,funcMeta);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestClassHelper_obj,scanForTests,(void))

Void TestClassHelper_obj::searchForMatchingTags( ::String fieldName,Dynamic func,Dynamic funcMeta){
{
		HX_STACK_FRAME("massive.munit.TestClassHelper","searchForMatchingTags",0x9f12b016,"massive.munit.TestClassHelper.searchForMatchingTags","massive/munit/TestClassHelper.hx",277,0xfbaf8533)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fieldName,"fieldName")
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(funcMeta,"funcMeta")
		HX_STACK_LINE(277)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(277)
		Array< ::String > _g1 = ::massive::munit::TestClassHelper_obj::META_TAGS;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(277)
		while((true)){
			HX_STACK_LINE(277)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(277)
				break;
			}
			HX_STACK_LINE(277)
			::String tag = _g1->__get(_g);		HX_STACK_VAR(tag,"tag");
			HX_STACK_LINE(277)
			++(_g);
			HX_STACK_LINE(279)
			if ((::Reflect_obj::hasField(funcMeta,tag))){
				HX_STACK_LINE(281)
				Array< ::String > args = ::Reflect_obj::field(funcMeta,tag);		HX_STACK_VAR(args,"args");
				HX_STACK_LINE(282)
				::String description;		HX_STACK_VAR(description,"description");
				HX_STACK_LINE(282)
				if (((args != null()))){
					HX_STACK_LINE(282)
					description = args->__get((int)0);
				}
				else{
					HX_STACK_LINE(282)
					description = HX_CSTRING("");
				}
				HX_STACK_LINE(283)
				bool isAsync = (bool((args != null())) && bool((description == HX_CSTRING("Async"))));		HX_STACK_VAR(isAsync,"isAsync");
				HX_STACK_LINE(284)
				bool isIgnored = ::Reflect_obj::hasField(funcMeta,HX_CSTRING("Ignore"));		HX_STACK_VAR(isIgnored,"isIgnored");
				HX_STACK_LINE(286)
				if ((isAsync)){
					HX_STACK_LINE(288)
					description = HX_CSTRING("");
				}
				else{
					HX_STACK_LINE(290)
					if ((isIgnored)){
						HX_STACK_LINE(292)
						Dynamic _g2 = ::Reflect_obj::field(funcMeta,HX_CSTRING("Ignore"));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(292)
						args = _g2;
						HX_STACK_LINE(293)
						if (((args != null()))){
							HX_STACK_LINE(293)
							description = args->__get((int)0);
						}
						else{
							HX_STACK_LINE(293)
							description = HX_CSTRING("");
						}
					}
				}
				HX_STACK_LINE(296)
				::String _switch_1 = (tag);
				if (  ( _switch_1==HX_CSTRING("BeforeClass"))){
					HX_STACK_LINE(299)
					this->beforeClass = func;
				}
				else if (  ( _switch_1==HX_CSTRING("AfterClass"))){
					HX_STACK_LINE(301)
					this->afterClass = func;
				}
				else if (  ( _switch_1==HX_CSTRING("Before"))){
					HX_STACK_LINE(303)
					this->before = func;
				}
				else if (  ( _switch_1==HX_CSTRING("After"))){
					HX_STACK_LINE(305)
					this->after = func;
				}
				else if (  ( _switch_1==HX_CSTRING("AsyncTest"))){
					HX_STACK_LINE(307)
					if ((!(this->isDebug))){
						HX_STACK_LINE(308)
						this->addTest(fieldName,func,this->test,true,isIgnored,description);
					}
				}
				else if (  ( _switch_1==HX_CSTRING("Test"))){
					HX_STACK_LINE(310)
					if ((!(this->isDebug))){
						HX_STACK_LINE(311)
						this->addTest(fieldName,func,this->test,isAsync,isIgnored,description);
					}
				}
				else if (  ( _switch_1==HX_CSTRING("TestDebug"))){
					HX_STACK_LINE(313)
					if ((this->isDebug)){
						HX_STACK_LINE(314)
						this->addTest(fieldName,func,this->test,isAsync,isIgnored,description);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestClassHelper_obj,searchForMatchingTags,(void))

Void TestClassHelper_obj::addTest( ::String field,Dynamic testFunction,Dynamic testInstance,bool isAsync,bool isIgnored,::String description){
{
		HX_STACK_FRAME("massive.munit.TestClassHelper","addTest",0xd0522092,"massive.munit.TestClassHelper.addTest","massive/munit/TestClassHelper.hx",326,0xfbaf8533)
		HX_STACK_THIS(this)
		HX_STACK_ARG(field,"field")
		HX_STACK_ARG(testFunction,"testFunction")
		HX_STACK_ARG(testInstance,"testInstance")
		HX_STACK_ARG(isAsync,"isAsync")
		HX_STACK_ARG(isIgnored,"isIgnored")
		HX_STACK_ARG(description,"description")
		HX_STACK_LINE(327)
		::massive::munit::TestResult result = ::massive::munit::TestResult_obj::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(328)
		result->async = isAsync;
		HX_STACK_LINE(329)
		result->ignore = isIgnored;
		HX_STACK_LINE(330)
		result->className = this->className;
		HX_STACK_LINE(331)
		result->description = description;
		HX_STACK_LINE(332)
		result->name = field;
		struct _Function_1_1{
			inline static Dynamic Block( ::massive::munit::TestResult &result,Dynamic &testInstance,Dynamic &testFunction){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","massive/munit/TestClassHelper.hx",333,0xfbaf8533)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("test") , testFunction,false);
					__result->Add(HX_CSTRING("scope") , testInstance,false);
					__result->Add(HX_CSTRING("result") , result,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(333)
		Dynamic data = _Function_1_1::Block(result,testInstance,testFunction);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(334)
		this->tests->__Field(HX_CSTRING("push"),true)(data);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(TestClassHelper_obj,addTest,(void))

int TestClassHelper_obj::sortTestsByName( Dynamic x,Dynamic y){
	HX_STACK_FRAME("massive.munit.TestClassHelper","sortTestsByName",0xc2d1fc44,"massive.munit.TestClassHelper.sortTestsByName","massive/munit/TestClassHelper.hx",338,0xfbaf8533)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(339)
	if (((x->__Field(HX_CSTRING("result"),true)->__Field(HX_CSTRING("name"),true) == y->__Field(HX_CSTRING("result"),true)->__Field(HX_CSTRING("name"),true)))){
		HX_STACK_LINE(339)
		return (int)0;
	}
	HX_STACK_LINE(340)
	if (((x->__Field(HX_CSTRING("result"),true)->__Field(HX_CSTRING("name"),true) > y->__Field(HX_CSTRING("result"),true)->__Field(HX_CSTRING("name"),true)))){
		HX_STACK_LINE(340)
		return (int)1;
	}
	else{
		HX_STACK_LINE(341)
		return (int)-1;
	}
	HX_STACK_LINE(340)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(TestClassHelper_obj,sortTestsByName,return )

Void TestClassHelper_obj::nullFunc( ){
{
		HX_STACK_FRAME("massive.munit.TestClassHelper","nullFunc",0x1203bf0c,"massive.munit.TestClassHelper.nullFunc","massive/munit/TestClassHelper.hx",345,0xfbaf8533)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestClassHelper_obj,nullFunc,(void))

::String TestClassHelper_obj::META_TAG_BEFORE_CLASS;

::String TestClassHelper_obj::META_TAG_AFTER_CLASS;

::String TestClassHelper_obj::META_TAG_BEFORE;

::String TestClassHelper_obj::META_TAG_AFTER;

::String TestClassHelper_obj::META_TAG_TEST;

::String TestClassHelper_obj::META_TAG_ASYNC_TEST;

::String TestClassHelper_obj::META_TAG_IGNORE;

::String TestClassHelper_obj::META_PARAM_ASYNC_TEST;

::String TestClassHelper_obj::META_TAG_TEST_DEBUG;

Array< ::String > TestClassHelper_obj::META_TAGS;


TestClassHelper_obj::TestClassHelper_obj()
{
}

void TestClassHelper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestClassHelper);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(test,"test");
	HX_MARK_MEMBER_NAME(beforeClass,"beforeClass");
	HX_MARK_MEMBER_NAME(afterClass,"afterClass");
	HX_MARK_MEMBER_NAME(before,"before");
	HX_MARK_MEMBER_NAME(after,"after");
	HX_MARK_MEMBER_NAME(tests,"tests");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(isDebug,"isDebug");
	HX_MARK_END_CLASS();
}

void TestClassHelper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(test,"test");
	HX_VISIT_MEMBER_NAME(beforeClass,"beforeClass");
	HX_VISIT_MEMBER_NAME(afterClass,"afterClass");
	HX_VISIT_MEMBER_NAME(before,"before");
	HX_VISIT_MEMBER_NAME(after,"after");
	HX_VISIT_MEMBER_NAME(tests,"tests");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(isDebug,"isDebug");
}

Dynamic TestClassHelper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"test") ) { return test; }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"after") ) { return after; }
		if (HX_FIELD_EQ(inName,"tests") ) { return tests; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"before") ) { return before; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isDebug") ) { return isDebug; }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		if (HX_FIELD_EQ(inName,"current") ) { return current_dyn(); }
		if (HX_FIELD_EQ(inName,"addTest") ) { return addTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nullFunc") ) { return nullFunc_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"META_TAGS") ) { return META_TAGS; }
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"afterClass") ) { return afterClass; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beforeClass") ) { return beforeClass; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scanForTests") ) { return scanForTests_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sortTestsByName") ) { return sortTestsByName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collateFieldMeta") ) { return collateFieldMeta_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getInheritanceChain") ) { return getInheritanceChain_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"searchForMatchingTags") ) { return searchForMatchingTags_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestClassHelper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"test") ) { test=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"after") ) { after=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tests") ) { tests=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"before") ) { before=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isDebug") ) { isDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"META_TAGS") ) { META_TAGS=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"afterClass") ) { afterClass=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beforeClass") ) { beforeClass=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestClassHelper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("test"));
	outFields->push(HX_CSTRING("beforeClass"));
	outFields->push(HX_CSTRING("afterClass"));
	outFields->push(HX_CSTRING("before"));
	outFields->push(HX_CSTRING("after"));
	outFields->push(HX_CSTRING("tests"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("className"));
	outFields->push(HX_CSTRING("isDebug"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("META_TAG_BEFORE_CLASS"),
	HX_CSTRING("META_TAG_AFTER_CLASS"),
	HX_CSTRING("META_TAG_BEFORE"),
	HX_CSTRING("META_TAG_AFTER"),
	HX_CSTRING("META_TAG_TEST"),
	HX_CSTRING("META_TAG_ASYNC_TEST"),
	HX_CSTRING("META_TAG_IGNORE"),
	HX_CSTRING("META_PARAM_ASYNC_TEST"),
	HX_CSTRING("META_TAG_TEST_DEBUG"),
	HX_CSTRING("META_TAGS"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Class*/ ,(int)offsetof(TestClassHelper_obj,type),HX_CSTRING("type")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestClassHelper_obj,test),HX_CSTRING("test")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestClassHelper_obj,beforeClass),HX_CSTRING("beforeClass")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestClassHelper_obj,afterClass),HX_CSTRING("afterClass")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestClassHelper_obj,before),HX_CSTRING("before")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestClassHelper_obj,after),HX_CSTRING("after")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestClassHelper_obj,tests),HX_CSTRING("tests")},
	{hx::fsInt,(int)offsetof(TestClassHelper_obj,index),HX_CSTRING("index")},
	{hx::fsString,(int)offsetof(TestClassHelper_obj,className),HX_CSTRING("className")},
	{hx::fsBool,(int)offsetof(TestClassHelper_obj,isDebug),HX_CSTRING("isDebug")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("type"),
	HX_CSTRING("test"),
	HX_CSTRING("beforeClass"),
	HX_CSTRING("afterClass"),
	HX_CSTRING("before"),
	HX_CSTRING("after"),
	HX_CSTRING("tests"),
	HX_CSTRING("index"),
	HX_CSTRING("className"),
	HX_CSTRING("isDebug"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("next"),
	HX_CSTRING("current"),
	HX_CSTRING("parse"),
	HX_CSTRING("getInheritanceChain"),
	HX_CSTRING("collateFieldMeta"),
	HX_CSTRING("scanForTests"),
	HX_CSTRING("searchForMatchingTags"),
	HX_CSTRING("addTest"),
	HX_CSTRING("sortTestsByName"),
	HX_CSTRING("nullFunc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_BEFORE_CLASS,"META_TAG_BEFORE_CLASS");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_AFTER_CLASS,"META_TAG_AFTER_CLASS");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_BEFORE,"META_TAG_BEFORE");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_AFTER,"META_TAG_AFTER");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_TEST,"META_TAG_TEST");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_ASYNC_TEST,"META_TAG_ASYNC_TEST");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_IGNORE,"META_TAG_IGNORE");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_PARAM_ASYNC_TEST,"META_PARAM_ASYNC_TEST");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_TEST_DEBUG,"META_TAG_TEST_DEBUG");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAGS,"META_TAGS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_BEFORE_CLASS,"META_TAG_BEFORE_CLASS");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_AFTER_CLASS,"META_TAG_AFTER_CLASS");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_BEFORE,"META_TAG_BEFORE");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_AFTER,"META_TAG_AFTER");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_TEST,"META_TAG_TEST");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_ASYNC_TEST,"META_TAG_ASYNC_TEST");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_IGNORE,"META_TAG_IGNORE");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_PARAM_ASYNC_TEST,"META_PARAM_ASYNC_TEST");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_TEST_DEBUG,"META_TAG_TEST_DEBUG");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAGS,"META_TAGS");
};

#endif

Class TestClassHelper_obj::__mClass;

void TestClassHelper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.TestClassHelper"), hx::TCanCast< TestClassHelper_obj> ,sStaticFields,sMemberFields,
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

void TestClassHelper_obj::__boot()
{
	META_TAG_BEFORE_CLASS= HX_CSTRING("BeforeClass");
	META_TAG_AFTER_CLASS= HX_CSTRING("AfterClass");
	META_TAG_BEFORE= HX_CSTRING("Before");
	META_TAG_AFTER= HX_CSTRING("After");
	META_TAG_TEST= HX_CSTRING("Test");
	META_TAG_ASYNC_TEST= HX_CSTRING("AsyncTest");
	META_TAG_IGNORE= HX_CSTRING("Ignore");
	META_PARAM_ASYNC_TEST= HX_CSTRING("Async");
	META_TAG_TEST_DEBUG= HX_CSTRING("TestDebug");
	META_TAGS= Array_obj< ::String >::__new().Add(HX_CSTRING("BeforeClass")).Add(HX_CSTRING("AfterClass")).Add(HX_CSTRING("Before")).Add(HX_CSTRING("After")).Add(HX_CSTRING("Test")).Add(HX_CSTRING("AsyncTest")).Add(HX_CSTRING("TestDebug"));
}

} // end namespace massive
} // end namespace munit
