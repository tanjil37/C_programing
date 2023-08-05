#include<stdio.h>
int main(){
    int n,k,cnt=0,i,a;
    scanf("%d%d", &n,&k);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if(a>k){
            cnt++;
        }
    }
    printf("%d", cnt);
}