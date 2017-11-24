#include<stdio.h>
int main()
{
    float a,b,c,d,r;
    char w;
    printf("A program to perform mathematical operations\n\n");
    printf("enter 't' for area of triangle\nenter'r' for area of rectangle\n");
    printf("enter'c' forarea of circle\n\n");
    printf("Enter your choice:");
    scanf("%c",&w);
   
    switch(w)
    {
        case 't': printf("\n\nEnter the dimentions\n");
                  printf("Height:");
                  scanf("%f",&a);
                  printf("\nBase:");
                  scanf("%f",&b);
                  printf("\nArea=%f",0.5*(a*b));
                  break;
        case 'r': printf("\n\nEnter the dimentions\n");
                  printf("Length:");
                  scanf("%f",&c);
                  printf("\nBreadth:");
                  scanf("%f",&d);
                  printf("\nArea:%f",c*d);
                  break;
        case'c' : printf("\n\nEnter the dimentions\n");
                  printf("Radius:");
                  scanf("%f",&r);
                  printf("\nArea:%f",3.14*(r*r));
                  break;
        }
    printf("\n\n END PROGRAM\n");
}
