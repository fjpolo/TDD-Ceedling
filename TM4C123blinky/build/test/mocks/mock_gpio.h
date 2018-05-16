/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_GPIO_H
#define _MOCK_GPIO_H

#include <stdbool.h>
#include <stdint.h>
#include "gpio.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#pragma GCC diagnostic push
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_gpio_Init(void);
void mock_gpio_Destroy(void);
void mock_gpio_Verify(void);


typedef void(*cmock_gpio_func_ptr1)(void);
typedef void(*cmock_gpio_func_ptr2)(void);


#define GPIODirModeSet_Ignore() GPIODirModeSet_CMockIgnore()
void GPIODirModeSet_CMockIgnore(void);
#define GPIODirModeSet_Expect(ui32Port, ui8Pins, ui32PinIO) GPIODirModeSet_CMockExpect(__LINE__, ui32Port, ui8Pins, ui32PinIO)
void GPIODirModeSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32PinIO);
typedef void (* CMOCK_GPIODirModeSet_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32PinIO, int cmock_num_calls);
void GPIODirModeSet_StubWithCallback(CMOCK_GPIODirModeSet_CALLBACK Callback);
#define GPIODirModeGet_IgnoreAndReturn(cmock_retval) GPIODirModeGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void GPIODirModeGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define GPIODirModeGet_ExpectAndReturn(ui32Port, ui8Pin, cmock_retval) GPIODirModeGet_CMockExpectAndReturn(__LINE__, ui32Port, ui8Pin, cmock_retval)
void GPIODirModeGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pin, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_GPIODirModeGet_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pin, int cmock_num_calls);
void GPIODirModeGet_StubWithCallback(CMOCK_GPIODirModeGet_CALLBACK Callback);
#define GPIOIntTypeSet_Ignore() GPIOIntTypeSet_CMockIgnore()
void GPIOIntTypeSet_CMockIgnore(void);
#define GPIOIntTypeSet_Expect(ui32Port, ui8Pins, ui32IntType) GPIOIntTypeSet_CMockExpect(__LINE__, ui32Port, ui8Pins, ui32IntType)
void GPIOIntTypeSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32IntType);
typedef void (* CMOCK_GPIOIntTypeSet_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32IntType, int cmock_num_calls);
void GPIOIntTypeSet_StubWithCallback(CMOCK_GPIOIntTypeSet_CALLBACK Callback);
#define GPIOIntTypeGet_IgnoreAndReturn(cmock_retval) GPIOIntTypeGet_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void GPIOIntTypeGet_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define GPIOIntTypeGet_ExpectAndReturn(ui32Port, ui8Pin, cmock_retval) GPIOIntTypeGet_CMockExpectAndReturn(__LINE__, ui32Port, ui8Pin, cmock_retval)
void GPIOIntTypeGet_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pin, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_GPIOIntTypeGet_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pin, int cmock_num_calls);
void GPIOIntTypeGet_StubWithCallback(CMOCK_GPIOIntTypeGet_CALLBACK Callback);
#define GPIOPadConfigSet_Ignore() GPIOPadConfigSet_CMockIgnore()
void GPIOPadConfigSet_CMockIgnore(void);
#define GPIOPadConfigSet_Expect(ui32Port, ui8Pins, ui32Strength, ui32PadType) GPIOPadConfigSet_CMockExpect(__LINE__, ui32Port, ui8Pins, ui32Strength, ui32PadType)
void GPIOPadConfigSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32Strength, uint32_t ui32PadType);
typedef void (* CMOCK_GPIOPadConfigSet_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32Strength, uint32_t ui32PadType, int cmock_num_calls);
void GPIOPadConfigSet_StubWithCallback(CMOCK_GPIOPadConfigSet_CALLBACK Callback);
#define GPIOPadConfigGet_Ignore() GPIOPadConfigGet_CMockIgnore()
void GPIOPadConfigGet_CMockIgnore(void);
#define GPIOPadConfigGet_Expect(ui32Port, ui8Pin, pui32Strength, pui32PadType) GPIOPadConfigGet_CMockExpect(__LINE__, ui32Port, ui8Pin, pui32Strength, pui32PadType)
void GPIOPadConfigGet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pin, uint32_t* pui32Strength, uint32_t* pui32PadType);
typedef void (* CMOCK_GPIOPadConfigGet_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pin, uint32_t* pui32Strength, uint32_t* pui32PadType, int cmock_num_calls);
void GPIOPadConfigGet_StubWithCallback(CMOCK_GPIOPadConfigGet_CALLBACK Callback);
#define GPIOIntEnable_Ignore() GPIOIntEnable_CMockIgnore()
void GPIOIntEnable_CMockIgnore(void);
#define GPIOIntEnable_Expect(ui32Port, ui32IntFlags) GPIOIntEnable_CMockExpect(__LINE__, ui32Port, ui32IntFlags)
void GPIOIntEnable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint32_t ui32IntFlags);
typedef void (* CMOCK_GPIOIntEnable_CALLBACK)(uint32_t ui32Port, uint32_t ui32IntFlags, int cmock_num_calls);
void GPIOIntEnable_StubWithCallback(CMOCK_GPIOIntEnable_CALLBACK Callback);
#define GPIOIntDisable_Ignore() GPIOIntDisable_CMockIgnore()
void GPIOIntDisable_CMockIgnore(void);
#define GPIOIntDisable_Expect(ui32Port, ui32IntFlags) GPIOIntDisable_CMockExpect(__LINE__, ui32Port, ui32IntFlags)
void GPIOIntDisable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint32_t ui32IntFlags);
typedef void (* CMOCK_GPIOIntDisable_CALLBACK)(uint32_t ui32Port, uint32_t ui32IntFlags, int cmock_num_calls);
void GPIOIntDisable_StubWithCallback(CMOCK_GPIOIntDisable_CALLBACK Callback);
#define GPIOIntStatus_IgnoreAndReturn(cmock_retval) GPIOIntStatus_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void GPIOIntStatus_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define GPIOIntStatus_ExpectAndReturn(ui32Port, bMasked, cmock_retval) GPIOIntStatus_CMockExpectAndReturn(__LINE__, ui32Port, bMasked, cmock_retval)
void GPIOIntStatus_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, bool bMasked, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_GPIOIntStatus_CALLBACK)(uint32_t ui32Port, bool bMasked, int cmock_num_calls);
void GPIOIntStatus_StubWithCallback(CMOCK_GPIOIntStatus_CALLBACK Callback);
#define GPIOIntClear_Ignore() GPIOIntClear_CMockIgnore()
void GPIOIntClear_CMockIgnore(void);
#define GPIOIntClear_Expect(ui32Port, ui32IntFlags) GPIOIntClear_CMockExpect(__LINE__, ui32Port, ui32IntFlags)
void GPIOIntClear_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint32_t ui32IntFlags);
typedef void (* CMOCK_GPIOIntClear_CALLBACK)(uint32_t ui32Port, uint32_t ui32IntFlags, int cmock_num_calls);
void GPIOIntClear_StubWithCallback(CMOCK_GPIOIntClear_CALLBACK Callback);
#define GPIOIntRegister_Ignore() GPIOIntRegister_CMockIgnore()
void GPIOIntRegister_CMockIgnore(void);
#define GPIOIntRegister_Expect(ui32Port, pfnIntHandler) GPIOIntRegister_CMockExpect(__LINE__, ui32Port, pfnIntHandler)
void GPIOIntRegister_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, cmock_gpio_func_ptr1 pfnIntHandler);
typedef void (* CMOCK_GPIOIntRegister_CALLBACK)(uint32_t ui32Port, cmock_gpio_func_ptr1 pfnIntHandler, int cmock_num_calls);
void GPIOIntRegister_StubWithCallback(CMOCK_GPIOIntRegister_CALLBACK Callback);
#define GPIOIntUnregister_Ignore() GPIOIntUnregister_CMockIgnore()
void GPIOIntUnregister_CMockIgnore(void);
#define GPIOIntUnregister_Expect(ui32Port) GPIOIntUnregister_CMockExpect(__LINE__, ui32Port)
void GPIOIntUnregister_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port);
typedef void (* CMOCK_GPIOIntUnregister_CALLBACK)(uint32_t ui32Port, int cmock_num_calls);
void GPIOIntUnregister_StubWithCallback(CMOCK_GPIOIntUnregister_CALLBACK Callback);
#define GPIOIntRegisterPin_Ignore() GPIOIntRegisterPin_CMockIgnore()
void GPIOIntRegisterPin_CMockIgnore(void);
#define GPIOIntRegisterPin_Expect(ui32Port, ui32Pin, pfnIntHandler) GPIOIntRegisterPin_CMockExpect(__LINE__, ui32Port, ui32Pin, pfnIntHandler)
void GPIOIntRegisterPin_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint32_t ui32Pin, cmock_gpio_func_ptr2 pfnIntHandler);
typedef void (* CMOCK_GPIOIntRegisterPin_CALLBACK)(uint32_t ui32Port, uint32_t ui32Pin, cmock_gpio_func_ptr2 pfnIntHandler, int cmock_num_calls);
void GPIOIntRegisterPin_StubWithCallback(CMOCK_GPIOIntRegisterPin_CALLBACK Callback);
#define GPIOIntUnregisterPin_Ignore() GPIOIntUnregisterPin_CMockIgnore()
void GPIOIntUnregisterPin_CMockIgnore(void);
#define GPIOIntUnregisterPin_Expect(ui32Port, ui32Pin) GPIOIntUnregisterPin_CMockExpect(__LINE__, ui32Port, ui32Pin)
void GPIOIntUnregisterPin_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint32_t ui32Pin);
typedef void (* CMOCK_GPIOIntUnregisterPin_CALLBACK)(uint32_t ui32Port, uint32_t ui32Pin, int cmock_num_calls);
void GPIOIntUnregisterPin_StubWithCallback(CMOCK_GPIOIntUnregisterPin_CALLBACK Callback);
#define GPIOPinRead_IgnoreAndReturn(cmock_retval) GPIOPinRead_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void GPIOPinRead_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int32_t cmock_to_return);
#define GPIOPinRead_ExpectAndReturn(ui32Port, ui8Pins, cmock_retval) GPIOPinRead_CMockExpectAndReturn(__LINE__, ui32Port, ui8Pins, cmock_retval)
void GPIOPinRead_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins, int32_t cmock_to_return);
typedef int32_t (* CMOCK_GPIOPinRead_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinRead_StubWithCallback(CMOCK_GPIOPinRead_CALLBACK Callback);
#define GPIOPinWrite_Ignore() GPIOPinWrite_CMockIgnore()
void GPIOPinWrite_CMockIgnore(void);
#define GPIOPinWrite_Expect(ui32Port, ui8Pins, ui8Val) GPIOPinWrite_CMockExpect(__LINE__, ui32Port, ui8Pins, ui8Val)
void GPIOPinWrite_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins, uint8_t ui8Val);
typedef void (* CMOCK_GPIOPinWrite_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, uint8_t ui8Val, int cmock_num_calls);
void GPIOPinWrite_StubWithCallback(CMOCK_GPIOPinWrite_CALLBACK Callback);
#define GPIOPinConfigure_Ignore() GPIOPinConfigure_CMockIgnore()
void GPIOPinConfigure_CMockIgnore(void);
#define GPIOPinConfigure_Expect(ui32PinConfig) GPIOPinConfigure_CMockExpect(__LINE__, ui32PinConfig)
void GPIOPinConfigure_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32PinConfig);
typedef void (* CMOCK_GPIOPinConfigure_CALLBACK)(uint32_t ui32PinConfig, int cmock_num_calls);
void GPIOPinConfigure_StubWithCallback(CMOCK_GPIOPinConfigure_CALLBACK Callback);
#define GPIOPinTypeADC_Ignore() GPIOPinTypeADC_CMockIgnore()
void GPIOPinTypeADC_CMockIgnore(void);
#define GPIOPinTypeADC_Expect(ui32Port, ui8Pins) GPIOPinTypeADC_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeADC_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeADC_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeADC_StubWithCallback(CMOCK_GPIOPinTypeADC_CALLBACK Callback);
#define GPIOPinTypeCAN_Ignore() GPIOPinTypeCAN_CMockIgnore()
void GPIOPinTypeCAN_CMockIgnore(void);
#define GPIOPinTypeCAN_Expect(ui32Port, ui8Pins) GPIOPinTypeCAN_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeCAN_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeCAN_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeCAN_StubWithCallback(CMOCK_GPIOPinTypeCAN_CALLBACK Callback);
#define GPIOPinTypeComparator_Ignore() GPIOPinTypeComparator_CMockIgnore()
void GPIOPinTypeComparator_CMockIgnore(void);
#define GPIOPinTypeComparator_Expect(ui32Port, ui8Pins) GPIOPinTypeComparator_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeComparator_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeComparator_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeComparator_StubWithCallback(CMOCK_GPIOPinTypeComparator_CALLBACK Callback);
#define GPIOPinTypeComparatorOutput_Ignore() GPIOPinTypeComparatorOutput_CMockIgnore()
void GPIOPinTypeComparatorOutput_CMockIgnore(void);
#define GPIOPinTypeComparatorOutput_Expect(ui32Port, ui8Pins) GPIOPinTypeComparatorOutput_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeComparatorOutput_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeComparatorOutput_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeComparatorOutput_StubWithCallback(CMOCK_GPIOPinTypeComparatorOutput_CALLBACK Callback);
#define GPIOPinTypeDIVSCLK_Ignore() GPIOPinTypeDIVSCLK_CMockIgnore()
void GPIOPinTypeDIVSCLK_CMockIgnore(void);
#define GPIOPinTypeDIVSCLK_Expect(ui32Port, ui8Pins) GPIOPinTypeDIVSCLK_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeDIVSCLK_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeDIVSCLK_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeDIVSCLK_StubWithCallback(CMOCK_GPIOPinTypeDIVSCLK_CALLBACK Callback);
#define GPIOPinTypeEPI_Ignore() GPIOPinTypeEPI_CMockIgnore()
void GPIOPinTypeEPI_CMockIgnore(void);
#define GPIOPinTypeEPI_Expect(ui32Port, ui8Pins) GPIOPinTypeEPI_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeEPI_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeEPI_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeEPI_StubWithCallback(CMOCK_GPIOPinTypeEPI_CALLBACK Callback);
#define GPIOPinTypeEthernetLED_Ignore() GPIOPinTypeEthernetLED_CMockIgnore()
void GPIOPinTypeEthernetLED_CMockIgnore(void);
#define GPIOPinTypeEthernetLED_Expect(ui32Port, ui8Pins) GPIOPinTypeEthernetLED_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeEthernetLED_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeEthernetLED_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeEthernetLED_StubWithCallback(CMOCK_GPIOPinTypeEthernetLED_CALLBACK Callback);
#define GPIOPinTypeEthernetMII_Ignore() GPIOPinTypeEthernetMII_CMockIgnore()
void GPIOPinTypeEthernetMII_CMockIgnore(void);
#define GPIOPinTypeEthernetMII_Expect(ui32Port, ui8Pins) GPIOPinTypeEthernetMII_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeEthernetMII_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeEthernetMII_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeEthernetMII_StubWithCallback(CMOCK_GPIOPinTypeEthernetMII_CALLBACK Callback);
#define GPIOPinTypeGPIOInput_Ignore() GPIOPinTypeGPIOInput_CMockIgnore()
void GPIOPinTypeGPIOInput_CMockIgnore(void);
#define GPIOPinTypeGPIOInput_Expect(ui32Port, ui8Pins) GPIOPinTypeGPIOInput_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeGPIOInput_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeGPIOInput_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeGPIOInput_StubWithCallback(CMOCK_GPIOPinTypeGPIOInput_CALLBACK Callback);
#define GPIOPinTypeGPIOOutput_Ignore() GPIOPinTypeGPIOOutput_CMockIgnore()
void GPIOPinTypeGPIOOutput_CMockIgnore(void);
#define GPIOPinTypeGPIOOutput_Expect(ui32Port, ui8Pins) GPIOPinTypeGPIOOutput_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeGPIOOutput_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeGPIOOutput_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeGPIOOutput_StubWithCallback(CMOCK_GPIOPinTypeGPIOOutput_CALLBACK Callback);
#define GPIOPinTypeGPIOOutputOD_Ignore() GPIOPinTypeGPIOOutputOD_CMockIgnore()
void GPIOPinTypeGPIOOutputOD_CMockIgnore(void);
#define GPIOPinTypeGPIOOutputOD_Expect(ui32Port, ui8Pins) GPIOPinTypeGPIOOutputOD_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeGPIOOutputOD_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeGPIOOutputOD_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeGPIOOutputOD_StubWithCallback(CMOCK_GPIOPinTypeGPIOOutputOD_CALLBACK Callback);
#define GPIOPinTypeHibernateRTCCLK_Ignore() GPIOPinTypeHibernateRTCCLK_CMockIgnore()
void GPIOPinTypeHibernateRTCCLK_CMockIgnore(void);
#define GPIOPinTypeHibernateRTCCLK_Expect(ui32Port, ui8Pins) GPIOPinTypeHibernateRTCCLK_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeHibernateRTCCLK_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeHibernateRTCCLK_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeHibernateRTCCLK_StubWithCallback(CMOCK_GPIOPinTypeHibernateRTCCLK_CALLBACK Callback);
#define GPIOPinTypeI2C_Ignore() GPIOPinTypeI2C_CMockIgnore()
void GPIOPinTypeI2C_CMockIgnore(void);
#define GPIOPinTypeI2C_Expect(ui32Port, ui8Pins) GPIOPinTypeI2C_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeI2C_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeI2C_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeI2C_StubWithCallback(CMOCK_GPIOPinTypeI2C_CALLBACK Callback);
#define GPIOPinTypeI2CSCL_Ignore() GPIOPinTypeI2CSCL_CMockIgnore()
void GPIOPinTypeI2CSCL_CMockIgnore(void);
#define GPIOPinTypeI2CSCL_Expect(ui32Port, ui8Pins) GPIOPinTypeI2CSCL_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeI2CSCL_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeI2CSCL_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeI2CSCL_StubWithCallback(CMOCK_GPIOPinTypeI2CSCL_CALLBACK Callback);
#define GPIOPinTypeLCD_Ignore() GPIOPinTypeLCD_CMockIgnore()
void GPIOPinTypeLCD_CMockIgnore(void);
#define GPIOPinTypeLCD_Expect(ui32Port, ui8Pins) GPIOPinTypeLCD_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeLCD_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeLCD_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeLCD_StubWithCallback(CMOCK_GPIOPinTypeLCD_CALLBACK Callback);
#define GPIOPinTypeOneWire_Ignore() GPIOPinTypeOneWire_CMockIgnore()
void GPIOPinTypeOneWire_CMockIgnore(void);
#define GPIOPinTypeOneWire_Expect(ui32Port, ui8Pins) GPIOPinTypeOneWire_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeOneWire_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeOneWire_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeOneWire_StubWithCallback(CMOCK_GPIOPinTypeOneWire_CALLBACK Callback);
#define GPIOPinTypePWM_Ignore() GPIOPinTypePWM_CMockIgnore()
void GPIOPinTypePWM_CMockIgnore(void);
#define GPIOPinTypePWM_Expect(ui32Port, ui8Pins) GPIOPinTypePWM_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypePWM_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypePWM_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypePWM_StubWithCallback(CMOCK_GPIOPinTypePWM_CALLBACK Callback);
#define GPIOPinTypeQEI_Ignore() GPIOPinTypeQEI_CMockIgnore()
void GPIOPinTypeQEI_CMockIgnore(void);
#define GPIOPinTypeQEI_Expect(ui32Port, ui8Pins) GPIOPinTypeQEI_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeQEI_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeQEI_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeQEI_StubWithCallback(CMOCK_GPIOPinTypeQEI_CALLBACK Callback);
#define GPIOPinTypeSSI_Ignore() GPIOPinTypeSSI_CMockIgnore()
void GPIOPinTypeSSI_CMockIgnore(void);
#define GPIOPinTypeSSI_Expect(ui32Port, ui8Pins) GPIOPinTypeSSI_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeSSI_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeSSI_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeSSI_StubWithCallback(CMOCK_GPIOPinTypeSSI_CALLBACK Callback);
#define GPIOPinTypeTimer_Ignore() GPIOPinTypeTimer_CMockIgnore()
void GPIOPinTypeTimer_CMockIgnore(void);
#define GPIOPinTypeTimer_Expect(ui32Port, ui8Pins) GPIOPinTypeTimer_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeTimer_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeTimer_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeTimer_StubWithCallback(CMOCK_GPIOPinTypeTimer_CALLBACK Callback);
#define GPIOPinTypeTrace_Ignore() GPIOPinTypeTrace_CMockIgnore()
void GPIOPinTypeTrace_CMockIgnore(void);
#define GPIOPinTypeTrace_Expect(ui32Port, ui8Pins) GPIOPinTypeTrace_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeTrace_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeTrace_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeTrace_StubWithCallback(CMOCK_GPIOPinTypeTrace_CALLBACK Callback);
#define GPIOPinTypeUART_Ignore() GPIOPinTypeUART_CMockIgnore()
void GPIOPinTypeUART_CMockIgnore(void);
#define GPIOPinTypeUART_Expect(ui32Port, ui8Pins) GPIOPinTypeUART_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeUART_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeUART_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeUART_StubWithCallback(CMOCK_GPIOPinTypeUART_CALLBACK Callback);
#define GPIOPinTypeUSBAnalog_Ignore() GPIOPinTypeUSBAnalog_CMockIgnore()
void GPIOPinTypeUSBAnalog_CMockIgnore(void);
#define GPIOPinTypeUSBAnalog_Expect(ui32Port, ui8Pins) GPIOPinTypeUSBAnalog_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeUSBAnalog_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeUSBAnalog_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeUSBAnalog_StubWithCallback(CMOCK_GPIOPinTypeUSBAnalog_CALLBACK Callback);
#define GPIOPinTypeUSBDigital_Ignore() GPIOPinTypeUSBDigital_CMockIgnore()
void GPIOPinTypeUSBDigital_CMockIgnore(void);
#define GPIOPinTypeUSBDigital_Expect(ui32Port, ui8Pins) GPIOPinTypeUSBDigital_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeUSBDigital_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeUSBDigital_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeUSBDigital_StubWithCallback(CMOCK_GPIOPinTypeUSBDigital_CALLBACK Callback);
#define GPIOPinTypeWakeHigh_Ignore() GPIOPinTypeWakeHigh_CMockIgnore()
void GPIOPinTypeWakeHigh_CMockIgnore(void);
#define GPIOPinTypeWakeHigh_Expect(ui32Port, ui8Pins) GPIOPinTypeWakeHigh_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeWakeHigh_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeWakeHigh_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeWakeHigh_StubWithCallback(CMOCK_GPIOPinTypeWakeHigh_CALLBACK Callback);
#define GPIOPinTypeWakeLow_Ignore() GPIOPinTypeWakeLow_CMockIgnore()
void GPIOPinTypeWakeLow_CMockIgnore(void);
#define GPIOPinTypeWakeLow_Expect(ui32Port, ui8Pins) GPIOPinTypeWakeLow_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOPinTypeWakeLow_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOPinTypeWakeLow_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOPinTypeWakeLow_StubWithCallback(CMOCK_GPIOPinTypeWakeLow_CALLBACK Callback);
#define GPIOPinWakeStatus_IgnoreAndReturn(cmock_retval) GPIOPinWakeStatus_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void GPIOPinWakeStatus_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define GPIOPinWakeStatus_ExpectAndReturn(ui32Port, cmock_retval) GPIOPinWakeStatus_CMockExpectAndReturn(__LINE__, ui32Port, cmock_retval)
void GPIOPinWakeStatus_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_GPIOPinWakeStatus_CALLBACK)(uint32_t ui32Port, int cmock_num_calls);
void GPIOPinWakeStatus_StubWithCallback(CMOCK_GPIOPinWakeStatus_CALLBACK Callback);
#define GPIODMATriggerEnable_Ignore() GPIODMATriggerEnable_CMockIgnore()
void GPIODMATriggerEnable_CMockIgnore(void);
#define GPIODMATriggerEnable_Expect(ui32Port, ui8Pins) GPIODMATriggerEnable_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIODMATriggerEnable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIODMATriggerEnable_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIODMATriggerEnable_StubWithCallback(CMOCK_GPIODMATriggerEnable_CALLBACK Callback);
#define GPIODMATriggerDisable_Ignore() GPIODMATriggerDisable_CMockIgnore()
void GPIODMATriggerDisable_CMockIgnore(void);
#define GPIODMATriggerDisable_Expect(ui32Port, ui8Pins) GPIODMATriggerDisable_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIODMATriggerDisable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIODMATriggerDisable_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIODMATriggerDisable_StubWithCallback(CMOCK_GPIODMATriggerDisable_CALLBACK Callback);
#define GPIOADCTriggerEnable_Ignore() GPIOADCTriggerEnable_CMockIgnore()
void GPIOADCTriggerEnable_CMockIgnore(void);
#define GPIOADCTriggerEnable_Expect(ui32Port, ui8Pins) GPIOADCTriggerEnable_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOADCTriggerEnable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOADCTriggerEnable_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOADCTriggerEnable_StubWithCallback(CMOCK_GPIOADCTriggerEnable_CALLBACK Callback);
#define GPIOADCTriggerDisable_Ignore() GPIOADCTriggerDisable_CMockIgnore()
void GPIOADCTriggerDisable_CMockIgnore(void);
#define GPIOADCTriggerDisable_Expect(ui32Port, ui8Pins) GPIOADCTriggerDisable_CMockExpect(__LINE__, ui32Port, ui8Pins)
void GPIOADCTriggerDisable_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ui32Port, uint8_t ui8Pins);
typedef void (* CMOCK_GPIOADCTriggerDisable_CALLBACK)(uint32_t ui32Port, uint8_t ui8Pins, int cmock_num_calls);
void GPIOADCTriggerDisable_StubWithCallback(CMOCK_GPIOADCTriggerDisable_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#pragma GCC diagnostic pop
#endif

#endif
