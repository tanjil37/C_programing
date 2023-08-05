#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i=0,word=0;
    while (str[i]!='\0')
    {
        if (str[i]==' ' )
        {
           word++;
        }
        
        i++;
    }

    printf("Words=%d\n", word+1);
    return 0;
}