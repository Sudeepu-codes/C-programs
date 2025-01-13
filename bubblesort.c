//program to implement bubble sorting
#include<stdio.h>
void main()
{
    int n,i,j,c;
    printf("enter the array size\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                c = a[j];
                a[j] = a[j+1];
                a[j+1] = c;
            }
        }
    }
    printf("the sorted array is\n");
    for(i=0;i<n;i++)
    printf("%d\t\t",a[i]);
}