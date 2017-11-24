#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc,string argv[])
{
    int v,n,i=0,store[1000];static int m,z;
    if (argc!=2)
    {
        printf("Wrong inputs\n");
    }
    else
    {
    string s=get_string();
    v=strlen(argv[1]);
    n=strlen(s);
    if(isalpha(s[i]))
    {
    for (i=0;i<n;i++)
    {
        m=i%v;
        z=toupper(argv[1][m]);
        store[m]=z-65;
        if (isupper (s[i]))
        {
        s[i]=(((((s[i]-'A')+store[m])%26))+65);
        printf("%c",toupper(s[i]));
        }
        if (islower(s[i]))
        {
        s[i]=(((((s[i]-'a')+store[m])%26))+97);
        printf("%c",tolower(s[i]));
        }
        else
        {
            if(!isalpha(s[i]))
            printf("%c",s[i]);
        }


    }
    }
    }
}