#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc,string argv[])
{
if(argc!=2)
{
    printf("More than 2 arguments passed in\n");
    return -1;
}
else if( argc==2)
{
    int n=atoi(argv[1]);
    if(n>=0)
    {
    printf("plaintext: ");
    string s= get_string();
    printf("ciphertext: ");
    for(int i=0;i<strlen(s);i++)
    {
      if(isalpha(s[i]))
      {
         if(isupper(s[i]))
        {
           s[i]=((toupper(s[i])-'A')+n)%26;
           printf("%c",toupper(s[i]+'A'));

        }
       else
        {
           s[i]=((tolower(s[i])-'a')+n)%26;
           printf("%c",tolower(s[i]+'a'));

        }
     }
     else
     {
        printf("%c",s[i]);
     }
    }
     printf("\n");
     return 0;
}
}
}
