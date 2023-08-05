#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two value = ");
    scanf("%d%d", &a,&b);

    if(a>b)
        printf("\nBiggest is a = %d", a);
    else
        printf("\n Biggest is b = %d", b);


}
