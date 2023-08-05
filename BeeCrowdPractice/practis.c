#include<stdio.h>
int main()
{
    int i,n,a,count,neg;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
        {
            scanf("%d", &a);
            if(a>0){
                count++;
            }else
            {
                neg++;
            }
        }
        printf("Positive = %d Negetive = %d", count,neg);


    return 0;
}
