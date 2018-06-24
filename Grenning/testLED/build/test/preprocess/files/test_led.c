#include "build/temp/_test_led.c"
#include "RuntimeErrorStub.h"
#include "RuntimeError.h"
#include "led.h"
#include "unity.h"


















static uint16_t virtualLeds;

void setUp(void)

{

      LedDriver_Create(&virtualLeds);

}









void tearDown(void)

{

}













 void test_leds_off_after_create(void)

 {

    virtualLeds = 0xffff;

    LedDriver_Create(&virtualLeds);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0)), (UNITY_INT)(UNITY_INT16)((virtualLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_HEX16);

}





void test_turn_on_led_one(void){





    LedDriver_TurnOn(1);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((1)), (UNITY_INT)(UNITY_INT16)((virtualLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(67), UNITY_DISPLAY_STYLE_HEX16);

}





void test_turn_off_led_one(void){





    LedDriver_TurnOn(1);

    LedDriver_TurnOff(1);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0)), (UNITY_INT)(UNITY_INT16)((virtualLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(76), UNITY_DISPLAY_STYLE_HEX16);

}





void test_turn_on_multiple_leds(void){

    LedDriver_TurnOn(9);

    LedDriver_TurnOn(8);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0x180)), (UNITY_INT)(UNITY_INT16)((virtualLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(83), UNITY_DISPLAY_STYLE_HEX16);

}





void test_turn_on_all_leds(void){

    LedDriver_TurnAllOn();

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0xffff)), (UNITY_INT)(UNITY_INT16)((virtualLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(89), UNITY_DISPLAY_STYLE_HEX16);

}





void test_turn_off_any_led(void){

    LedDriver_TurnAllOn();

    LedDriver_TurnOff(8);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0xff7f)), (UNITY_INT)(UNITY_INT16)((virtualLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(96), UNITY_DISPLAY_STYLE_HEX16);

 }





void test_led_memory_is_not_readable(void){

    virtualLeds = 0xffff;

    LedDriver_TurnOn(8);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0x80)), (UNITY_INT)(UNITY_INT16)((virtualLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(103), UNITY_DISPLAY_STYLE_HEX16);

}





void test_upper_and_lower_bounds(void){

    LedDriver_TurnOn(1);

    LedDriver_TurnOn(16);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0x8001)), (UNITY_INT)(UNITY_INT16)((virtualLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(110), UNITY_DISPLAY_STYLE_HEX16);

}





void test_out_of_bounds_turn_on_does_no_harm(void){

    LedDriver_TurnOn(-1);

    LedDriver_TurnOn(0);

    LedDriver_TurnOn(17);

    LedDriver_TurnOn(3141);



    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0)), (UNITY_INT)(UNITY_INT16)((virtualLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(120), UNITY_DISPLAY_STYLE_HEX16);

}





void test_out_of_bounds_turn_off_does_no_harm(void){

    LedDriver_TurnAllOn();

    LedDriver_TurnOff(-1);

    LedDriver_TurnOff(0);

    LedDriver_TurnOff(17);

    LedDriver_TurnOff(3141);



    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0xFFFF)), (UNITY_INT)(UNITY_INT16)((virtualLeds)), (

   ((void *)0)

   ), (UNITY_UINT)(131), UNITY_DISPLAY_STYLE_HEX16);

}





void test_out_of_bounds_produce_runtime_error(void){

  LedDriver_TurnOn(-1);

  UnityAssertEqualString((const char*)(("LED Driver: out-of-bounds LED")), (const char*)((RuntimeErrorStub_GetLastError())), (

 ((void *)0)

 ), (UNITY_UINT)(138))

                                                            ;

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((RuntimeErrorStub_GetLastParameter())), (

 ((void *)0)

 ), (UNITY_UINT)(139), UNITY_DISPLAY_STYLE_INT);

}







void test_out_of_bounds_to_do(void){



    UnityIgnore( (("Implement me!")), (UNITY_UINT)(146));

}
