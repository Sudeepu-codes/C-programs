//program to find if a number is palindrome using function without argument with return type
#include<stdio.h>
int palindrome()
{
    int n,b,r,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("the number is %d\n",n);
    b=n;
    while(n>0)
    {
        r= n % 10;
        s+=r;
        n /= 10;
    }
    if(s==b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    int n=palindrome();
    if(n)
    {
        printf("Palindrome!\n");
    }
    else{
        printf("not a palindrome!\n");
    }
}