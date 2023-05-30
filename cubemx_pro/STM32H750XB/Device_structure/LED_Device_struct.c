#include "LED_Device_struct.h"
#include "LED_Device_interface.h"


/***************************************************/
int Turn_on_R(struct _LED_Device *Device)
	{
	
	  return Interface_Turn_on_R(Device);
	}
	
	int Turn_off_R (struct _LED_Device *Device)
	{
		
		return Interface_Turn_off_R(Device);
	
	}

	int GPIO_Init_R (struct _LED_Device *Device)
	{
		
		return Interface_GPIO_Init_R(Device);
	
	}
	
	
	
	
	int Turn_on_B(struct _LED_Device *Device)
	{
	
	  return Interface_Turn_on_B(Device);
	}
	
	int Turn_off_B (struct _LED_Device *Device)
	{
		
		return Interface_Turn_off_B(Device);
	
	}

	int GPIO_Init_B (struct _LED_Device *Device)
	{
		
		return Interface_GPIO_Init_B(Device);
	
	}


	/*设备初始化*/
	LED_Device SLED_Device[]={
		{
		   .name="LED_R",
		   .GPIO_Init=GPIO_Init_R,
		   .Turn_on=Turn_on_R,
	     .Turn_off=Turn_off_R,
		},
		
		{
		   .name="LED_B",
		   .GPIO_Init=GPIO_Init_B,
		   .Turn_on=GPIO_Init_B,
		   .Turn_off=GPIO_Init_B,
		},
	
	};
	
	
	pLED_Device Get_led_Device(int witch){
	
	  return &SLED_Device[witch];
	}

