#include <stdio.h>
int main()
{
    char s1[30];
    gets(s1);
    int i = 0, len = 0;

    while (s1[i] != '\0')
    {
        /* code */
        i++;
        len++;
    }
    printf("Lenth = %d", len);
}