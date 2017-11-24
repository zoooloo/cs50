#include<stdio.h>
#include<math.h>
int main (void)
{
    float a,b,c,d,root1,root2;
   do
   {
    printf("enter num\n");
    scanf("%f,%f,%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if (d>0)
        {
            printf("Roots are real and distinct \n");
            root1 =(-b + sqrt(d)) / (2.0 * a);
            root2 =(-b - sqrt(d)) / (2.0 * a);
            printf("Root1 = %f  \n", root1);
            printf("Root2 = %f  \n", root2);
        }
        
}