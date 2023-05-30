#include "led.h"
#include "stm32h7xx_hal_gpio.h"


/*硬件led初始化 0成功 -1失败*/
int Bsp_led_Turn_on(struct _LED_Device *Device)
{
	if (!Device) /*防御式编程，判断为空指针*/
		return -1;
	
	/*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
	

  return 0;
}

int Bsp_led_Turn_off(struct _LED_Device *Device)
{
if (!Device) /*防御式编程，判断为空指针*/
		return -1;
	
	/*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_SET);

  return 0;
}


int Bsp_led_GPIO_Init(struct _LED_Device *Device)
{
if (!Device) /*防御式编程，判断为空指针*/
		return -1;
	
 /*使用stm32hal库已实现，这里预留*/

  return 0;
}


