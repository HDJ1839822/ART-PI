#ifndef __LED_DEVICE_INTERFACE_H
#define __LED_DEVICE_INTERFACE_H


#include "LED_Device_struct.h"
#include "led.h"




int Interface_Turn_off(struct _LED_Device *Device);
int Interface_Turn_on(struct _LED_Device *Device);
int Interface_GPIO_Init(struct _LED_Device *Device);









#endif /*__LED_DEVICE_INTERFACE_H*/


