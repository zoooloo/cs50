#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
int main(int argc,string argv[])
{
     for(int i=1;i<argc;i++)
     {  
     for(int j=0;j<1;j++)
     {
     printf("%c",toupper(argv[i][0]));
     }
}
     printf("\n");
    
    
}