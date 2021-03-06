/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_SYSCTL_H
#define _MOCK_SYSCTL_H

#include <stdbool.h>
#include <stdint.h>
#include "sysctl.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#pragma GCC diagnostic push
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_sysctl_Init(void);
void mock_sysctl_Destroy(void);
void mock_sysctl_Verify(void);


typedef void(*cmock_sysctl_func_ptr1)(void);


#define SysCtlSRAMSizeGet_IgnoreAndReturn(cmock_retval) SysCtlSRAMSizeGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlSRAMSizeGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlSRAMSizeGet_ExpectAndReturn(cmock_retval) SysCtlSRAMSizeGet_CMockExpectAndReturn(__LINE__, cmock_retval)
void SysCtlSRAMSizeGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlSRAMSizeGet_CALLBACK)(int cmock_num_calls);
void SysCtlSRAMSizeGet_StubWithCallback(CMOCK_SysCtlSRAMSizeGet_CALLBACK Callback);
#define SysCtlFlashSizeGet_IgnoreAndReturn(cmock_retval) SysCtlFlashSizeGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlFlashSizeGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlFlashSizeGet_ExpectAndReturn(cmock_retval) SysCtlFlashSizeGet_CMockExpectAndReturn(__LINE__, cmock_retval)
void SysCtlFlashSizeGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlFlashSizeGet_CALLBACK)(int cmock_num_calls);
void SysCtlFlashSizeGet_StubWithCallback(CMOCK_SysCtlFlashSizeGet_CALLBACK Callback);
#define SysCtlFlashSectorSizeGet_IgnoreAndReturn(cmock_retval) SysCtlFlashSectorSizeGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlFlashSectorSizeGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlFlashSectorSizeGet_ExpectAndReturn(cmock_retval) SysCtlFlashSectorSizeGet_CMockExpectAndReturn(__LINE__, cmock_retval)
void SysCtlFlashSectorSizeGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlFlashSectorSizeGet_CALLBACK)(int cmock_num_calls);
void SysCtlFlashSectorSizeGet_StubWithCallback(CMOCK_SysCtlFlashSectorSizeGet_CALLBACK Callback);
#define SysCtlPeripheralPresent_IgnoreAndReturn(cmock_retval) SysCtlPeripheralPresent_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlPeripheralPresent_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define SysCtlPeripheralPresent_ExpectAndReturn(ui32Peripheral, cmock_retval) SysCtlPeripheralPresent_CMockExpectAndReturn(__LINE__, ui32Peripheral, cmock_retval)
void SysCtlPeripheralPresent_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Peripheral, bool cmock_to_return);
typedef bool (* CMOCK_SysCtlPeripheralPresent_CALLBACK)(uint32_t ui32Peripheral, int cmock_num_calls);
void SysCtlPeripheralPresent_StubWithCallback(CMOCK_SysCtlPeripheralPresent_CALLBACK Callback);
#define SysCtlPeripheralReady_IgnoreAndReturn(cmock_retval) SysCtlPeripheralReady_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlPeripheralReady_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define SysCtlPeripheralReady_ExpectAndReturn(ui32Peripheral, cmock_retval) SysCtlPeripheralReady_CMockExpectAndReturn(__LINE__, ui32Peripheral, cmock_retval)
void SysCtlPeripheralReady_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Peripheral, bool cmock_to_return);
typedef bool (* CMOCK_SysCtlPeripheralReady_CALLBACK)(uint32_t ui32Peripheral, int cmock_num_calls);
void SysCtlPeripheralReady_StubWithCallback(CMOCK_SysCtlPeripheralReady_CALLBACK Callback);
#define SysCtlPeripheralPowerOn_Ignore() SysCtlPeripheralPowerOn_CMockIgnore()
void SysCtlPeripheralPowerOn_CMockIgnore(void);
#define SysCtlPeripheralPowerOn_Expect(ui32Peripheral) SysCtlPeripheralPowerOn_CMockExpect(__LINE__, ui32Peripheral)
void SysCtlPeripheralPowerOn_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Peripheral);
typedef void (* CMOCK_SysCtlPeripheralPowerOn_CALLBACK)(uint32_t ui32Peripheral, int cmock_num_calls);
void SysCtlPeripheralPowerOn_StubWithCallback(CMOCK_SysCtlPeripheralPowerOn_CALLBACK Callback);
#define SysCtlPeripheralPowerOff_Ignore() SysCtlPeripheralPowerOff_CMockIgnore()
void SysCtlPeripheralPowerOff_CMockIgnore(void);
#define SysCtlPeripheralPowerOff_Expect(ui32Peripheral) SysCtlPeripheralPowerOff_CMockExpect(__LINE__, ui32Peripheral)
void SysCtlPeripheralPowerOff_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Peripheral);
typedef void (* CMOCK_SysCtlPeripheralPowerOff_CALLBACK)(uint32_t ui32Peripheral, int cmock_num_calls);
void SysCtlPeripheralPowerOff_StubWithCallback(CMOCK_SysCtlPeripheralPowerOff_CALLBACK Callback);
#define SysCtlPeripheralReset_Ignore() SysCtlPeripheralReset_CMockIgnore()
void SysCtlPeripheralReset_CMockIgnore(void);
#define SysCtlPeripheralReset_Expect(ui32Peripheral) SysCtlPeripheralReset_CMockExpect(__LINE__, ui32Peripheral)
void SysCtlPeripheralReset_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Peripheral);
typedef void (* CMOCK_SysCtlPeripheralReset_CALLBACK)(uint32_t ui32Peripheral, int cmock_num_calls);
void SysCtlPeripheralReset_StubWithCallback(CMOCK_SysCtlPeripheralReset_CALLBACK Callback);
#define SysCtlPeripheralEnable_Ignore() SysCtlPeripheralEnable_CMockIgnore()
void SysCtlPeripheralEnable_CMockIgnore(void);
#define SysCtlPeripheralEnable_Expect(ui32Peripheral) SysCtlPeripheralEnable_CMockExpect(__LINE__, ui32Peripheral)
void SysCtlPeripheralEnable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Peripheral);
typedef void (* CMOCK_SysCtlPeripheralEnable_CALLBACK)(uint32_t ui32Peripheral, int cmock_num_calls);
void SysCtlPeripheralEnable_StubWithCallback(CMOCK_SysCtlPeripheralEnable_CALLBACK Callback);
#define SysCtlPeripheralDisable_Ignore() SysCtlPeripheralDisable_CMockIgnore()
void SysCtlPeripheralDisable_CMockIgnore(void);
#define SysCtlPeripheralDisable_Expect(ui32Peripheral) SysCtlPeripheralDisable_CMockExpect(__LINE__, ui32Peripheral)
void SysCtlPeripheralDisable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Peripheral);
typedef void (* CMOCK_SysCtlPeripheralDisable_CALLBACK)(uint32_t ui32Peripheral, int cmock_num_calls);
void SysCtlPeripheralDisable_StubWithCallback(CMOCK_SysCtlPeripheralDisable_CALLBACK Callback);
#define SysCtlPeripheralSleepEnable_Ignore() SysCtlPeripheralSleepEnable_CMockIgnore()
void SysCtlPeripheralSleepEnable_CMockIgnore(void);
#define SysCtlPeripheralSleepEnable_Expect(ui32Peripheral) SysCtlPeripheralSleepEnable_CMockExpect(__LINE__, ui32Peripheral)
void SysCtlPeripheralSleepEnable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Peripheral);
typedef void (* CMOCK_SysCtlPeripheralSleepEnable_CALLBACK)(uint32_t ui32Peripheral, int cmock_num_calls);
void SysCtlPeripheralSleepEnable_StubWithCallback(CMOCK_SysCtlPeripheralSleepEnable_CALLBACK Callback);
#define SysCtlPeripheralSleepDisable_Ignore() SysCtlPeripheralSleepDisable_CMockIgnore()
void SysCtlPeripheralSleepDisable_CMockIgnore(void);
#define SysCtlPeripheralSleepDisable_Expect(ui32Peripheral) SysCtlPeripheralSleepDisable_CMockExpect(__LINE__, ui32Peripheral)
void SysCtlPeripheralSleepDisable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Peripheral);
typedef void (* CMOCK_SysCtlPeripheralSleepDisable_CALLBACK)(uint32_t ui32Peripheral, int cmock_num_calls);
void SysCtlPeripheralSleepDisable_StubWithCallback(CMOCK_SysCtlPeripheralSleepDisable_CALLBACK Callback);
#define SysCtlPeripheralDeepSleepEnable_Ignore() SysCtlPeripheralDeepSleepEnable_CMockIgnore()
void SysCtlPeripheralDeepSleepEnable_CMockIgnore(void);
#define SysCtlPeripheralDeepSleepEnable_Expect(ui32Peripheral) SysCtlPeripheralDeepSleepEnable_CMockExpect(__LINE__, ui32Peripheral)
void SysCtlPeripheralDeepSleepEnable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Peripheral);
typedef void (* CMOCK_SysCtlPeripheralDeepSleepEnable_CALLBACK)(uint32_t ui32Peripheral, int cmock_num_calls);
void SysCtlPeripheralDeepSleepEnable_StubWithCallback(CMOCK_SysCtlPeripheralDeepSleepEnable_CALLBACK Callback);
#define SysCtlPeripheralDeepSleepDisable_Ignore() SysCtlPeripheralDeepSleepDisable_CMockIgnore()
void SysCtlPeripheralDeepSleepDisable_CMockIgnore(void);
#define SysCtlPeripheralDeepSleepDisable_Expect(ui32Peripheral) SysCtlPeripheralDeepSleepDisable_CMockExpect(__LINE__, ui32Peripheral)
void SysCtlPeripheralDeepSleepDisable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Peripheral);
typedef void (* CMOCK_SysCtlPeripheralDeepSleepDisable_CALLBACK)(uint32_t ui32Peripheral, int cmock_num_calls);
void SysCtlPeripheralDeepSleepDisable_StubWithCallback(CMOCK_SysCtlPeripheralDeepSleepDisable_CALLBACK Callback);
#define SysCtlPeripheralClockGating_Ignore() SysCtlPeripheralClockGating_CMockIgnore()
void SysCtlPeripheralClockGating_CMockIgnore(void);
#define SysCtlPeripheralClockGating_Expect(bEnable) SysCtlPeripheralClockGating_CMockExpect(__LINE__, bEnable)
void SysCtlPeripheralClockGating_CMockExpect(UNITY_LINE_TYPE cmock_line, bool bEnable);
typedef void (* CMOCK_SysCtlPeripheralClockGating_CALLBACK)(bool bEnable, int cmock_num_calls);
void SysCtlPeripheralClockGating_StubWithCallback(CMOCK_SysCtlPeripheralClockGating_CALLBACK Callback);
#define SysCtlIntRegister_Ignore() SysCtlIntRegister_CMockIgnore()
void SysCtlIntRegister_CMockIgnore(void);
#define SysCtlIntRegister_Expect(pfnHandler) SysCtlIntRegister_CMockExpect(__LINE__, pfnHandler)
void SysCtlIntRegister_CMockExpect(UNITY_LINE_TYPE cmock_line, cmock_sysctl_func_ptr1 pfnHandler);
typedef void (* CMOCK_SysCtlIntRegister_CALLBACK)(cmock_sysctl_func_ptr1 pfnHandler, int cmock_num_calls);
void SysCtlIntRegister_StubWithCallback(CMOCK_SysCtlIntRegister_CALLBACK Callback);
#define SysCtlIntUnregister_Ignore() SysCtlIntUnregister_CMockIgnore()
void SysCtlIntUnregister_CMockIgnore(void);
#define SysCtlIntUnregister_Expect() SysCtlIntUnregister_CMockExpect(__LINE__)
void SysCtlIntUnregister_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_SysCtlIntUnregister_CALLBACK)(int cmock_num_calls);
void SysCtlIntUnregister_StubWithCallback(CMOCK_SysCtlIntUnregister_CALLBACK Callback);
#define SysCtlIntEnable_Ignore() SysCtlIntEnable_CMockIgnore()
void SysCtlIntEnable_CMockIgnore(void);
#define SysCtlIntEnable_Expect(ui32Ints) SysCtlIntEnable_CMockExpect(__LINE__, ui32Ints)
void SysCtlIntEnable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Ints);
typedef void (* CMOCK_SysCtlIntEnable_CALLBACK)(uint32_t ui32Ints, int cmock_num_calls);
void SysCtlIntEnable_StubWithCallback(CMOCK_SysCtlIntEnable_CALLBACK Callback);
#define SysCtlIntDisable_Ignore() SysCtlIntDisable_CMockIgnore()
void SysCtlIntDisable_CMockIgnore(void);
#define SysCtlIntDisable_Expect(ui32Ints) SysCtlIntDisable_CMockExpect(__LINE__, ui32Ints)
void SysCtlIntDisable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Ints);
typedef void (* CMOCK_SysCtlIntDisable_CALLBACK)(uint32_t ui32Ints, int cmock_num_calls);
void SysCtlIntDisable_StubWithCallback(CMOCK_SysCtlIntDisable_CALLBACK Callback);
#define SysCtlIntClear_Ignore() SysCtlIntClear_CMockIgnore()
void SysCtlIntClear_CMockIgnore(void);
#define SysCtlIntClear_Expect(ui32Ints) SysCtlIntClear_CMockExpect(__LINE__, ui32Ints)
void SysCtlIntClear_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Ints);
typedef void (* CMOCK_SysCtlIntClear_CALLBACK)(uint32_t ui32Ints, int cmock_num_calls);
void SysCtlIntClear_StubWithCallback(CMOCK_SysCtlIntClear_CALLBACK Callback);
#define SysCtlIntStatus_IgnoreAndReturn(cmock_retval) SysCtlIntStatus_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlIntStatus_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlIntStatus_ExpectAndReturn(bMasked, cmock_retval) SysCtlIntStatus_CMockExpectAndReturn(__LINE__, bMasked, cmock_retval)
void SysCtlIntStatus_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool bMasked, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlIntStatus_CALLBACK)(bool bMasked, int cmock_num_calls);
void SysCtlIntStatus_StubWithCallback(CMOCK_SysCtlIntStatus_CALLBACK Callback);
#define SysCtlLDOSleepSet_Ignore() SysCtlLDOSleepSet_CMockIgnore()
void SysCtlLDOSleepSet_CMockIgnore(void);
#define SysCtlLDOSleepSet_Expect(ui32Voltage) SysCtlLDOSleepSet_CMockExpect(__LINE__, ui32Voltage)
void SysCtlLDOSleepSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Voltage);
typedef void (* CMOCK_SysCtlLDOSleepSet_CALLBACK)(uint32_t ui32Voltage, int cmock_num_calls);
void SysCtlLDOSleepSet_StubWithCallback(CMOCK_SysCtlLDOSleepSet_CALLBACK Callback);
#define SysCtlLDOSleepGet_IgnoreAndReturn(cmock_retval) SysCtlLDOSleepGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlLDOSleepGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlLDOSleepGet_ExpectAndReturn(cmock_retval) SysCtlLDOSleepGet_CMockExpectAndReturn(__LINE__, cmock_retval)
void SysCtlLDOSleepGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlLDOSleepGet_CALLBACK)(int cmock_num_calls);
void SysCtlLDOSleepGet_StubWithCallback(CMOCK_SysCtlLDOSleepGet_CALLBACK Callback);
#define SysCtlLDODeepSleepSet_Ignore() SysCtlLDODeepSleepSet_CMockIgnore()
void SysCtlLDODeepSleepSet_CMockIgnore(void);
#define SysCtlLDODeepSleepSet_Expect(ui32Voltage) SysCtlLDODeepSleepSet_CMockExpect(__LINE__, ui32Voltage)
void SysCtlLDODeepSleepSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Voltage);
typedef void (* CMOCK_SysCtlLDODeepSleepSet_CALLBACK)(uint32_t ui32Voltage, int cmock_num_calls);
void SysCtlLDODeepSleepSet_StubWithCallback(CMOCK_SysCtlLDODeepSleepSet_CALLBACK Callback);
#define SysCtlLDODeepSleepGet_IgnoreAndReturn(cmock_retval) SysCtlLDODeepSleepGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlLDODeepSleepGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlLDODeepSleepGet_ExpectAndReturn(cmock_retval) SysCtlLDODeepSleepGet_CMockExpectAndReturn(__LINE__, cmock_retval)
void SysCtlLDODeepSleepGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlLDODeepSleepGet_CALLBACK)(int cmock_num_calls);
void SysCtlLDODeepSleepGet_StubWithCallback(CMOCK_SysCtlLDODeepSleepGet_CALLBACK Callback);
#define SysCtlSleepPowerSet_Ignore() SysCtlSleepPowerSet_CMockIgnore()
void SysCtlSleepPowerSet_CMockIgnore(void);
#define SysCtlSleepPowerSet_Expect(ui32Config) SysCtlSleepPowerSet_CMockExpect(__LINE__, ui32Config)
void SysCtlSleepPowerSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Config);
typedef void (* CMOCK_SysCtlSleepPowerSet_CALLBACK)(uint32_t ui32Config, int cmock_num_calls);
void SysCtlSleepPowerSet_StubWithCallback(CMOCK_SysCtlSleepPowerSet_CALLBACK Callback);
#define SysCtlDeepSleepPowerSet_Ignore() SysCtlDeepSleepPowerSet_CMockIgnore()
void SysCtlDeepSleepPowerSet_CMockIgnore(void);
#define SysCtlDeepSleepPowerSet_Expect(ui32Config) SysCtlDeepSleepPowerSet_CMockExpect(__LINE__, ui32Config)
void SysCtlDeepSleepPowerSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Config);
typedef void (* CMOCK_SysCtlDeepSleepPowerSet_CALLBACK)(uint32_t ui32Config, int cmock_num_calls);
void SysCtlDeepSleepPowerSet_StubWithCallback(CMOCK_SysCtlDeepSleepPowerSet_CALLBACK Callback);
#define SysCtlReset_Ignore() SysCtlReset_CMockIgnore()
void SysCtlReset_CMockIgnore(void);
#define SysCtlReset_Expect() SysCtlReset_CMockExpect(__LINE__)
void SysCtlReset_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_SysCtlReset_CALLBACK)(int cmock_num_calls);
void SysCtlReset_StubWithCallback(CMOCK_SysCtlReset_CALLBACK Callback);
#define SysCtlSleep_Ignore() SysCtlSleep_CMockIgnore()
void SysCtlSleep_CMockIgnore(void);
#define SysCtlSleep_Expect() SysCtlSleep_CMockExpect(__LINE__)
void SysCtlSleep_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_SysCtlSleep_CALLBACK)(int cmock_num_calls);
void SysCtlSleep_StubWithCallback(CMOCK_SysCtlSleep_CALLBACK Callback);
#define SysCtlDeepSleep_Ignore() SysCtlDeepSleep_CMockIgnore()
void SysCtlDeepSleep_CMockIgnore(void);
#define SysCtlDeepSleep_Expect() SysCtlDeepSleep_CMockExpect(__LINE__)
void SysCtlDeepSleep_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_SysCtlDeepSleep_CALLBACK)(int cmock_num_calls);
void SysCtlDeepSleep_StubWithCallback(CMOCK_SysCtlDeepSleep_CALLBACK Callback);
#define SysCtlResetCauseGet_IgnoreAndReturn(cmock_retval) SysCtlResetCauseGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlResetCauseGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlResetCauseGet_ExpectAndReturn(cmock_retval) SysCtlResetCauseGet_CMockExpectAndReturn(__LINE__, cmock_retval)
void SysCtlResetCauseGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlResetCauseGet_CALLBACK)(int cmock_num_calls);
void SysCtlResetCauseGet_StubWithCallback(CMOCK_SysCtlResetCauseGet_CALLBACK Callback);
#define SysCtlResetCauseClear_Ignore() SysCtlResetCauseClear_CMockIgnore()
void SysCtlResetCauseClear_CMockIgnore(void);
#define SysCtlResetCauseClear_Expect(ui32Causes) SysCtlResetCauseClear_CMockExpect(__LINE__, ui32Causes)
void SysCtlResetCauseClear_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Causes);
typedef void (* CMOCK_SysCtlResetCauseClear_CALLBACK)(uint32_t ui32Causes, int cmock_num_calls);
void SysCtlResetCauseClear_StubWithCallback(CMOCK_SysCtlResetCauseClear_CALLBACK Callback);
#define SysCtlBrownOutConfigSet_Ignore() SysCtlBrownOutConfigSet_CMockIgnore()
void SysCtlBrownOutConfigSet_CMockIgnore(void);
#define SysCtlBrownOutConfigSet_Expect(ui32Config, ui32Delay) SysCtlBrownOutConfigSet_CMockExpect(__LINE__, ui32Config, ui32Delay)
void SysCtlBrownOutConfigSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Config, uint32_t ui32Delay);
typedef void (* CMOCK_SysCtlBrownOutConfigSet_CALLBACK)(uint32_t ui32Config, uint32_t ui32Delay, int cmock_num_calls);
void SysCtlBrownOutConfigSet_StubWithCallback(CMOCK_SysCtlBrownOutConfigSet_CALLBACK Callback);
#define SysCtlDelay_Ignore() SysCtlDelay_CMockIgnore()
void SysCtlDelay_CMockIgnore(void);
#define SysCtlDelay_Expect(ui32Count) SysCtlDelay_CMockExpect(__LINE__, ui32Count)
void SysCtlDelay_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Count);
typedef void (* CMOCK_SysCtlDelay_CALLBACK)(uint32_t ui32Count, int cmock_num_calls);
void SysCtlDelay_StubWithCallback(CMOCK_SysCtlDelay_CALLBACK Callback);
#define SysCtlMOSCConfigSet_Ignore() SysCtlMOSCConfigSet_CMockIgnore()
void SysCtlMOSCConfigSet_CMockIgnore(void);
#define SysCtlMOSCConfigSet_Expect(ui32Config) SysCtlMOSCConfigSet_CMockExpect(__LINE__, ui32Config)
void SysCtlMOSCConfigSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Config);
typedef void (* CMOCK_SysCtlMOSCConfigSet_CALLBACK)(uint32_t ui32Config, int cmock_num_calls);
void SysCtlMOSCConfigSet_StubWithCallback(CMOCK_SysCtlMOSCConfigSet_CALLBACK Callback);
#define SysCtlPIOSCCalibrate_IgnoreAndReturn(cmock_retval) SysCtlPIOSCCalibrate_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlPIOSCCalibrate_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlPIOSCCalibrate_ExpectAndReturn(ui32Type, cmock_retval) SysCtlPIOSCCalibrate_CMockExpectAndReturn(__LINE__, ui32Type, cmock_retval)
void SysCtlPIOSCCalibrate_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Type, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlPIOSCCalibrate_CALLBACK)(uint32_t ui32Type, int cmock_num_calls);
void SysCtlPIOSCCalibrate_StubWithCallback(CMOCK_SysCtlPIOSCCalibrate_CALLBACK Callback);
#define SysCtlClockSet_Ignore() SysCtlClockSet_CMockIgnore()
void SysCtlClockSet_CMockIgnore(void);
#define SysCtlClockSet_Expect(ui32Config) SysCtlClockSet_CMockExpect(__LINE__, ui32Config)
void SysCtlClockSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Config);
typedef void (* CMOCK_SysCtlClockSet_CALLBACK)(uint32_t ui32Config, int cmock_num_calls);
void SysCtlClockSet_StubWithCallback(CMOCK_SysCtlClockSet_CALLBACK Callback);
#define SysCtlClockGet_IgnoreAndReturn(cmock_retval) SysCtlClockGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlClockGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlClockGet_ExpectAndReturn(cmock_retval) SysCtlClockGet_CMockExpectAndReturn(__LINE__, cmock_retval)
void SysCtlClockGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlClockGet_CALLBACK)(int cmock_num_calls);
void SysCtlClockGet_StubWithCallback(CMOCK_SysCtlClockGet_CALLBACK Callback);
#define SysCtlDeepSleepClockSet_Ignore() SysCtlDeepSleepClockSet_CMockIgnore()
void SysCtlDeepSleepClockSet_CMockIgnore(void);
#define SysCtlDeepSleepClockSet_Expect(ui32Config) SysCtlDeepSleepClockSet_CMockExpect(__LINE__, ui32Config)
void SysCtlDeepSleepClockSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Config);
typedef void (* CMOCK_SysCtlDeepSleepClockSet_CALLBACK)(uint32_t ui32Config, int cmock_num_calls);
void SysCtlDeepSleepClockSet_StubWithCallback(CMOCK_SysCtlDeepSleepClockSet_CALLBACK Callback);
#define SysCtlDeepSleepClockConfigSet_Ignore() SysCtlDeepSleepClockConfigSet_CMockIgnore()
void SysCtlDeepSleepClockConfigSet_CMockIgnore(void);
#define SysCtlDeepSleepClockConfigSet_Expect(ui32Div, ui32Config) SysCtlDeepSleepClockConfigSet_CMockExpect(__LINE__, ui32Div, ui32Config)
void SysCtlDeepSleepClockConfigSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Div, uint32_t ui32Config);
typedef void (* CMOCK_SysCtlDeepSleepClockConfigSet_CALLBACK)(uint32_t ui32Div, uint32_t ui32Config, int cmock_num_calls);
void SysCtlDeepSleepClockConfigSet_StubWithCallback(CMOCK_SysCtlDeepSleepClockConfigSet_CALLBACK Callback);
#define SysCtlPWMClockSet_Ignore() SysCtlPWMClockSet_CMockIgnore()
void SysCtlPWMClockSet_CMockIgnore(void);
#define SysCtlPWMClockSet_Expect(ui32Config) SysCtlPWMClockSet_CMockExpect(__LINE__, ui32Config)
void SysCtlPWMClockSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Config);
typedef void (* CMOCK_SysCtlPWMClockSet_CALLBACK)(uint32_t ui32Config, int cmock_num_calls);
void SysCtlPWMClockSet_StubWithCallback(CMOCK_SysCtlPWMClockSet_CALLBACK Callback);
#define SysCtlPWMClockGet_IgnoreAndReturn(cmock_retval) SysCtlPWMClockGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlPWMClockGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlPWMClockGet_ExpectAndReturn(cmock_retval) SysCtlPWMClockGet_CMockExpectAndReturn(__LINE__, cmock_retval)
void SysCtlPWMClockGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlPWMClockGet_CALLBACK)(int cmock_num_calls);
void SysCtlPWMClockGet_StubWithCallback(CMOCK_SysCtlPWMClockGet_CALLBACK Callback);
#define SysCtlIOSCVerificationSet_Ignore() SysCtlIOSCVerificationSet_CMockIgnore()
void SysCtlIOSCVerificationSet_CMockIgnore(void);
#define SysCtlIOSCVerificationSet_Expect(bEnable) SysCtlIOSCVerificationSet_CMockExpect(__LINE__, bEnable)
void SysCtlIOSCVerificationSet_CMockExpect(UNITY_LINE_TYPE cmock_line, bool bEnable);
typedef void (* CMOCK_SysCtlIOSCVerificationSet_CALLBACK)(bool bEnable, int cmock_num_calls);
void SysCtlIOSCVerificationSet_StubWithCallback(CMOCK_SysCtlIOSCVerificationSet_CALLBACK Callback);
#define SysCtlMOSCVerificationSet_Ignore() SysCtlMOSCVerificationSet_CMockIgnore()
void SysCtlMOSCVerificationSet_CMockIgnore(void);
#define SysCtlMOSCVerificationSet_Expect(bEnable) SysCtlMOSCVerificationSet_CMockExpect(__LINE__, bEnable)
void SysCtlMOSCVerificationSet_CMockExpect(UNITY_LINE_TYPE cmock_line, bool bEnable);
typedef void (* CMOCK_SysCtlMOSCVerificationSet_CALLBACK)(bool bEnable, int cmock_num_calls);
void SysCtlMOSCVerificationSet_StubWithCallback(CMOCK_SysCtlMOSCVerificationSet_CALLBACK Callback);
#define SysCtlPLLVerificationSet_Ignore() SysCtlPLLVerificationSet_CMockIgnore()
void SysCtlPLLVerificationSet_CMockIgnore(void);
#define SysCtlPLLVerificationSet_Expect(bEnable) SysCtlPLLVerificationSet_CMockExpect(__LINE__, bEnable)
void SysCtlPLLVerificationSet_CMockExpect(UNITY_LINE_TYPE cmock_line, bool bEnable);
typedef void (* CMOCK_SysCtlPLLVerificationSet_CALLBACK)(bool bEnable, int cmock_num_calls);
void SysCtlPLLVerificationSet_StubWithCallback(CMOCK_SysCtlPLLVerificationSet_CALLBACK Callback);
#define SysCtlClkVerificationClear_Ignore() SysCtlClkVerificationClear_CMockIgnore()
void SysCtlClkVerificationClear_CMockIgnore(void);
#define SysCtlClkVerificationClear_Expect() SysCtlClkVerificationClear_CMockExpect(__LINE__)
void SysCtlClkVerificationClear_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_SysCtlClkVerificationClear_CALLBACK)(int cmock_num_calls);
void SysCtlClkVerificationClear_StubWithCallback(CMOCK_SysCtlClkVerificationClear_CALLBACK Callback);
#define SysCtlGPIOAHBEnable_Ignore() SysCtlGPIOAHBEnable_CMockIgnore()
void SysCtlGPIOAHBEnable_CMockIgnore(void);
#define SysCtlGPIOAHBEnable_Expect(ui32GPIOPeripheral) SysCtlGPIOAHBEnable_CMockExpect(__LINE__, ui32GPIOPeripheral)
void SysCtlGPIOAHBEnable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32GPIOPeripheral);
typedef void (* CMOCK_SysCtlGPIOAHBEnable_CALLBACK)(uint32_t ui32GPIOPeripheral, int cmock_num_calls);
void SysCtlGPIOAHBEnable_StubWithCallback(CMOCK_SysCtlGPIOAHBEnable_CALLBACK Callback);
#define SysCtlGPIOAHBDisable_Ignore() SysCtlGPIOAHBDisable_CMockIgnore()
void SysCtlGPIOAHBDisable_CMockIgnore(void);
#define SysCtlGPIOAHBDisable_Expect(ui32GPIOPeripheral) SysCtlGPIOAHBDisable_CMockExpect(__LINE__, ui32GPIOPeripheral)
void SysCtlGPIOAHBDisable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32GPIOPeripheral);
typedef void (* CMOCK_SysCtlGPIOAHBDisable_CALLBACK)(uint32_t ui32GPIOPeripheral, int cmock_num_calls);
void SysCtlGPIOAHBDisable_StubWithCallback(CMOCK_SysCtlGPIOAHBDisable_CALLBACK Callback);
#define SysCtlUSBPLLEnable_Ignore() SysCtlUSBPLLEnable_CMockIgnore()
void SysCtlUSBPLLEnable_CMockIgnore(void);
#define SysCtlUSBPLLEnable_Expect() SysCtlUSBPLLEnable_CMockExpect(__LINE__)
void SysCtlUSBPLLEnable_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_SysCtlUSBPLLEnable_CALLBACK)(int cmock_num_calls);
void SysCtlUSBPLLEnable_StubWithCallback(CMOCK_SysCtlUSBPLLEnable_CALLBACK Callback);
#define SysCtlUSBPLLDisable_Ignore() SysCtlUSBPLLDisable_CMockIgnore()
void SysCtlUSBPLLDisable_CMockIgnore(void);
#define SysCtlUSBPLLDisable_Expect() SysCtlUSBPLLDisable_CMockExpect(__LINE__)
void SysCtlUSBPLLDisable_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_SysCtlUSBPLLDisable_CALLBACK)(int cmock_num_calls);
void SysCtlUSBPLLDisable_StubWithCallback(CMOCK_SysCtlUSBPLLDisable_CALLBACK Callback);
#define SysCtlClockFreqSet_IgnoreAndReturn(cmock_retval) SysCtlClockFreqSet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlClockFreqSet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlClockFreqSet_ExpectAndReturn(ui32Config, ui32SysClock, cmock_retval) SysCtlClockFreqSet_CMockExpectAndReturn(__LINE__, ui32Config, ui32SysClock, cmock_retval)
void SysCtlClockFreqSet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Config, uint32_t ui32SysClock, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlClockFreqSet_CALLBACK)(uint32_t ui32Config, uint32_t ui32SysClock, int cmock_num_calls);
void SysCtlClockFreqSet_StubWithCallback(CMOCK_SysCtlClockFreqSet_CALLBACK Callback);
#define SysCtlResetBehaviorSet_Ignore() SysCtlResetBehaviorSet_CMockIgnore()
void SysCtlResetBehaviorSet_CMockIgnore(void);
#define SysCtlResetBehaviorSet_Expect(ui32Behavior) SysCtlResetBehaviorSet_CMockExpect(__LINE__, ui32Behavior)
void SysCtlResetBehaviorSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Behavior);
typedef void (* CMOCK_SysCtlResetBehaviorSet_CALLBACK)(uint32_t ui32Behavior, int cmock_num_calls);
void SysCtlResetBehaviorSet_StubWithCallback(CMOCK_SysCtlResetBehaviorSet_CALLBACK Callback);
#define SysCtlResetBehaviorGet_IgnoreAndReturn(cmock_retval) SysCtlResetBehaviorGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlResetBehaviorGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlResetBehaviorGet_ExpectAndReturn(cmock_retval) SysCtlResetBehaviorGet_CMockExpectAndReturn(__LINE__, cmock_retval)
void SysCtlResetBehaviorGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlResetBehaviorGet_CALLBACK)(int cmock_num_calls);
void SysCtlResetBehaviorGet_StubWithCallback(CMOCK_SysCtlResetBehaviorGet_CALLBACK Callback);
#define SysCtlClockOutConfig_Ignore() SysCtlClockOutConfig_CMockIgnore()
void SysCtlClockOutConfig_CMockIgnore(void);
#define SysCtlClockOutConfig_Expect(ui32Config, ui32Div) SysCtlClockOutConfig_CMockExpect(__LINE__, ui32Config, ui32Div)
void SysCtlClockOutConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Config, uint32_t ui32Div);
typedef void (* CMOCK_SysCtlClockOutConfig_CALLBACK)(uint32_t ui32Config, uint32_t ui32Div, int cmock_num_calls);
void SysCtlClockOutConfig_StubWithCallback(CMOCK_SysCtlClockOutConfig_CALLBACK Callback);
#define SysCtlAltClkConfig_Ignore() SysCtlAltClkConfig_CMockIgnore()
void SysCtlAltClkConfig_CMockIgnore(void);
#define SysCtlAltClkConfig_Expect(ui32Config) SysCtlAltClkConfig_CMockExpect(__LINE__, ui32Config)
void SysCtlAltClkConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Config);
typedef void (* CMOCK_SysCtlAltClkConfig_CALLBACK)(uint32_t ui32Config, int cmock_num_calls);
void SysCtlAltClkConfig_StubWithCallback(CMOCK_SysCtlAltClkConfig_CALLBACK Callback);
#define SysCtlNMIStatus_IgnoreAndReturn(cmock_retval) SysCtlNMIStatus_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlNMIStatus_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlNMIStatus_ExpectAndReturn(cmock_retval) SysCtlNMIStatus_CMockExpectAndReturn(__LINE__, cmock_retval)
void SysCtlNMIStatus_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlNMIStatus_CALLBACK)(int cmock_num_calls);
void SysCtlNMIStatus_StubWithCallback(CMOCK_SysCtlNMIStatus_CALLBACK Callback);
#define SysCtlNMIClear_Ignore() SysCtlNMIClear_CMockIgnore()
void SysCtlNMIClear_CMockIgnore(void);
#define SysCtlNMIClear_Expect(ui32Status) SysCtlNMIClear_CMockExpect(__LINE__, ui32Status)
void SysCtlNMIClear_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Status);
typedef void (* CMOCK_SysCtlNMIClear_CALLBACK)(uint32_t ui32Status, int cmock_num_calls);
void SysCtlNMIClear_StubWithCallback(CMOCK_SysCtlNMIClear_CALLBACK Callback);
#define SysCtlVoltageEventConfig_Ignore() SysCtlVoltageEventConfig_CMockIgnore()
void SysCtlVoltageEventConfig_CMockIgnore(void);
#define SysCtlVoltageEventConfig_Expect(ui32Config) SysCtlVoltageEventConfig_CMockExpect(__LINE__, ui32Config)
void SysCtlVoltageEventConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Config);
typedef void (* CMOCK_SysCtlVoltageEventConfig_CALLBACK)(uint32_t ui32Config, int cmock_num_calls);
void SysCtlVoltageEventConfig_StubWithCallback(CMOCK_SysCtlVoltageEventConfig_CALLBACK Callback);
#define SysCtlVoltageEventStatus_IgnoreAndReturn(cmock_retval) SysCtlVoltageEventStatus_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlVoltageEventStatus_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define SysCtlVoltageEventStatus_ExpectAndReturn(cmock_retval) SysCtlVoltageEventStatus_CMockExpectAndReturn(__LINE__, cmock_retval)
void SysCtlVoltageEventStatus_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_SysCtlVoltageEventStatus_CALLBACK)(int cmock_num_calls);
void SysCtlVoltageEventStatus_StubWithCallback(CMOCK_SysCtlVoltageEventStatus_CALLBACK Callback);
#define SysCtlVoltageEventClear_Ignore() SysCtlVoltageEventClear_CMockIgnore()
void SysCtlVoltageEventClear_CMockIgnore(void);
#define SysCtlVoltageEventClear_Expect(ui32Status) SysCtlVoltageEventClear_CMockExpect(__LINE__, ui32Status)
void SysCtlVoltageEventClear_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Status);
typedef void (* CMOCK_SysCtlVoltageEventClear_CALLBACK)(uint32_t ui32Status, int cmock_num_calls);
void SysCtlVoltageEventClear_StubWithCallback(CMOCK_SysCtlVoltageEventClear_CALLBACK Callback);
#define SysCtlVCOGet_IgnoreAndReturn(cmock_retval) SysCtlVCOGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SysCtlVCOGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define SysCtlVCOGet_ExpectAndReturn(ui32Crystal, pui32VCOFrequency, cmock_retval) SysCtlVCOGet_CMockExpectAndReturn(__LINE__, ui32Crystal, pui32VCOFrequency, cmock_retval)
void SysCtlVCOGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Crystal, uint32_t* pui32VCOFrequency, bool cmock_to_return);
typedef bool (* CMOCK_SysCtlVCOGet_CALLBACK)(uint32_t ui32Crystal, uint32_t* pui32VCOFrequency, int cmock_num_calls);
void SysCtlVCOGet_StubWithCallback(CMOCK_SysCtlVCOGet_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#pragma GCC diagnostic pop
#endif

#endif
