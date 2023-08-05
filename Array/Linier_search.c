#include <stdio.h>
int main() {
    int i;
    int a[]={10,20,30,40,50};
    int value,pos= -1;;
    scanf("%d", &value);

    
    for ( i = 0; i < 5; i++)
    {
        if (value == a[i])
        {
            pos = i+1;
            break;
        }
    }
    if (pos == -1)
    {
        printf("Not found\n");
    }
    else{
        printf("The value is found at %d position\n", pos);
    }
    
    

return 0;
}