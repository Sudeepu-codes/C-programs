/* program to read username, units consumed and print charges. For <=200 units 0.8 rp, for next 100 units 0.9 rp
and beyond 300 units 1rp*/
#include<stdio.h>
void main()
{
    char s[100];
    int n,p;
    printf("Enter your name\n");
    scanf("%s",s);
    printf("enter number of units consumed\n");
    scanf("%d",&n);
    if(n<=200)
    {
        p = n * 0.8;
    }
    else
    if(n<=300)
    {
        p = (200 * 0.8)+((n-200) * 0.9);
    }
    else
    if(n>300)
    {
        p = (200*0.8)+(100*0.9)+((n-300)*1);
    }
    printf("your name : %s\n",s);
    printf("your ebill price : %d\n",p);
}
