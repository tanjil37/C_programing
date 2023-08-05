#include <stdio.h>
int main()
{
    int num, i,digit;

    scanf("%d", &num);
    for(i=0; i<num; i++)
    {
        scanf("%d", &digit);
        if (digit % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }

    return 0;
}