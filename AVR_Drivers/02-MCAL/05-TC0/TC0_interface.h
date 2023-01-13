#ifndef TCNT0_INTERFACE_H_
#define TCNT0_INTERFACE_H_


void MTC0_voidInitialize(void);

void MTC0_voidDelayMillis(u32 copy_u32TimeMilliSec);

void MTC0_voidStartCountAsync(void (* ptr_ISR_logic)(void), u32 copy_u32TimeMilliSec);

#endif
