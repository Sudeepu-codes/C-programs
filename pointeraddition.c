//program to add two numbers using pointers
#include<stdio.h>
void main()
{ 
   int a,b,c=0,*p,*q,*r;
   printf("Enter two numbers\n");
   scanf("%d %d",&a,&b);
   p = &a;
   q = &b;
   r = &c;
   printf("calculating the sum using pointers...\n\n");
   *r = *p + *q;
   printf("the sum of %d, %d is %d using pointers\n\n\n",*p,*q,*r);
}