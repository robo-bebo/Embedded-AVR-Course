
#ifndef TCNT0_REGISTERS_H_
#define TCNT0_REGISTERS_H_

#define	TCCR0	 *((volatile u8*)0x53)
#define TCCR0_CS00    0
#define TCCR0_CS01    1
#define TCCR0_CS02    2
#define TCCR0_WGM01   3
#define TCCR0_COM00   4
#define TCCR0_COM01   5
#define TCCR0_WGM00   6
#define TCCR0_FOC0    7


#define TCNT0    *((volatile u8*)0x52)
#define OCR0     *((volatile u8*)0x5C)


#define TIMSK    *((volatile u8*)0x59)
#define TIMSK_TOIE0        0
#define TIMSK_OCIE0        1

#define TIFR     *((volatile u8*)0x58)
#define TIFR_TOV0          0
#define TIFR_OCF0          1

#define SFIOR    *((volatile u8*)0x50)
#define SFIOR_PSR10			0

/* DIO PORTB register to set OC0 to output when needed */
#define DDRB_REG     *((volatile u8*)0x37)
#define DDRB_PIN0 3

#endif /* TCNT0_REGISTERS_H_ */
