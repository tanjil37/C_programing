#include <stdio.h>
int main() {
    int x,i,sum=0;
    scanf("%d", &x);
   for ( i = 0; i < x; i++)
   {
    if (i%2==1)
    {
        sum=sum+i;
        printf("%d\n", sum);
    }
    
   }
   
return 0;
}