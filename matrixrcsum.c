//program to find row and column sum in a matrix
#include<stdio.h>
void main()
{
    int r,c,i,j,rs,cs;
    printf("enter the number of rows and columns\n");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c];
    printf("Enter the first array");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(i=0;i<r;i++)
        {
                rs = 0;
            for(j=0;j<c;j++)
            {
                rs += a[i][j];
            }
            printf("the sum of %d row is %d\n",i+1,rs);
        }
    }
    for(i=0;i<c;i++)
    {
        cs=0;
        for(j=0;j<r;j++)
        {
            cs += a[j][i];
        }
        printf("the sum of %d column is %d\n",i+1,cs);
    }
}