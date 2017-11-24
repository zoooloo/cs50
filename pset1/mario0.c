#include <stdio.h>
#include <cs50.h>
int main (void)
{
    printf("height =");
    int n,j,z=0,y=1;

   do
    {
        n= get_int();

    }   while (n<0||n>23);

    for(int i=0;i<n;i++)
    {
      for(z=0;z<n-i-1;z++)
          {
              printf(" ");
          }
      for(j=0;j<i+1;j++)
          {
              printf("#");
          }
      for(z=0;y<n-z-1;z++)
          {
              printf(" ");
          }
      for(j=0;j<i+1;j++)
          {
              printf("#");
          }
          printf("\n");
          }
      for(z=0;y<n-z-1;z++)
          {
              printf(" ");
          }
    }
