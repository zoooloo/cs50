#include<stdio.h>
#include<cs50.h>
int main(void)
{
    long long cr_num,k,j,i,l;
    int rem=0,num,num1,rem1=0,sum,gr_9,c2,rem2=0,count=0,value=0,mul_2=0;
    printf("Enter credit card number\n");
    scanf("%lld",&cr_num);
    j=cr_num;
    k=cr_num;
    i=cr_num;
    while(j>0)
    {
        num=(j%10);
        rem=rem+num;
        j=j/100;
    }
    while(k>0)
    {
       k=k/10;
       num1=(k%10)*2;
       if(num1>9)
       {
           c2=num1;
           while(c2>0)
           {
              gr_9=c2%10;
              rem2=rem2+gr_9;
              c2=c2/10;
           }
       }
       else if(num1<=9)
       {
       rem1=rem1+num1;
       }
       k=k/10;
    }
    mul_2=rem1+rem2;
    sum=rem+mul_2;
    if(sum%10==0)
    {
    value++;
    }
    else
    printf("INVALID\n");
    if(value!=0)
    {
    while(cr_num>0)
    {
        cr_num=cr_num/10;
        count++;
    }
    if((((i/10000000000000==34))||(i/10000000000000==37))&&(count==15))
    printf("AMEX\n");
    l=100000000000000;
    if((((i/l==51)||(i/l==52)||(i/l==53)||(i/l==54)||(i/l==55)))&&(count==16))
    printf("MASTERCARD\n");
    if((((count==13)||count==16))&&((i/1000000000000000==4)||(i/1000000000000==4)))
    printf("VISA\n");
    }
    gets();

}