#include<stdio.h>
#include<cs50.h>
int main()
{
    int a[10][10],n,m,i,j;
    printf("Enter the number of rows\n");
    scanf("%d",&m);
    printf("Enter the number of columns\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(j=0;m>j;j++)
    {
        for(i=0;n>i;i++)
        scanf("%d",&a[j][i]);
    }
    printf("\n\nThe given matrix is\n ");
    for(j=0;m>j;j++)
    {
        for(i=0;n>i;i++)
       {
           printf("%d\t",a[j][i]);
       }
       printf("\n");
    }
    printf("\nTranspose is\n");
    for(j=0;n>j;j++)
    {
        for(i=0;m>i;i++)
       {
           printf("%d\t",a[i][j]);
       }
       printf("\n");
    }
    
}