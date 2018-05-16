extern uint32_t SysCtlSRAMSizeGet(void);

extern uint32_t SysCtlFlashSizeGet(void);

extern uint32_t SysCtlFlashSectorSizeGet(void);

extern bool SysCtlPeripheralPresent(uint32_t ui32Peripheral);

extern bool SysCtlPeripheralReady(uint32_t ui32Peripheral);

extern void SysCtlPeripheralPowerOn(uint32_t ui32Peripheral);

extern void SysCtlPeripheralPowerOff(uint32_t ui32Peripheral);

extern void SysCtlPeripheralReset(uint32_t ui32Peripheral);

extern void SysCtlPeripheralEnable(uint32_t ui32Peripheral);

extern void SysCtlPeripheralDisable(uint32_t ui32Peripheral);

extern void SysCtlPeripheralSleepEnable(uint32_t ui32Peripheral);

extern void SysCtlPeripheralSleepDisable(uint32_t ui32Peripheral);

extern void SysCtlPeripheralDeepSleepEnable(uint32_t ui32Peripheral);

extern void SysCtlPeripheralDeepSleepDisable(uint32_t ui32Peripheral);

extern void SysCtlPeripheralClockGating(bool bEnable);

extern void SysCtlIntRegister(void (*pfnHandler)(void));

extern void SysCtlIntUnregister(void);

extern void SysCtlIntEnable(uint32_t ui32Ints);

extern void SysCtlIntDisable(uint32_t ui32Ints);

extern void SysCtlIntClear(uint32_t ui32Ints);

extern uint32_t SysCtlIntStatus(bool bMasked);

extern void SysCtlLDOSleepSet(uint32_t ui32Voltage);

extern uint32_t SysCtlLDOSleepGet(void);

extern void SysCtlLDODeepSleepSet(uint32_t ui32Voltage);

extern uint32_t SysCtlLDODeepSleepGet(void);

extern void SysCtlSleepPowerSet(uint32_t ui32Config);

extern void SysCtlDeepSleepPowerSet(uint32_t ui32Config);

extern void SysCtlReset(void);

extern void SysCtlSleep(void);

extern void SysCtlDeepSleep(void);

extern uint32_t SysCtlResetCauseGet(void);

extern void SysCtlResetCauseClear(uint32_t ui32Causes);

extern void SysCtlBrownOutConfigSet(uint32_t ui32Config,

                                    uint32_t ui32Delay);

extern void SysCtlDelay(uint32_t ui32Count);

extern void SysCtlMOSCConfigSet(uint32_t ui32Config);

extern uint32_t SysCtlPIOSCCalibrate(uint32_t ui32Type);

extern void SysCtlClockSet(uint32_t ui32Config);

extern uint32_t SysCtlClockGet(void);

extern void SysCtlDeepSleepClockSet(uint32_t ui32Config);

extern void SysCtlDeepSleepClockConfigSet(uint32_t ui32Div,

                                          uint32_t ui32Config);

extern void SysCtlPWMClockSet(uint32_t ui32Config);

extern uint32_t SysCtlPWMClockGet(void);

extern void SysCtlIOSCVerificationSet(bool bEnable);

extern void SysCtlMOSCVerificationSet(bool bEnable);

extern void SysCtlPLLVerificationSet(bool bEnable);

extern void SysCtlClkVerificationClear(void);

extern void SysCtlGPIOAHBEnable(uint32_t ui32GPIOPeripheral);

extern void SysCtlGPIOAHBDisable(uint32_t ui32GPIOPeripheral);

extern void SysCtlUSBPLLEnable(void);

extern void SysCtlUSBPLLDisable(void);

extern uint32_t SysCtlClockFreqSet(uint32_t ui32Config,

                                   uint32_t ui32SysClock);

extern void SysCtlResetBehaviorSet(uint32_t ui32Behavior);

extern uint32_t SysCtlResetBehaviorGet(void);

extern void SysCtlClockOutConfig(uint32_t ui32Config, uint32_t ui32Div);

extern void SysCtlAltClkConfig(uint32_t ui32Config);

extern uint32_t SysCtlNMIStatus(void);

extern void SysCtlNMIClear(uint32_t ui32Status);

extern void SysCtlVoltageEventConfig(uint32_t ui32Config);

extern uint32_t SysCtlVoltageEventStatus(void);

extern void SysCtlVoltageEventClear(uint32_t ui32Status);

extern bool SysCtlVCOGet(uint32_t ui32Crystal, uint32_t *pui32VCOFrequency);
