#include "RASDemo.h"

#include <RASLib/inc/common.h>
#include <RASLi/inc/gpio.h>
#include<RASLib/inc/time.h>

tBoolean led_on;

void blink(void) {
    SetPin(PIN_F1, led_on);
    SetPin(PIN_F3, !led_on);

    led_on= !led_on;
}


