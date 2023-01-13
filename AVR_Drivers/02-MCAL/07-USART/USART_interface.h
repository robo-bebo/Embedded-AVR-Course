#ifndef USART_INTERFACE_H
#define USART_INTERFACE_H

void MUSART_voidInitialize(void);
u8 MUSART_u8RecieveData(void);
void MUSART_voidSendData(u8 copy_u8Data);


#endif