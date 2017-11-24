#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void)
{
    printf("hai! how much change is owed?\n");
    float change=0,v;
    int m=0,r,e;
    r=0;
    do
    {
       change=get_float();
    }
    while(a<0);
    v=a*100;
    m=(int)round(v);

    while(m>=25)
    {
        e=m/25;
        r=r+e;
        m=m%25;
    }

    while(m>=10)
    {
        e=m/10;
        r=r+e;
        m=m%10;
    }

    while(m>=5)
    {
        e=m/5;
        r=r+e;
        m=m%5;
    }

    while(m>=1)
    {
        e=m/1;
        r=r+e;
        m=m%1;
    }
    printf("%d\n",r);

}

