#ifndef __LED_DEVICE_INTERFACE_H
#define __LED_DEVICE_INTERFACE_H


#include "LED_Device_struct.h"
#include "led.h"




int Interface_Turn_off_R(struct _LED_Device *Device);
int Interface_Turn_on_R(struct _LED_Device *Device);
int Interface_GPIO_Init_R(struct _LED_Device *Device);

int Interface_Turn_off_B(struct _LED_Device *Device);
int Interface_Turn_on_B(struct _LED_Device *Device);
int Interface_GPIO_Init_B(struct _LED_Device *Device);







#endif /*__LED_DEVICE_INTERFACE_H*/


