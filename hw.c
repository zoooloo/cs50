#include<stdio.h>
#include <cs50.h>
int main (void)
{  
     
    int n,m,r;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&r);
    if(n==m||n==r||m==r)
    {
        printf("two are equal\n\n");
    }
    if(n>r&&n>m)
    {
        printf("%d\n",n);
        if(r>m)
        printf("%d\n",r);
        else
        printf("%d\n",m);
    }
   else if(r>n&&r>m)
    {
        printf("%d\n",r);
        if(n>m)
        printf("%d\n",n);
        else
        printf("%d\n",m);
    }
    else if(m>r&&m>n)
    {
        printf("%d\n",m);
        if(r>n)
        printf("%d\n",r);
        else
        printf("%d\n",n);
    }
}    