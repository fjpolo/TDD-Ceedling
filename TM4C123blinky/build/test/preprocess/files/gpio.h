extern void GPIODirModeSet(uint32_t ui32Port, uint8_t ui8Pins,

                           uint32_t ui32PinIO);

extern uint32_t GPIODirModeGet(uint32_t ui32Port, uint8_t ui8Pin);

extern void GPIOIntTypeSet(uint32_t ui32Port, uint8_t ui8Pins,

                           uint32_t ui32IntType);

extern uint32_t GPIOIntTypeGet(uint32_t ui32Port, uint8_t ui8Pin);

extern void GPIOPadConfigSet(uint32_t ui32Port, uint8_t ui8Pins,

                             uint32_t ui32Strength, uint32_t ui32PadType);

extern void GPIOPadConfigGet(uint32_t ui32Port, uint8_t ui8Pin,

                             uint32_t *pui32Strength, uint32_t *pui32PadType);

extern void GPIOIntEnable(uint32_t ui32Port, uint32_t ui32IntFlags);

extern void GPIOIntDisable(uint32_t ui32Port, uint32_t ui32IntFlags);

extern uint32_t GPIOIntStatus(uint32_t ui32Port, bool bMasked);

extern void GPIOIntClear(uint32_t ui32Port, uint32_t ui32IntFlags);

extern void GPIOIntRegister(uint32_t ui32Port, void (*pfnIntHandler)(void));

extern void GPIOIntUnregister(uint32_t ui32Port);

extern void GPIOIntRegisterPin(uint32_t ui32Port, uint32_t ui32Pin,

                               void (*pfnIntHandler)(void));

extern void GPIOIntUnregisterPin(uint32_t ui32Port, uint32_t ui32Pin);

extern int32_t GPIOPinRead(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinWrite(uint32_t ui32Port, uint8_t ui8Pins, uint8_t ui8Val);

extern void GPIOPinConfigure(uint32_t ui32PinConfig);

extern void GPIOPinTypeADC(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeCAN(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeComparator(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeComparatorOutput(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeDIVSCLK(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeEPI(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeEthernetLED(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeEthernetMII(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeGPIOInput(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeGPIOOutput(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeGPIOOutputOD(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeHibernateRTCCLK(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeI2C(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeI2CSCL(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeLCD(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeOneWire(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypePWM(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeQEI(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeSSI(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeTimer(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeTrace(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeUART(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeUSBAnalog(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeUSBDigital(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeWakeHigh(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOPinTypeWakeLow(uint32_t ui32Port, uint8_t ui8Pins);

extern uint32_t GPIOPinWakeStatus(uint32_t ui32Port);

extern void GPIODMATriggerEnable(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIODMATriggerDisable(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOADCTriggerEnable(uint32_t ui32Port, uint8_t ui8Pins);

extern void GPIOADCTriggerDisable(uint32_t ui32Port, uint8_t ui8Pins);
