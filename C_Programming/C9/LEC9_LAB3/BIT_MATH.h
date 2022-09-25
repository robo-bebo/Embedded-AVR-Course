/*Write a header file that provides the following functions like macros:
1- Set_Bit(Var,BitNo) -> This macro will set the bit number (BitNo) in the variable (Var) to 1
2- Clr_Bit(Var,BitNo) -> This macro will set the bit number (BitNo) in the variable (Var) to 0
3- Toggle_Bit(Var,BitNo) -> This macro will toggle the bit number (BitNo) in the variable (Var)*/




#define Set_Bit(Var,BitNo)	Var=((1<<BitNo)|Var)
#define Clr_Bit(Var,BitNo)	Var=(~(1<<BitNo)&Var)
#define Tog_Bit(Var,BitNo)	Var=((1<<BitNo)^Var)
#define Get_Bit(Var,BitNo)	((Var>>BitNo)&1)
