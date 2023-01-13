#ifndef TWI_INTERFACE_H
#define TWI_INTERFACE_H

void MTWI_voidMasterInitialize(u8 copy_u8MasterAddress);

void MTWI_voidSlaveInitialize(u8 copy_u8SlaveAddress);

void MTWI_voidStart(void);

void MTWI_voidStop(void);

void MTWI_voidMasterSendData(u8 copy_u8Data);

void MTWI_voidSendAddress(u8 copy_u8Address, u8 copy_u8Direction);

void MTWI_voidGetData(u8* ptr_u8Data);


#define READ 	1
#define WRITE 	0



#endif
