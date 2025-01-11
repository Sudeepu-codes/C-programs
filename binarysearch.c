//program to implement binary search
#include<stdio.h>
void main()
{
    int n,l=-1,e,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element\n");
    scanf("%d",&e);
    int b,end,m;
    b = 0;
    end = n - 1;
    while(b<e)
    {
        m = (b+e)/2;
        if(e==a[m])
        {
            printf("element %d found at %d\n",e,m);
            break;
        }
        if(e>a[m])
        {
            b = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
}