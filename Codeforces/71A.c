#include <stdio.h>
#include <string.h>
int main()
{
    int test, len = 0;
    char str[100];
    scanf("%d", &test);
    while (test--)

    {
        scanf("%s", str);
        len = strlen(str);
        if (len > 10)
        {
            printf("%c%d%c", str[0], len - 2, str[len - 1]);
        }
        else
            printf("%s", str);
    }
}