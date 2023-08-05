#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a,b = ");
    scanf("%d%d", &a,&b);
    if(a>b)
        printf("Biggest is %d\n", a);
    else
        printf("Biggest is %d\n", b);

    return 0;

}
