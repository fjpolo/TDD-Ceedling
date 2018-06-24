/* ANSI C */
#include <stdio.h>
#include <stdint.h>

/* LED */
#include "led.h"

/* Runtime ERROR */
#include "RuntimeError.h"

/* Global declarations */
enum {ALL_LEDS_ON = ~0, ALL_LEDS_OFF = ~ALL_LEDS_ON};
static uint16_t * ledsAddress;
static uint16_t ledsImage;

/* CREATOR */
void LedDriver_Create(uint16_t * address)
{
  ledsAddress = address;
  ledsImage = ALL_LEDS_OFF;
  *ledsAddress = ledsImage;
}

/* DESTROYER */
void LedDriver_Destroy(void)
{
}

/* Conver LED number to BIT */
static uint16_t convertLedNumberToBit(int ledNumber)
{
    return 1 << (ledNumber - 1);
}

/* Updates HW address */
static void updateHardware(void)
{
    *ledsAddress = ledsImage;
}

/*Turn LED on*/
void LedDriver_TurnOn(int ledNumber)
{
  if (ledNumber <= 0 || ledNumber > 16){
    RUNTIME_ERROR("LED Driver: out-of-bounds LED", ledNumber);
    return;
  }
  ledsImage |= convertLedNumberToBit(ledNumber);
  updateHardware();
}

/*Turn LED off*/
void LedDriver_TurnOff(int ledNumber)
{

    if (ledNumber <= 0 || ledNumber > 16){
        RUNTIME_ERROR("LED Driver: out-of-bounds LED", ledNumber);
        return;
    }
    ledsImage &= ~(convertLedNumberToBit(ledNumber));
    updateHardware();
}

/*Turn all LEDs on*/
void LedDriver_TurnAllOn(void)
{
    ledsImage = ALL_LEDS_ON;
    updateHardware();
}
