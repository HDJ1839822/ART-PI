#include "LED_Device_interface.h"


int Interface_Turn_on(struct _LED_Device *Device){
	
	return Bsp_led_Turn_on(Device);

}


int Interface_Turn_off(struct _LED_Device *Device){


	return Bsp_led_Turn_off(Device);
}


int Interface_GPIO_Init(struct _LED_Device *Device){


	return Bsp_led_GPIO_Init(Device);
}





