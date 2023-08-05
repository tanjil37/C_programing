#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if((c*c)==(a*a + b*b))
        printf("Right angle triangle");
    else if((a+b)>c && (b+c)>a && (a+c)>b)
        printf("Triangle");

    else
        printf("NOt a triangle");
    return 0;
}

