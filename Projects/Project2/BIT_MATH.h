#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(Var,BitNo)			Var=((1<<BitNo)|Var)
#define CLR_BIT(Var,BitNo)			Var=(~(1<<BitNo)&Var)
#define TOG_BIT(Var,BitNo)			Var=((1<<BitNo)^Var)
#define WRITE_BIT(Var,BitNo,Value)	Var=((Var&(~(1<<BitNo)))|(Value<<BitNo))
#define GET_BIT(Var,BitNo)			((Var>>BitNo)&1)


#endif
