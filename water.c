#include <cs50.h>
#include <stdio.h>
int main (void)
{
   printf("calculation of water consumption in a day\n");
   printf("1.drinking water consumption..\n");
   printf("where x= body weight\n");
   printf("x is  ");
   float x = get_float();
   int   y = 30 ;
   float z = x/y;
   printf("%f liters\n",z);
   printf("1. water consumption in washroom\n");
   printf("A. while bathing-");
   printf("\n where w = minutes for which shower is left on\n");
   printf("w is ");
   float w = get_float();
   float e = 5.67 ;
   float m = w*e;
   printf("%f liters \n",m);
   float r= m + z;
   printf("total consumption = %f liters \n", r);
   
}