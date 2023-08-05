#include <stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u'

        )
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
                 str[i] == 'U')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("%s", str);

    return 0;
}