// Following the Luhn’s algorithm to check the validity of a credit card.
// which is as follows:
// 1.))Multiply every other digit by 2, starting with the number’s second-to-last digit,
// and then add those products' digits together.

//2.))Add the sum to the sum of the digits that weren’t multiplied by 2.

//3.))If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0),
// the number is valid!

#include<stdio.h>
#include<cs50.h>
int main(void)
{
    long long cr_num=0,k,j=0,i=0,l=0;
    int rem=0,num=0,num1=0,rem1=0,sum,gr_9=0,c2=0,rem2=0,count=0,value=0,mul_2=0;
    printf("Enter credit card number\n");
     do
    {

       scanf("%lld",&cr_num);
    }while(cr_num<0);

    {
    j=cr_num;
    k=cr_num;
    i=cr_num;
    while(j>0)             //taking the alternate values(from n) and adding them,
    {
        num=(j%10);
        rem=rem+num;
        j=j/100;
    }
    while(k>0)            //taking the alternate values(from(n-1)) multiplying them by two and adding them
    {
       k=k/10;
       num1=(k%10)*2;
       if(num1>9)        // separating the two digit numbers into two separate digits and adding them together
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
    mul_2=rem1+rem2;                //adding mul_2 and rem
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
    //validations for various credit cards
    if((((i/10000000000000==34))||(i/10000000000000==37))&&(count==15))
    printf("AMEX\n");
    l=100000000000000;
    if((((i/l==51)||(i/l==52)||(i/l==53)||(i/l==54)||(i/l==55)))&&(count==16))
    printf("MASTERCARD\n");
    if((((count==13)||count==16))&&((i/1000000000000000==4)||(i/1000000000000==4)))
    printf("VISA\n");
    }

}
}