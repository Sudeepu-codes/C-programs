//program to demonstrate calculator functions
#include<stdio.h>
void main()
{
    int n,a,b,r;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n");
    printf("Enter your choice\n");
    scanf("%d",&n);
        switch(n)
        {
            case 1:{
                r = a + b;
                printf("the sum is %d\n",r);
            }
            break;
            case 2:{
                r = a - b;
                printf("the difference is %d\n",r);
            }
            break;
            case 3: {
                r = a * b;
                printf("the product is %d\n",r);
            }
            break;
            case 4:{
                if(b==0)
                {
                    printf("Division cannot be executed\n");
                    break;
                }
                else
                {
                    r = a / b;
                    printf("the quotient is %d\n",r);
                }
                break;
                case 5: {
                    if(b==0)
                    {
                        printf("The remainder cannot be found\n");
                        break;
                    }
                    else
                    {
                        r = a % b;
                        printf("the remainder is %d\n",r);
                    }
                    break;
                    default:printf("Invalid choice bro!\n"); 
                }

            }
        }
    }