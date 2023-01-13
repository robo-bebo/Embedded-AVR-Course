#ifndef STEPPER_INTERFACE_H
#define STEPPER_INTERFACE_H


#define CLOCK_WISE 0
#define ANTI_CLOCK_WISE 1

void HSTEPPER_voidClockwise(void);
void HSTEPPER_voidAntiClockwise(void);
void HSTEPPER_voidInitialize(void);
void HSTEPPER_voidMoveByDegree(u8 copy_u8Degree, u8 copy_u8Direction);

#endif