#include "init.h"

#include <stdint.h>
#include <stdbool.h>

#include "inc/tm4c123gh6pm.h"
#include "inc/hw_memmap.h"

#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"

void init(void){
	// Configure clock
	//
	// Enable the GPIO port that is used for the on-board LED.
    //SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOG);
    // Check if the peripheral access is enabled.
    //while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOG)){}
    // Enable the GPIO pin for the LED (PG2).  Set the direction as output, and
    // enable the GPIO pin for digital function.
    GPIOPinTypeGPIOOutput(GPIO_PORTG_BASE, GPIO_PIN_2);
}