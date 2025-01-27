
#ifdef TEST

#include "unity.h"
#include "mock_stm32f4xx_hal_gpio.h"
#include "LED.h"

void setUp(void)
{

}

void tearDown(void)
{
}

void test_LED_NeedToImplement(void)
{

    // This test should verify that the GPIOA and GPIO_PIN_5 are being called in the following fuction
    TEST_MESSAGE("Testing LED Port and Pin being called");
	HAL_GPIO_TogglePin_CMockExpect(__LINE__, GPIOA, GPIO_PIN_5);
    LED_TOGGLE();

    TEST_PASS();

}

#endif // TEST
