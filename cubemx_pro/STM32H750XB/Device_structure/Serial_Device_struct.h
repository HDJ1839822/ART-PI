#ifndef __SERIAL_DEVICE_STRUCT_H
#define __SERIAL_DEVICE_STRUCT_H

#include "stdint.h"






typedef struct _SERIAL_Device{
	uint8_t *name;
	int (*Serial_Init)(struct _SERIAL_Device *Device);
	int (*Send)(struct _SERIAL_Device *Device, char *buf, int len);
	int (*Receive)(struct _SERIAL_Device *Device, char *buf, int len);
	}SERIAL_Device, *pSERIAL_Device;


pSERIAL_Device Get_serial_Device(int witch);

#endif /*__SERIAL_DEVICE_STRUCT_H*/
