#ifndef _LED_H
#define _LED_H

void LedDriver_Create(uint16_t * address);
void LedDriver_Destroy(void);
static uint16_t convertLedNumberToBit(int ledNumber);
static void updateHardware(void);
void LedDriver_TurnOn(int ledNumber);
void LedDriver_TurnOff(int ledNumber);
void LedDriver_TurnAllOn(void);

#endif // _LED_H
