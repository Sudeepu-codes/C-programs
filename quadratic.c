//program to compute roots of a quadratic equation
#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,r1,r2,d,x,y;
    printf("Enter the coefficients ax^2 + bx + c\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0)
    printf("the coefficient of x^2 cannot be zero\n");
    else
    {
        d = b * b - 4 * a * c;
        if(d==0)
        {
            printf("The roots are real and equal\n");
            r1 = - b / ( 2 * a );
            r2 = r1;
            printf("the roots of the equation are %f and %f\n",r1,r2);
        }
        else
        if(d>0)
        {
            printf("Real and distinct  roots\n");
            r1 = (-b+sqrt(d))/(2*a);
            r2 = (-b-sqrt(d))/(2*a);
            printf("The roots are %f and %f\n",r1,r2);
        }
        else
        if(d<0)
        {
            x = -b/(2*a);
            y=sqrt(fabs(d))/(2*a);
            printf("root 1 = %f + i %f\n",x,y);
            printf("root 2 = %f - i %f\n",x,y);
        }
    }
}