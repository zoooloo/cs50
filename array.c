#include<stdio.h>
int main()
{
    int a[100][100],b[100][100];
    int i,j,m,n,l,p;
    printf("Addition and subtraction of two matrices\n\n");
    do
    {
    printf("Enter the number of rows and columns\n");
    printf("matrix 1\n");
    printf("rows=");
    scanf("%d",&m);
    printf("\ncolumns=");
    scanf("%d",&n);
    printf("\n\nmatrix 2\n");
    printf("rows=");
    scanf("%d",&l);
    printf("\ncolumns=");
    scanf("%d",&p);
    }while(m!=l&&n!=p);
    printf("\n\nValues of matrix 1\n");
    for(i=0;m>i;i++)
    {
        for(j=0;n>j;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\n\nValues of matrix 2\n");
    for(i=0;l>i;i++)
    {
        for(j=0;p>j;j++)
        scanf("%d",&b[i][j]);
    }
    printf("\nAddition\n");
    for(i=0;l>i;i++)
    {
        for(j=0;p>j;j++)
       {
        printf("%d\t",b[i][j]+a[i][j]);
       }
       printf("\n");
    }
     printf("\nsubtraction\n");
    for(i=0;l>i;i++)
    {
        for(j=0;p>j;j++)
       {
        printf("%d\t",a[i][j]-b[i][j]);
       }
        printf("\n");
       
    }
    
}