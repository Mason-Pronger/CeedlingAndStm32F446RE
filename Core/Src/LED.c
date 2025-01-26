#include "LED.h"


void LED_TOGGLE(void)
{
    HAL_GPIO_TogglePin(LED_Pin_GPIO_Port, LED_Pin_Pin);
}