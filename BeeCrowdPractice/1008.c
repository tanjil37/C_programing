#include <stdio.h>
int main() {
    int empoly_number,workHour;
    double salaryHour;

    scanf("%d%d%lf", &empoly_number, &workHour, &salaryHour);
    printf("NUMBER = %d\n", empoly_number);
    printf("SALARY = U$ %.2lf\n", workHour*salaryHour);


return 0;
}