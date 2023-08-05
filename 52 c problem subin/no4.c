#include <stdio.h>
int main()
{
    int n, i, j, t;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t);
        for (j = 1; j <= t; j++)
        {
            if (t % j == 0)
            {
                printf("%d\t", j);
            }
        }
        printf("\n");   
    }
    return 0;
}