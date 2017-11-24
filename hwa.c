#include<stdio.h>
int main (void)
{
int num,limit,c,count;
do
{
count=0;
printf("num=");
scanf("%d",&num);
printf("enter the limit:\n");
scanf("%d",&limit);
while(count<=limit)
{
    printf("%d*%d=%d\n",num,count,num*count);
    count++;
}
printf("\n\n enter 1 to continue");
scanf("%d",&c);
}while(c==1);

}