#include<stdio.h>

int main()
{
    int a,rem,c=0,n=0;
    printf("TO FIND REVERSE OF A NUMBER AND PALINDROME\n\n");
    printf("Enter the number\n");
    scanf("%d",&a);
    n=a;
    while(a>0)
    {
        rem=a%10;  
        c=c*10+rem;
        a=a/10;
    }
    printf("%d is the reverse of the number\n",c);
    if(n==c)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }
}
