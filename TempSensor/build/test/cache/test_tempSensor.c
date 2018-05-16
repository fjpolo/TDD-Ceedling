#include "build/temp/_test_tempSensor.c"
#include "mock_i2c.h"
#include "tempSensor.h"
#include "unity.h"


















void setUp(void)

{

}



void tearDown(void)

{

}











void test_whenTempRegisterReadsMaxValue_thenTheTempIsTheMaxValue(void)

{

    uint8_t tempRegisterAddress = 0x03;

    float expectedTemperature = 104.6f;

    float tolerance = 0.1f;





    i2c_readRegister_CMockExpectAndReturn(55, tempRegisterAddress, 0x3ff);





    float actualTemperature = 0;

    actualTemperature = tempSensor_getTemperature();

    UnityAssertFloatsWithin((UNITY_FLOAT)((tolerance)), (UNITY_FLOAT)((expectedTemperature)), (UNITY_FLOAT)((actualTemperature)), (

   ((void *)0)

   ), (UNITY_UINT)(60));

}





void test_whenTempRegisterReadsMinValue_thenTheTempIsTheMinValue(void)

{

    uint8_t tempRegisterAddress = 0x03;

    float expectedTemperature = -100.1f;

    float tolerance = 0.1f;





    i2c_readRegister_CMockExpectAndReturn(71, tempRegisterAddress, 0x00);





    float actualTemperature = tempSensor_getTemperature();

    UnityAssertFloatsWithin((UNITY_FLOAT)((tolerance)), (UNITY_FLOAT)((expectedTemperature)), (UNITY_FLOAT)((actualTemperature)), (

   ((void *)0)

   ), (UNITY_UINT)(76))

                          ;

}
