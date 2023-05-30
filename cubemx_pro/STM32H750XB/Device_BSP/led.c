#include "led.h"
#include "stm32h7xx_hal_gpio.h"


/*Ӳ��led��ʼ�� 0�ɹ� -1ʧ��*/
int Bsp_led_Turn_on(struct _LED_Device *Device)
{
	if (!Device) /*����ʽ��̣��ж�Ϊ��ָ��*/
		return -1;
	
	/*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
	

  return 0;
}

int Bsp_led_Turn_off(struct _LED_Device *Device)
{
if (!Device) /*����ʽ��̣��ж�Ϊ��ָ��*/
		return -1;
	
	/*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_SET);

  return 0;
}


int Bsp_led_GPIO_Init(struct _LED_Device *Device)
{
if (!Device) /*����ʽ��̣��ж�Ϊ��ָ��*/
		return -1;
	
 /*ʹ��stm32hal����ʵ�֣�����Ԥ��*/

  return 0;
}


