#include<stdio.h>
int main()
{
    int a[4],i,j,tem;
    int count=0;
    for ( i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
     for (int i = 0; i < 4; ++i) 
        {
 
            for (j = i + 1; j < 4; ++j)
            {
                if (a[i] > a[j]) 
                {
                    tem =  a[i];
                    a[i] = a[j];
                    a[j] = tem;
                }
            }
        }

    for(int i=0; i<3; i++){
        if(a[i]==a[i+1]){
            count++;
        }
    }
    printf("%d\n", count);
}