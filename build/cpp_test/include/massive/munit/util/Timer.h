#ifndef INCLUDED_massive_munit_util_Timer
#define INCLUDED_massive_munit_util_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Thread)
HX_DECLARE_CLASS3(massive,munit,util,Timer)
namespace massive{
namespace munit{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Timer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Timer_obj OBJ_;
		Timer_obj();
		Void __construct(int time_ms);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Timer_obj > __new(int time_ms);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Timer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Timer"); }

		Dynamic id;
		::cpp::vm::Thread runThread;
		virtual Void stop( );
		Dynamic stop_dyn();

		Dynamic run;
		inline Dynamic &run_dyn() {return run; }

		virtual Void runLoop( int time_ms);
		Dynamic runLoop_dyn();

		static ::massive::munit::util::Timer delay( Dynamic f,int time_ms);
		static Dynamic delay_dyn();

		static Float stamp( );
		static Dynamic stamp_dyn();

};

} // end namespace massive
} // end namespace munit
} // end namespace util

#endif /* INCLUDED_massive_munit_util_Timer */ 
