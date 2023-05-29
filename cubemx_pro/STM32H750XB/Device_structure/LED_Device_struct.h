#ifndef __LED_DEVICE_STRUCT_H
#define __LED_DEVICE_STRUCT_H

#include "stdint.h"





/*LED�豸�ṹ��*/
typedef struct _LED_Device{
	uint8_t *name;/*�豸����*/
	int (*GPIO_Init)(struct _LED_Device *Device);/*�豸��ʼ��*/
	int (*Turn_on)(struct _LED_Device *Device);/*�豸��*/
	int (*Turn_off)(struct _LED_Device *Device);/*�豸�ر�*/
	}LED_Device, *pLED_Device;


pLED_Device Get_led_Device(int witch);

#endif /*__LED_DEVICE_STRUCT_H*/
