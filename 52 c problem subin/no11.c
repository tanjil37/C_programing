#include <stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    long long int factorial = 1;
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = 2; j <= n; j++)
        {
            factorial = factorial * j;
        }

        printf("%lld\n", factorial);
        factorial=1;
    }

    return 0;
}