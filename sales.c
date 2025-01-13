//program to calculate total sales given unit price,quantity, discount and tax rate
#include<stdio.h>
void main()
{
    double up,d,t;
    int q;
    printf("Enter the no. of products : ");
    scanf("%d",&q);
    printf("Enter the unit price : ");
    scanf("%lf",&up);
    printf("Enter the discount rate : ");
    scanf("%lf",&d);
    printf("Enter the taxrate : ");
    scanf("%lf",&t);
    double tbd = up * q;
    double dr = (d/100.0) * tbd;
    double tad = tbd - dr;
    double tamount = (t/100.0) * tad;
    double tsales = tad + tamount;
    printf("The total amount after discount : %lf\n",tad);
    printf("total amount before discount : %lf\n",tbd);
    printf("total amount after tax : %lf\n",tamount);
    printf("total sales : %lf\n",tsales);
}