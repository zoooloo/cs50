#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
   string s=get_string();
    
   for(int i=0;i<1;i++)
   {
       printf("%c",toupper(s[0]));
   }
   for(int i=0,n=strlen(s);i<n;i++)
   {
   if(s[i]==' '&&s[i+1]!='\0')
   {
       printf("%c\n",toupper(s[i+1]));
       i++;
   }
   }
   
}