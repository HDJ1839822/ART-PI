#ifndef __LED_DEVICE_STRUCT_H
#define __LED_DEVICE_STRUCT_H

#include "stdint.h"





/*LED设备结构体*/
typedef struct _LED_Device{
	uint8_t *name;/*设备名称*/
	int (*GPIO_Init)(struct _LED_Device *Device);/*设备初始化*/
	int (*Turn_on)(struct _LED_Device *Device);/*设备打开*/
	int (*Turn_off)(struct _LED_Device *Device);/*设备关闭*/
	}LED_Device, *pLED_Device;


pLED_Device Get_led_Device(int witch);

#endif /*__LED_DEVICE_STRUCT_H*/
