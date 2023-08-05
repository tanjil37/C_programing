#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ar[100];
    ar[0] = 0;
    ar[1] = 1;
    for (int i = 2; i < n; i++)
    {
        ar[i] = ar[i - 1] + ar[i - 2];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", ar[i]);
    }
    return 0;
}