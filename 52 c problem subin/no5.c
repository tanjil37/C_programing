#include <stdio.h>
int main()
{
    int t, i, j, n;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            /* code */
            for (int k = 0; k < n; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}