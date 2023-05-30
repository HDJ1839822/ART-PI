#ifndef __LED_DEVICE_H
#define __LED_DEVICE_H

/*�����������㣨�ӿڲ����豸�����㣩*/
#include "LED_Device_struct.h"
#include "LED_Device_interface.h"




/*�漰��main.h�еĺ궨��*/
#include "main.h"


typedef enum
{
  LED_OK = 0U,
  LED_ERROR
} _LED_State;



_LED_State Bsp_led_Turn_on_R(struct _LED_Device *Device);
_LED_State Bsp_led_Turn_off_R(struct _LED_Device *Device);
_LED_State Bsp_led_GPIO_Init_R(struct _LED_Device *Device);


_LED_State Bsp_led_Turn_on_B(struct _LED_Device *Device);
_LED_State Bsp_led_Turn_off_B(struct _LED_Device *Device);
_LED_State Bsp_led_GPIO_Init_B(struct _LED_Device *Device);




#endif /*__LED_DEVICE_H*/
