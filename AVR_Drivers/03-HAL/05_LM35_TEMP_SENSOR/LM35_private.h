#ifndef LM35_PRIVATE_H
#define LM35_PRIVATE_H

/* temp calculation for 10 bit resolution and 5 reference voltage */ 

#define ConvertDigitalToTemp(Reading) (((Reading)*(5000/1024))/10)

#endif