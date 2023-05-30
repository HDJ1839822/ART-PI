#include "LED_Device_interface.h"


int Interface_Turn_on_B(struct _LED_Device *Device){
	
	return Bsp_led_Turn_on_B(Device);
}


int Interface_Turn_off_B(struct _LED_Device *Device){


	return Bsp_led_Turn_off_B(Device);
}


int Interface_GPIO_Init_B(struct _LED_Device *Device){


	return Bsp_led_GPIO_Init_B(Device);
}

int Interface_Turn_on_R(struct _LED_Device *Device){
	
	return Bsp_led_Turn_on_R(Device);

}


int Interface_Turn_off_R(struct _LED_Device *Device){


	return Bsp_led_Turn_off_R(Device);
}


int Interface_GPIO_Init_R(struct _LED_Device *Device){


	return Bsp_led_GPIO_Init_R(Device);
}



