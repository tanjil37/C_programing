#include<stdio.h>
int main()
{
    int N,i;
    float num1,num2,num3,avg;

    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%f%f%f", &num1,&num2,&num3);
        avg = (num1*2+num2*3+num3*5)/10;
        printf("%.1f\n", avg);
    }
    return 0;

}
