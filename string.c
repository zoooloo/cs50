#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void)
{
  for(int i=0;i<123;i++)
  {
      printf("%c is %d\n",(char)i,i);
  }
  printf("%d",5%26);
}