#include<stdio.h>
void main()
{
    int n,a[100],i,e,l=-1;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element to be searched\n");
    scanf("%d",&e);
    printf("Finding the location of the element\n");
    for(i=0;i<n;i++)
        if(a[i]==e)
    {
        l=i;
        printf("%d found at %d",e,l);
        break;
    }
    else
    printf("Element doesn't exist in the array\n");
}