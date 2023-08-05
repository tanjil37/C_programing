#include<stdio.h>
#include<math.h>

int main ()
{
    double  a,b,c,s,area;

    printf("Enter the value of a,b,c = ");

    scanf("%lf%lf%lf", &a,&b,&c);

    s=(a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("\n Area of triangle is = %.2lf", area);

}
