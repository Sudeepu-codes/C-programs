#include<stdio.h>
void main()
{
    int n,b,s,r;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The number is %d\n",n);
    b=n;
    s=0;
    while(n>0)
    {
        r = n % 10;
        s += r;
        n /= 10;
    }
    printf("the sum of digits of %d is %d\n",b,s);
}