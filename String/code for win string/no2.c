#include <stdio.h>
int main()
{
    char text1[100];
    char text2[100];
    int i;
    gets(text1);

    for ( i = 0; text1[i] != '\0'; i++)
    {
        /* code */
        text2[i] = text1[i];
    }
    text2[i] = '\0';
    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
    printf("Total characters copied = %d\n", i);

    return 0;
}