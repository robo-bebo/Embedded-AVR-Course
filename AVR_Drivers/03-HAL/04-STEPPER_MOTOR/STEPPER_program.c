#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"STEPPER_interface.h"
#include"DIO_interface.h"
#include"STEPPER_config.h"
#include"util/delay.h"

void HSTEPPER_voidClockwise(void)
{
	MDIO_voidSetPinValue(OUTPUT_PORT,T1,LOW);
	MDIO_voidSetPinValue(OUTPUT_PORT,T2,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T3,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T4,HIGH);
	_dealy_ms(10);
	
	MDIO_voidSetPinValue(OUTPUT_PORT,T1,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T2,LOW);
	MDIO_voidSetPinValue(OUTPUT_PORT,T3,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T4,HIGH);
	_dealy_ms(10);
	
	MDIO_voidSetPinValue(OUTPUT_PORT,T1,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T2,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T3,LOW);
	MDIO_voidSetPinValue(OUTPUT_PORT,T4,HIGH);
	_dealy_ms(10);
	
	MDIO_voidSetPinValue(OUTPUT_PORT,T1,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T2,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T3,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T4,LOW);
	_dealy_ms(10);
		

}


void HSTEPPER_voidAntiClockwise(void)
{
	
	MDIO_voidSetPinValue(OUTPUT_PORT,T1,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T2,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T3,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T4,LOW);
	_dealy_ms(10);
	
	MDIO_voidSetPinValue(OUTPUT_PORT,T1,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T2,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T3,LOW);
	MDIO_voidSetPinValue(OUTPUT_PORT,T4,HIGH);
	_dealy_ms(10);

	MDIO_voidSetPinValue(OUTPUT_PORT,T1,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T2,LOW);
	MDIO_voidSetPinValue(OUTPUT_PORT,T3,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T4,HIGH);
	_dealy_ms(10);
	
	MDIO_voidSetPinValue(OUTPUT_PORT,T1,LOW);
	MDIO_voidSetPinValue(OUTPUT_PORT,T2,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T3,HIGH);
	MDIO_voidSetPinValue(OUTPUT_PORT,T4,HIGH);
	_dealy_ms(10);
		
	
}

void HSTEPPER_voidInitialize(void)
{
	MDIO_voidSetPortDirection(OUTPUT_PORT,OUTPUT);
	MDIO_voidSetPortValue(OUTPUT_PORT,HIGH);
}

void HSTEPPER_voidMoveByDegree(u8 copy_u8Degree, u8 copy_u8Direction)
{
	f32 angle_per_half_step = STRIDE_ANGLE;
	u32 steps_no = 360/(angle_per_half_step*2);
	u32 no_of_iterations_per_rev = steps_no / 4;
	no_of_iterations = (no_of_iterations_per_rev*copy_u8Degree)/360;
	
	
	if(copy_u8Direction == CLOCK_WISE)
	{
		u16 i;
		for(i=0; i<no_of_iterations; i++)
		{
			MDIO_voidSetPinValue(OUTPUT_PORT,T1,LOW);
			MDIO_voidSetPinValue(OUTPUT_PORT,T2,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T3,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T4,HIGH);
			_dealy_ms(10);
			
			MDIO_voidSetPinValue(OUTPUT_PORT,T1,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T2,LOW);
			MDIO_voidSetPinValue(OUTPUT_PORT,T3,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T4,HIGH);
			_dealy_ms(10);
			
			MDIO_voidSetPinValue(OUTPUT_PORT,T1,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T2,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T3,LOW);
			MDIO_voidSetPinValue(OUTPUT_PORT,T4,HIGH);
			_dealy_ms(10);
			
			MDIO_voidSetPinValue(OUTPUT_PORT,T1,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T2,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T3,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T4,LOW);
			_dealy_ms(10);
		}
	}
	
	else if(copy_u8Direction == ANTI_CLOCK_WISE)
	{
		u16 i;
		for(i=0; i<no_of_iterations; i++)
		{
			MDIO_voidSetPinValue(OUTPUT_PORT,T1,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T2,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T3,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T4,LOW);
			_dealy_ms(10);
			
			MDIO_voidSetPinValue(OUTPUT_PORT,T1,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T2,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T3,LOW);
			MDIO_voidSetPinValue(OUTPUT_PORT,T4,HIGH);
			_dealy_ms(10);
			
			MDIO_voidSetPinValue(OUTPUT_PORT,T1,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T2,LOW);
			MDIO_voidSetPinValue(OUTPUT_PORT,T3,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T4,HIGH);
			_dealy_ms(10);
		
			MDIO_voidSetPinValue(OUTPUT_PORT,T1,LOW);
			MDIO_voidSetPinValue(OUTPUT_PORT,T2,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T3,HIGH);
			MDIO_voidSetPinValue(OUTPUT_PORT,T4,HIGH);
			_dealy_ms(10);
		}
		
	}
}
