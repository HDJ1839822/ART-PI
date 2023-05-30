#include "led.h"
#include "stm32h7xx_hal_gpio.h"


/** @brief TURN_ON_LED_R
  * @param Device: switch LED_R Device
  * 
  * @retval _LED_State: LED_ERROR ,LED_OK
  */
_LED_State Bsp_led_Turn_on_R(struct _LED_Device *Device)
{
	if (!Device) /*防御式编程，判断为空指针*/
		return LED_ERROR;
	
	/*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_RESET);
	
	

  return LED_OK;
}





_LED_State Bsp_led_Turn_off_R(struct _LED_Device *Device)
{
if (!Device) /*防御式编程，判断为空指针*/
		return LED_ERROR;
	
	/*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_SET);

  return LED_OK;
}


_LED_State Bsp_led_GPIO_Init_R(struct _LED_Device *Device)
{
if (!Device) /*防御式编程，判断为空指针*/
		return LED_ERROR;
	
 /*使用stm32hal库已实现，这里预留*/

  return LED_OK;
}



/*硬件led初始化 0成功 -1失败*/
_LED_State Bsp_led_Turn_on_B(struct _LED_Device *Device)
{
	if (!Device) /*防御式编程，判断为空指针*/
		return LED_ERROR;
	
	/*Configure GPIO pin Output Level */
  
	HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
	

  return LED_OK;
}

_LED_State Bsp_led_Turn_off_B(struct _LED_Device *Device)
{
if (!Device) /*防御式编程，判断为空指针*/
		return LED_ERROR;
	
	/*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_SET);
  return LED_OK;
}


_LED_State Bsp_led_GPIO_Init_B(struct _LED_Device *Device)
{
if (!Device) /*防御式编程，判断为空指针*/
		return LED_ERROR;
	
 /*使用stm32hal库已实现，这里预留*/

  return LED_OK;
}

