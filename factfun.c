//program to calculate factorial of a number using function with arguments and with return type
#include<stdio.h>
int factorial(int x)
{
    int f=1;
    for(int i=1;i<=x;i++)
    {
        f *= i;
    }
    return f;
}
void main()
{
    int n,r;
    printf("enter a number : ");
    scanf("%d",&n);
    r= factorial(n);
    printf("The factorial of %d is %d\n",n,r);
}