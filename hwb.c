#include<stdio.h>
int main (void)
{
float i,num,count,sum2,c;
printf("enter the number=");
scanf("%f",&num);
i=1;
c=2;
while(i<=num)
{
  sum2=i/(i+1);
  count=c/(c+1);
  sum2=sum2+2;
  count=count+2;
  
}
printf("%f\n",sum2-count);
}
