/*******************************************************************************
 *    INCLUDED FILES
 ******************************************************************************/

//-- unity: unit test framework
#include "unity.h"

//-- module being tested
#include "fuzzbuzz.h"


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
//
void test_if_3_then_green(void)
{
  color_t color = get_color(3);
  TEST_ASSERT_EQUAL(GREEN, color);
}

//
void test_if_6_then_green(void)
{
  color_t color = get_color(6);
  TEST_ASSERT_EQUAL(GREEN, color);
}

//
void test_if_5_then_red(void)
{
  color_t color = get_color(5);
  TEST_ASSERT_EQUAL(RED, color);
}

//
void test_if_10_then_red(void)
{
  color_t color = get_color(10);
  TEST_ASSERT_EQUAL(RED, color);
}

//
void test_if_15_then_blue(void)
{
  color_t color = get_color(15);
  TEST_ASSERT_EQUAL(BLUE, color);
}

//
void test_if_300_then_blue(void)
{
  color_t color = get_color(300);
  TEST_ASSERT_EQUAL(BLUE, color);
}

//
void test_if_2_then_no_color(void)
{
  color_t color = get_color(2);
  TEST_ASSERT_EQUAL(NONE, color);
}
