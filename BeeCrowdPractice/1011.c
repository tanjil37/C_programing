#include <stdio.h>
int main()
{
    double pi = 3.14159, r, area;

    scanf("%lf", &r);

    area = (4 / 3.0) * pi * r * r * r;

    printf("VOLUME = %.3lf", area);
    return 0;
}