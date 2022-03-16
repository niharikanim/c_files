
/*  Program to sum the diagonal elements in a 2D array */
#include<stdio.h>
int main()
{
    int m,n,i=0,j=0,sum=0;
    printf("Enter the number of rows of an array\n");
    scanf("%d",&m);
    printf("Enter the number of columns of an array\n");
    scanf("%d",&n);
    int array[m][n];
    printf("Enter the elements of the array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           if(i==j)
           sum=sum+array[i][i];
        }
    }
    printf("%d\n",sum);
}