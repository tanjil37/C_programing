#include <stdio.h>
int main()
{
    double A, B, C,avg;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    avg=((A*2)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %.1lf", avg);
    return 0;
}