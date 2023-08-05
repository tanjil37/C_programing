#include <stdio.h>
int main()
{
    int x, y, i, n;
    x = i = 0;
    y = 2;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        x += i;
        x += y;
    }
    printf("x = %d\n", x);
    return 0;
}