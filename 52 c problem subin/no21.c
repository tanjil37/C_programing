#include<stdio.h>
#include<string.h>
int main()
{
    int t,len;
    char str[1000];
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf(" %[^\n]", str);
        len = strlen(str);
        for (int i = len-1; i >=0; i--)
        {
            printf("%c", str[i]);
        }
        
    }
    
}