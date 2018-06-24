#include "build/temp/_test_led.c"
#include "mock_gpio.h"
#include "inc/hw_memmap.h"
#include "led.h"
#include "unity.h"






















void setUp(void)

{

}









void tearDown(void)

{

}

void test_when_the_led_is_turned_on_then_port_f_pin_2_is_set(void)

{



    GPIOPinWrite_CMockExpect(58, 0x40025000, 0x00000004, 0x00000004);





    led_turn_on();

}









void test_when_the_led_is_turned_off_then_port_f_pin_2_is_set_to_zero(void)

{



    GPIOPinWrite_CMockExpect(70, 0x40025000, 0x00000004, 0);





    led_turn_off();

}
