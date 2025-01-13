//program to calculate student's weighted average score for a course with 4 quizzes, 2 midterms and one final exam. Quizzes are weighted 30 %, midterms 40 and final 30
#include<stdio.h>
void main()
{
    float q[4],m[2],fe,qa,ma,wa;
    printf("Enter the quiz marks\n");
    for(int i=0;i<4;i++)
    {
        scanf("%f",&q[i]);
    }
    printf("Enter the midterm marks\n");
    for(int i=0;i<2;i++)
    {
        scanf("%f",&m[i]);
    }
    qa=0.0;
    for(int i=0;i<4;i++)
    {
        qa += q[i];
    }
    qa /= 4.0;
    ma = (m[1] + m[2])/2.0;
    printf("Enter the final exam marks : ");
    scanf("%f",&fe);
    wa = (qa * 0.3) + (ma * 0.4) + (fe * 0.3);
    printf("quiz avg is %f\n",qa);
    printf("midterm avg is %f\n",ma);
    printf("weighted avg is %f\n",wa);
} 