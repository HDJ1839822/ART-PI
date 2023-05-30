#include "Serial_Device_struct.h"
//#include "Serial_Device_interface.h"



  int Serial_Init(struct _SERIAL_Device *Device)
	{
	
	return 0;
	}
	
	int Send(struct _SERIAL_Device *Device, char *buf, int len)
	{
	return 0;
	}
	
	int Receive(struct _SERIAL_Device *Device, char *buf, int len)
	{
	
	return 0;
	}







	SERIAL_Device  SSLED_Device[]={
	{
		.name="USART4",
		.Serial_Init=Serial_Init,
		.Send=Send,
    .Receive=Receive,
	},
	
		{
		.name="USART1",
		.Serial_Init=Serial_Init,
		.Send=Send,
    .Receive=Receive,
		},
	};

