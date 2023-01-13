/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: ADC				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/


#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H


/*used to start the ADC*/
u8 MADC_voidInitialize(void);

/*this function makes only one conversion when called and blocks the 
  processor until the conversion is done*/
u8 MADC_u8ReadSync(u8 copy_u8Channel,u16* ptr_u16Output);

/*this function makes only one conversion but enables the ADC interrupt*/
u8 MADC_u8ReadAsync(u8 copy_u8Channel,u16* ptr_u16Output,void (*FuncPtr) (void));


/* analog channels */
#define ADC_A0 	0
#define ADC_A1	1
#define ADC_A2 	2
#define ADC_A3 	3
#define ADC_A4 	4
#define ADC_A5	5
#define ADC_A6	6
#define ADC_A7 	7


#endif
