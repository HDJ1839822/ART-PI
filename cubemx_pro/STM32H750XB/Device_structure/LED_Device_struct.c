#include "LED_Device_struct.h"
#include "LED_Device_interface.h"



/*************Function declaration line*************/
int Turn_on(struct _LED_Device *Device);
int Turn_off(struct _LED_Device *Device);
	

/***************************************************/
int Turn_on(struct _LED_Device *Device)
	{
	
	  return Interface_Turn_on(Device);
	}
	
	int Turn_off (struct _LED_Device *Device)
	{
		
		return Interface_Turn_off(Device);
	
	}

	
	int GPIO_Init (struct _LED_Device *Device)
	{
		
		return Interface_GPIO_Init(Device);
	
	}


	/*设备初始化*/
	LED_Device SLED_Device[]={
		{
		   .name="LED_R",
		   .GPIO_Init=GPIO_Init,
		   .Turn_on=Turn_on,
	     .Turn_off=Turn_off,
		},
		
		{
		   .name="LED_B",
		   .GPIO_Init=GPIO_Init,
		   .Turn_on=Turn_on,
		   .Turn_off=Turn_off,
		},
	
	};
	
	
	pLED_Device Get_led_Device(int witch){
	
	  return &SLED_Device[witch];
	}

