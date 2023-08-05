#include <stdio.h>
int main() {
    int t,n,i,j,a;
    int sum=0;
    scanf("%d", t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &a);
            sum+=a;           
        }
    }
    printf("Case %d : %d\n", i+1,sum);
return 0;
}