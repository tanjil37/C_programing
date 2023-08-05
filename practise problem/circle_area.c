#include<stdio.h>
#include<math.h>

int main()
{
    float  red, area, ci;

    printf("Enter the value of  radius = ");
    scanf("%f",&red);

    area = M_PI*red*red;


    printf("\n Area of circle = %f", area);

    ci = 2*M_PI*red;

    printf("\n Circumference = %f", ci);

}
