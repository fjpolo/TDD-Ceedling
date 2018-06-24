/*******************************************************************************
 *    INCLUDED FILES
 ******************************************************************************/

//-- unity: unit test framework
#include "unity.h"

//-- module under test
#include "led.h"

//-- other modules
#include "RuntimeError.h"
#include "RuntimeErrorStub.h"

//-- mock modules
//#include "mock_sysctl.h"   // This will mock the functions in driverlib/sysctl.h.

/*******************************************************************************
 *    DEFINITIONS
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE TYPES
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE DATA
 ******************************************************************************/
static uint16_t virtualLeds;

/*******************************************************************************
 *    PRIVATE FUNCTIONS
 ******************************************************************************/

/*******************************************************************************
 *    SETUP
 ******************************************************************************/
void setUp(void)
{
      LedDriver_Create(&virtualLeds);
}

 /*******************************************************************************
 *    TEARDOWN
 ******************************************************************************/
void tearDown(void)
{
}

/*******************************************************************************
 *    TESTS
 ******************************************************************************/

 /* Test initialization. All LEDs should be zero */
 void test_leds_off_after_create(void)
 {
    virtualLeds = 0xffff;
    LedDriver_Create(&virtualLeds);
    TEST_ASSERT_EQUAL_HEX16(0, virtualLeds);
}

/* Test turning LED1 on */
void test_turn_on_led_one(void){
    //uint16_t virtualLeds;
    //LedDriver_Create(&virtualLeds);
    LedDriver_TurnOn(1);
    TEST_ASSERT_EQUAL_HEX16(1, virtualLeds);
}

/* Test turning LED1 off */
void test_turn_off_led_one(void){
    //uint16_t virtualLeds;
    //LedDriver_Create(&virtualLeds);
    LedDriver_TurnOn(1);
    LedDriver_TurnOff(1);
    TEST_ASSERT_EQUAL_HEX16(0, virtualLeds);
}

/* Test turning multiple LEDs on */
void test_turn_on_multiple_leds(void){
    LedDriver_TurnOn(9);
    LedDriver_TurnOn(8);
    TEST_ASSERT_EQUAL_HEX16(0x180, virtualLeds);
}

/* Test turning all LEDs on */
void test_turn_on_all_leds(void){
    LedDriver_TurnAllOn();
    TEST_ASSERT_EQUAL_HEX16(0xffff, virtualLeds);
}

/* Test to turn off any LED */
void test_turn_off_any_led(void){
    LedDriver_TurnAllOn();
    LedDriver_TurnOff(8);
    TEST_ASSERT_EQUAL_HEX16(0xff7f, virtualLeds);
 }

/* Test that LED memory is not readable */
void test_led_memory_is_not_readable(void){
    virtualLeds = 0xffff;
    LedDriver_TurnOn(8);
    TEST_ASSERT_EQUAL_HEX16(0x80, virtualLeds);
}

/* Test boundaries */
void test_upper_and_lower_bounds(void){
    LedDriver_TurnOn(1);
    LedDriver_TurnOn(16);
    TEST_ASSERT_EQUAL_HEX16(0x8001, virtualLeds);
}

/* Test out of bounds */
void test_out_of_bounds_turn_on_does_no_harm(void){
    LedDriver_TurnOn(-1);
    LedDriver_TurnOn(0);
    LedDriver_TurnOn(17);
    LedDriver_TurnOn(3141);

    TEST_ASSERT_EQUAL_HEX16(0, virtualLeds);
}

/* Test out of bounds */
void test_out_of_bounds_turn_off_does_no_harm(void){
    LedDriver_TurnAllOn();
    LedDriver_TurnOff(-1);
    LedDriver_TurnOff(0);
    LedDriver_TurnOff(17);
    LedDriver_TurnOff(3141);
    //LedDriver_TurnOff(8);
    TEST_ASSERT_EQUAL_HEX16(0xFFFF, virtualLeds);
}

/* Test runtime error */
void test_out_of_bounds_produce_runtime_error(void){
  LedDriver_TurnOn(-1);
  TEST_ASSERT_EQUAL_STRING("LED Driver: out-of-bounds LED",
                            RuntimeErrorStub_GetLastError());
  TEST_ASSERT_EQUAL(-1, RuntimeErrorStub_GetLastParameter());
}


/* Ignore test */
void test_out_of_bounds_to_do(void){
    // TODO: what should we do during runtime?
    TEST_IGNORE_MESSAGE("Implement me!");
}
