#ifndef __LED_DEVICE_H
#define __LED_DEVICE_H

/*�����������㣨�ӿڲ����豸�����㣩*/
#include "LED_Device_struct.h"
#include "LED_Device_interface.h"

/*��������hal���ļ�*/


/*�漰��main.h�еĺ궨��*/
#include "main.h"



typedef enum
{
  LED_ON = 0U,
  LED_OFF
} LED_State;


int Bsp_led_Turn_on(struct _LED_Device *Device);
int Bsp_led_Turn_off(struct _LED_Device *Device);
int Bsp_led_GPIO_Init(struct _LED_Device *Device);







#endif /*__LED_DEVICE_H*/
