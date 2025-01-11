#include<stdio.h>
void main()
{
    int n,i,j,r,c;
    printf("enter the number of rows and columns\n");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c],s[r][c];
    printf("Enter the first array\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second array\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Computing the sum.....\n");
    printf("the resultant matrix is\n\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s[i][j] = 0;
            s[i][j] = a[i][j] + b[i][j];
            printf("%d\t\t",s[i][j]);
        }
        printf("\n");
    }
}