#include <stdio.h>
int main()
{
    char str[200];
    gets(str);
    int i, letter = 0, digit = 0, character = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] >= 'Z')
        {
            letter++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            character++;
        }
    }
    printf("Letter = %d\n", letter);
    printf("Digit = %d\n", digit);
    printf("Character = %d\n", character);
}