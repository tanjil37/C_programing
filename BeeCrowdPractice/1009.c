#include <stdio.h>
int main()
{
    char Name[50];
    double fixed_salary, total_sell, total_salary;
    scanf("%s", Name);
    scanf("%lf%lf", &fixed_salary, &total_sell);
    total_salary = fixed_salary + (total_sell * .15);
    printf("TOTAL = R$ %.2lf\n", total_salary);
    return 0;
}