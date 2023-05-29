#include "app.h"
#include "LED_Device_struct.h"



void Led_test(void)
{
	pLED_Device PLED1 = Get_led_Device(0);
	PLED1->Turn_on(PLED1);

  
}


