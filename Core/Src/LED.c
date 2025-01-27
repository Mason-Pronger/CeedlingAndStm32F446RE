
#include "LED.h"

int light = 0;

void LED_TOGGLE(void)
{
    light = !light;
}