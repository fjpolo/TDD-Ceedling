/*******************************************************************************
 *    INCLUDED FILES
 ******************************************************************************/

//-- unity: unit test framework
#include "unity.h"

//-- module under test
#include "init.h"

//-- other modules
#include <stdint.h>
#include <stdbool.h>
#include "inc/tm4c123gh6pm.h"
#include "inc/hw_memmap.h"
#include "driverlib/pin_map.h"

//-- mock modules
#include "mock_sysctl.h"   // This will mock the functions in driverlib/sysctl.h.
#include "mock_gpio.h"    // This will mock the functions in driverlib/gpio.h.

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

 /*
// test if PORT G is enabled
void test_enable_port_g(void){
	SysCtlPeripheralEnable_Expect(SYSCTL_PERIPH_GPIOG);
	init();
}
*/
/*
// test if PORT G is configured as output
void test_port_g_output(){
	GPIOPinTypeGPIOOutput_Expect(GPIO_PORTG_BASE, GPIO_PIN_2);
	init();
}
*/

//

void test_when_init_gpio_output(void){
	//TODO
  //GPIOPinTypeGPIOOutput_Expect(GPIO_PIN_2, GPIO_PIN_2);
  //
  //init();
}
