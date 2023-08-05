#include<stdio.h>
int main(){
    int t;
    char str[100];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf(" %[^\n]", str);
        for (int i = 0; str[i] != '\0'; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                printf("%d", str[i]-64);
            }
        }
        
    }
    return 0;
}