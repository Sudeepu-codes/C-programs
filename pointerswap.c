//program to swap two numbers using pointers
#include<stdio.h>
void main()
{
    int a,b,*p,*q,t;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    p = &a;
    q = &b;
    printf("the values of a and b before swap are %d and %d\n",*p,*q);
    t = *p;
    *p = *q;
    *q = t;
    printf("the values of a and b after swap are %d and %d\n\n",*p, *q);
}