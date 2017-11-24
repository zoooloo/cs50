#include<stdio.h>
#include<cs50.h>
int main (void)
{
int i=0,num,reverse,rem;
reverse=0;
printf("enter the number\n");
scanf("%d",&num);
i=num;
while(num>0)
{
    rem=num%10;
    reverse=reverse*10+rem;
    num=num/10;
}
printf("%d",reverse);
if(i==reverse)
printf("\nyy");
else
printf("\nnono");
}