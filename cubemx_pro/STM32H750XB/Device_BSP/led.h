#ifndef __LED_DEVICE_H
#define __LED_DEVICE_H

/*包含上面两层（接口层与设备描述层）*/
#include "LED_Device_struct.h"
#include "LED_Device_interface.h"

/*包含所有hal库文件*/


/*涉及到main.h中的宏定义*/
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
