#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"

unsigned long int _MSDELAY_BASE;
unsigned long int _USDELAY_BASE;

void delayMS(unsigned long int ms){
	_MSDELAY_BASE = (SysCtlClockGet()/3)/1000;
	SysCtlDelay(ms * _MSDELAY_BASE);
}
/*
 * Tiene un error de 1.32 uS
 * Mínimo tiempo de delay 3 uS (ejecuta 3 + 1.32 = 4.36)
 *
 * */
void delayUS(unsigned long int us){
	_USDELAY_BASE = _MSDELAY_BASE/1000;
	SysCtlDelay(us * _USDELAY_BASE);
}
