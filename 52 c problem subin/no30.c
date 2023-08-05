#include <stdio.h>
int main()
{
    int t, n;

    unsigned long int sum = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }

            if (sum == n)
            {
                printf("Perfect Number\n");
            }
            else
            {
                printf("Unperfect Number\n");
            }
        }
    }
    return 0;
}