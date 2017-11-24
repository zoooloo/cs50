#include<stdio.h>
int main (void)
{
float i,num,sum2,count,c;
printf("enter the number=");
scanf("%f",&num);
i=1;
c=2;
while(i<=num) 
{
  count=c/(c+1);
  sum2=i/(i+1);
  i=i+2;
  c=c+2;
}
printf("%f\n",sum2-count);

}