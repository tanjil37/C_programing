#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    gets(s1);
    gets(s2);

    int d = strcmp(s1,s2);
    if(d==0)
    {
        printf("The text is equal");
    }
    else
    {
        printf("The text are not equal");
    }
    
}