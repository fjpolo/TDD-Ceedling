/*******************************************************************************
 *    INCLUDED FILES
 ******************************************************************************/

//-- unity: unit test framework
#include "unity.h"

//-- module under test 
#include "led.h"

//-- other modules
#include "inc/hw_memmap.h"

//-- mocks
#include "mock_gpio.h"  // This will mock the functions in driverlib/gpio.h.

/*******************************************************************************
 *    DEFINITIONS
 ******************************************************************************/
 
/*******************************************************************************
 *    PRIVATE TYPES
 ******************************************************************************/
 
/*******************************************************************************
 *    PRIVATE DATA
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE FUNCTIONS
 ******************************************************************************/
 
/*******************************************************************************
 *    SETUP 
 ******************************************************************************/
void setUp(void)
{
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

// Since the LED on our board is connectted to pin 2 of port F, 
//we might want to test that our led_turn_on function uses GPIOPinWrite 
//to set pin 2 of port F.
void test_when_the_led_is_turned_on_then_port_f_pin_2_is_set(void)
{
    // Expect PORTF pin 2 to be set.
    GPIOPinWrite_Expect(GPIO_PORTF_BASE, GPIO_PIN_2, GPIO_PIN_2);

    // Call the function under test.
    led_turn_on();
}

// Since the LED on our board is connectted to pin 2 of port F, 
//we might want to test that our led_turn_off function uses GPIOPinWrite 
//to write 0 at pin 2 of port F.
void test_when_the_led_is_turned_off_then_port_f_pin_2_is_set_to_zero(void)
{
    // Expect PORTF pin 2 to be set.
    GPIOPinWrite_Expect(GPIO_PORTF_BASE, GPIO_PIN_2, 0);

    // Call the function under test.
    led_turn_off();
}