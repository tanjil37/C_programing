#include<stdio.h>
int main(){
    int x=0,t;
    scanf("%d", &t);
     char s[5];

    while (t--)
    {
        scanf("%s", s);
        if(s == "++X" || s == "X++"){
            x++;
        }else
        {
            x--;
        }
        
    }
    printf("%d\n", x);
    
}