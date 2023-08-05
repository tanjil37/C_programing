#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d", &x);
    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\nl", x,i,x*i);
    }
    return 0;
}
