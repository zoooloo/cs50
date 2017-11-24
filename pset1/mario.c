#include <stdio.h>
#include <cs50.h>
void space();
void hash();
int main (void)
{   printf("height =");
    int i,j,z;
    static int n;

   do
    {
        n= get_int();

    }   while (n<0||n>23);
    for(i=0;i<n;i++)
    {
         for(z=0;z<n-i-1;z++)
          {
              printf(" ");
          }
         for(j=0;j<i+2;j++)
          {
              printf("#");
          }
          printf("\n");
    }
    }




