#include<stdio.h>
int main(void)
{
    int a,b;
    char w;
    printf("enter your choice\n");
    scanf("%c",&w);
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    switch(w)
    {
        case'+' :printf("%d+%d=%d",a,b,a+b);
                 break;
        case'-' :printf("%d-%d=%d",a,b,a-b);
                 break;
        case'*' :printf("%d*%d=%d",a,b,a*b);
                 break;
        case'%':printf("%d%d=%d",a,b,a%b);
                 break;
        case'/': printf("quotient=%f",(float)(a/b));
                 break;
        default :printf("Invaid");
    }
    
}