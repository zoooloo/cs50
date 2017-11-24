#include<stdio.h>
int main()
{
    int a[10][10],m,n,i,j,l=1;
    printf("Identity Matrix\n\n");
    printf("Enter the no of rows:");
    scanf("%d",&m);
    printf("\nEnter the no of columns");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    }
    printf("\nMatrix:\n");
     for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
      printf("%d\t",a[i][j]);
      }
      printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0&&a[i][j]!=1)
            {
                l=0;
                break;
            }
        }
    }
    if(l==1)
    printf("\nIdentity Matrix\n");
    else
    {
        printf("\nNot an Identity Matrix\n");
    }
}