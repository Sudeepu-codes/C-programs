#include<stdio.h>
void main()
{
    int n,a[6][6],i,j,r,c,t[6][6];
    printf("Enter number of rows\n");
    scanf("%d",&r);
    printf("Enter number of columns\n");
    scanf("%d",&c);
    printf("Enter the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("calculating the transpose of the above matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[i][j]=0;
            t[i][j] += a[j][i];
            printf("%d\t\t",t[i][j]);
        }
        printf("\n");
    }
}