#include <stdio.h>
int main()
{
    int a, b, c = 1, d = 1, i, j;
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        scanf("%d", &b);
        c *= b;
    }
    printf("%d\n", c);
    for (j = 1; j <= c; ++j)
    {
        if(c%j == 0)
        {
            d *= j;
        }
        
    }
    printf("%d", d);

    return 0;
}