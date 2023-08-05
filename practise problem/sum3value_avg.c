#include<stdio.h>

int main()
{

    int a,b,c,sum;
    float avg;

    printf("Enter the three value: ");

    scanf("%d%d%d", &a,&b,&c);

    sum = a+b+c;

    avg = (float)sum/3;
    printf("sum =  %d\n", sum);
    printf("Average = %f\n", avg);
}
