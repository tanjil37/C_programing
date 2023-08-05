#include <stdio.h>
int main()
{
    int i, n,ar[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int max=ar[0];
    int min=ar[0];

    for ( i = 0; i < n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
        if (min > ar[i])
        {
            min = ar[i];

        }
        
    }
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    

    return 0;
}