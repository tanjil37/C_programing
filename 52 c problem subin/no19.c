#include <stdio.h>
int main()
{
    int t, count = 0;
    char str[1000];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf(" %[^\n]", str);

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ' ')
            {
                count++;
            }
        }
        
        printf("%d", count + 1);
        count = 0;
    }

    return 0;
}