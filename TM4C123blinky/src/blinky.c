//*****************************************************************************
//
// blinky.c - Simple example to blink the on-board LED.
//
// Copyright (c) 2011-2015 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
//
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
//
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
//
// This is part of revision 2.1.2.111 of the DK-TM4C123G Firmware Package.
//
//*****************************************************************************

// standard C
#include <stdint.h>
#include <stdbool.h>
// inc
#include "inc/hw_memmap.h"
// driverlib
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
// custom
#include "led.h"
#include "init.h"

//*****************************************************************************
//
//! \addtogroup example_list
//! <h1>Blinky (blinky)</h1>
//!
//! A very simple example that blinks the on-board LED.
//
//*****************************************************************************

//*****************************************************************************
//
// Blink the on-board LED.
//
//*****************************************************************************
int
main(void)
{
	// Initialization
	init();
    // Loop forever.
    while(1)
    {
        // Turn on the LED.
        led_turn_on();
        // Delay for a bit.
        delay();
        // Turn off the LED.
        led_turn_off();
        // Delay for a bit.
		delay();
    }
}

// Delay
void delay(void){
	volatile uint32_t ui32Loop;
	//
	for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++){}
}
