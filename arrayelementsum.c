//program to calculate sum and average of elements in an array
#include<stdio.h>
void main()
{
    int n,a[100],i,s=0;
    float av=0.0;
    printf("enter the number of elements of the array\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Computing the sum\n");
    for(i=0;i<n;i++)
    {
        s += a[i];
    }
    printf("the sum of all the elements of the above array is %d\n",s);
    printf("Calculating the average of all those elements\n");
    av = s / n;
    printf("The average of all the array elements is %f\n",av);

}