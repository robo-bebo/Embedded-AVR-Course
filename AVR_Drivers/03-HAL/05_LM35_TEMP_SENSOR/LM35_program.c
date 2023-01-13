#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"ADC_interface.h"

/* Takes the same address as the passed pointer to temperature */
u8* Gptr_u8Temp;

/* Takes the same address as the ISR_logic */
void (*GFuncPtr) (void);

/* Takes the Digital reading of the ADC for ASYNC calling */
u16 Gu16_DigitalReading;

void HLM35_voidInitialize (void)
{
	/* initialize the ADC */
	u8 MADC_voidInitialize(void);
}

void HLM35_voidGetTempSync(u8 copy_u8AnalogChannel, u8* ptr_u8Temp)
{
	/* stores the Digital reading of the ADC */
	u16 DigitalReading;
	
	/* GET the Digital reading */
	MADC_u8ReadSync(copy_u8AnalogChannel, &DigitalReading);
	
	/* convert the reading to temperature */
	*ptr_u8Temp = ConvertDigitalToTemp(DigitalReading);
}

void HLM35_voidGetTempAsync(u8 copy_u8AnalogChannel,u8* ptr_u8Temp,void (*FuncPtr) (void))
{
	/* save the address of the return variable to be returned by another function */
	Gptr_u8Temp = ptr_u8Temp;
	
	/* saves the variable of the ISR_logic_function to be called by another function */
	GFuncPtr = FuncPtr;
	
	/* start the conversion */
	MADC_u8ReadAsync(copy_u8AnalogChannel, &Gu16_DigitalReading, &HLM35_voidCaluclateAsync);
}

void HLM35_voidCaluclateAsync (void)
{
	*Gptr_u8Temp = ConvertDigitalToTemp(Gu16_DigitalReading);
}