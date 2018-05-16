/*******************************************************************************
 *    INCLUDED FILES
 ******************************************************************************/

//-- unity: unit test framework
#include "unity.h"

//-- module being tested
#include "tempSensor.h"

//-- mock modules
#include "mock_i2c.h"

/*******************************************************************************
 *    DEFINITIONS
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE TYPES
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE DATA
 ******************************************************************************/


/*******************************************************************************
 *    PRIVATE FUNCTIONS
 ******************************************************************************/


/*******************************************************************************
 *    SETUP, TEARDOWN
 ******************************************************************************/

void setUp(void)
{
}

void tearDown(void)
{
}

/*******************************************************************************
 *    TESTS
 ******************************************************************************/
// Test max temp
void test_whenTempRegisterReadsMaxValue_thenTheTempIsTheMaxValue(void)
{
    uint8_t tempRegisterAddress = 0x03;
    float expectedTemperature = 104.6f;
    float tolerance = 0.1f;

    //When
    i2c_readRegister_ExpectAndReturn(tempRegisterAddress, 0x3ff);

    //Then
    float actualTemperature = 0;
    actualTemperature = tempSensor_getTemperature();
    TEST_ASSERT_FLOAT_WITHIN(tolerance, expectedTemperature, actualTemperature);
}

// Test min tempSensor
void test_whenTempRegisterReadsMinValue_thenTheTempIsTheMinValue(void)
{
    uint8_t tempRegisterAddress = 0x03;
    float expectedTemperature = -100.0f;
    float tolerance = 0.1f;

    //When
    i2c_readRegister_ExpectAndReturn(tempRegisterAddress, 0x00);

    //Then
    float actualTemperature = tempSensor_getTemperature();
    TEST_ASSERT_FLOAT_WITHIN(tolerance, expectedTemperature,
        actualTemperature);
}
