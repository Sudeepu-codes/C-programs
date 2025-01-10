
#include<stdio.h>
void main()
{
    int n, a=0,b=1,c=0;
    printf("Enter number of fibonacci digits to be printed\n");
    scanf("%d",&n);
    printf("the fibonacci digits are:\n");
    printf("%d\n%d\n",a,b);
    for(int i=2;i<n;i++)
    {
        c = a + b;
        printf("%d\n",c);
        a=b;
        b=c;
    }   
}
