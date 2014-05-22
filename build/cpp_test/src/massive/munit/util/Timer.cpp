#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_massive_munit_util_Timer
#include <massive/munit/util/Timer.h>
#endif
namespace massive{
namespace munit{
namespace util{

Void Timer_obj::__construct(int time_ms)
{
HX_STACK_FRAME("massive.munit.util.Timer","new",0xa904eb52,"massive.munit.util.Timer.new","massive/munit/util/Timer.hx",76,0xdb7ac55d)
HX_STACK_THIS(this)
HX_STACK_ARG(time_ms,"time_ms")
{
	HX_STACK_LINE(76)
	Array< int > time_ms1 = Array_obj< int >::__new().Add(time_ms);		HX_STACK_VAR(time_ms1,"time_ms1");
	HX_STACK_LINE(94)
	Array< ::Dynamic > me = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(me,"me");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< int >,time_ms1,Array< ::Dynamic >,me)
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","massive/munit/util/Timer.hx",95,0xdb7ac55d)
		{
			HX_STACK_LINE(95)
			me->__get((int)0).StaticCast< ::massive::munit::util::Timer >()->runLoop(time_ms1->__get((int)0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(95)
	::cpp::vm::Thread _g = ::cpp::vm::Thread_obj::create( Dynamic(new _Function_1_1(time_ms1,me)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(95)
	this->runThread = _g;
}
;
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(int time_ms)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(time_ms);
	return result;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Timer_obj::stop( ){
{
		HX_STACK_FRAME("massive.munit.util.Timer","stop",0x3ea268d0,"massive.munit.util.Timer.stop","massive/munit/util/Timer.hx",100,0xdb7ac55d)
		HX_STACK_THIS(this)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","massive/munit/util/Timer.hx",121,0xdb7ac55d)
			{
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(121)
		this->run =  Dynamic(new _Function_1_1());
		HX_STACK_LINE(122)
		this->runThread->sendMessage(HX_CSTRING("stop"));
		HX_STACK_LINE(124)
		this->id = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
Void run(){
{
		HX_STACK_FRAME("massive.munit.util.Timer","run",0xa908023d,"massive.munit.util.Timer.run","massive/munit/util/Timer.hx",128,0xdb7ac55d)
		HX_STACK_THIS(this)
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Void Timer_obj::runLoop( int time_ms){
{
		HX_STACK_FRAME("massive.munit.util.Timer","runLoop",0xec333741,"massive.munit.util.Timer.runLoop","massive/munit/util/Timer.hx",132,0xdb7ac55d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(time_ms,"time_ms")
		HX_STACK_LINE(133)
		bool shouldStop = false;		HX_STACK_VAR(shouldStop,"shouldStop");
		HX_STACK_LINE(134)
		while((true)){
			HX_STACK_LINE(134)
			if ((!((!(shouldStop))))){
				HX_STACK_LINE(134)
				break;
			}
			HX_STACK_LINE(136)
			::Sys_obj::sleep((Float(time_ms) / Float((int)1000)));
			HX_STACK_LINE(137)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(139)
				this->run();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic ex = __e;{
						HX_STACK_LINE(143)
						::haxe::Log_obj::trace(ex,hx::SourceInfo(HX_CSTRING("Timer.hx"),143,HX_CSTRING("massive.munit.util.Timer"),HX_CSTRING("runLoop")));
					}
				}
			}
			HX_STACK_LINE(146)
			::String msg = ::cpp::vm::Thread_obj::readMessage(false);		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(147)
			if (((msg == HX_CSTRING("stop")))){
				HX_STACK_LINE(147)
				shouldStop = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,runLoop,(void))

::massive::munit::util::Timer Timer_obj::delay( Dynamic f,int time_ms){
	HX_STACK_FRAME("massive.munit.util.Timer","delay",0xe28a12f5,"massive.munit.util.Timer.delay","massive/munit/util/Timer.hx",152,0xdb7ac55d)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(time_ms,"time_ms")
	HX_STACK_LINE(152)
	Dynamic f1 = Dynamic( Array_obj<Dynamic>::__new().Add(f));		HX_STACK_VAR(f1,"f1");
	HX_STACK_LINE(154)
	Array< ::Dynamic > t = Array_obj< ::Dynamic >::__new().Add(::massive::munit::util::Timer_obj::__new(time_ms));		HX_STACK_VAR(t,"t");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,f1,Array< ::Dynamic >,t)
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","massive/munit/util/Timer.hx",156,0xdb7ac55d)
		{
			HX_STACK_LINE(157)
			t->__get((int)0).StaticCast< ::massive::munit::util::Timer >()->stop();
			HX_STACK_LINE(158)
			f1->__GetItem((int)0)().Cast< Void >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(155)
	t->__get((int)0).StaticCast< ::massive::munit::util::Timer >()->run =  Dynamic(new _Function_1_1(f1,t));
	HX_STACK_LINE(160)
	return t->__get((int)0).StaticCast< ::massive::munit::util::Timer >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )

Float Timer_obj::stamp( ){
	HX_STACK_FRAME("massive.munit.util.Timer","stamp",0x8f6eab75,"massive.munit.util.Timer.stamp","massive/munit/util/Timer.hx",172,0xdb7ac55d)
	HX_STACK_LINE(172)
	return ::Sys_obj::time();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )


Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(runThread,"runThread");
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(runThread,"runThread");
	HX_VISIT_MEMBER_NAME(run,"run");
}

Dynamic Timer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runLoop") ) { return runLoop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"runThread") ) { return runThread; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"runThread") ) { runThread=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("runThread"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("delay"),
	HX_CSTRING("stamp"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Timer_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(Timer_obj,runThread),HX_CSTRING("runThread")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Timer_obj,run),HX_CSTRING("run")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("runThread"),
	HX_CSTRING("stop"),
	HX_CSTRING("run"),
	HX_CSTRING("runLoop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#endif

Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("massive.munit.util.Timer"), hx::TCanCast< Timer_obj> ,sStaticFields,sMemberFields,
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

void Timer_obj::__boot()
{
}

} // end namespace massive
} // end namespace munit
} // end namespace util
