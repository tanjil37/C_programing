#include <stdio.h>
#include<string.h>
int main()
{
    char str[100], reverse[100];
    int i,strIndex,revIndex,len;
    gets(str);
    len=strlen(str);
    revIndex = 0;
    strIndex = len-1;
     while(strIndex >= 0)
    {
        reverse[revIndex] = str[strIndex];

        strIndex--;
        revIndex++;
    }
    reverse[revIndex] = '\0';

    printf("\nOriginal string = %s\n", str);
    printf("Reverse string = %s", reverse);

    return 0;
    



    

    
}