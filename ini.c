#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void)
{
    string s= get_string();
    for(int n=0,i=strlen(s);n<i;n++)
    {
    printf("%c\n",s[n]);
    }
}