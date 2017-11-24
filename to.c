#include<stdio.h>
int main(void)
{
    int a,b,c,l;
    printf("To find largest and second largest of three numbers\n\n");
    do
    {
    printf("enter the numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&a==c)
    printf("\n\nAll are equal");
    else if(a>=b&&a>=c)
    {
        printf("\n%d",a);
        if(b>c&&b!=a)
        printf("\n%d",b);
        else
        printf("\n%d",c);
    }
    else if(c>=b&&c>=a)
    {
        printf("\n%d",c);
        if(b>a&&b!=c)
        printf("\n%d",b);
        else
        printf("\n%d",a);
    }
    else if(b>=c&&b>=a)
    {
        printf("\n%d",b);
        if(a>c&&a!=b)
        printf("\n%d",a);
        else
        printf("\n%d",c);
    }
    printf("\n\n enter 1 to continue\n");
    scanf("%d",&l);
    }while(l==1);
}
