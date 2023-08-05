#include <stdio.h>
int main() {
    int i, j,row,column,ar[10][10], br[10][10],cr[10][10];

    scanf("%d%d", &row, &column);
    for ( i = 0; i < row; i++)
    {
        for(j=0; j<column; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for ( i = 0; i < row; i++)
    {
        for(j=0; j<column; j++)
        {
            scanf("%d", &br[i][j]);
        }
    }
    for ( i = 0; i < row; i++)
    {
        for(j=0; j<column; j++)
        {
            cr[i][j]=ar[i][j]-br[i][j];
        }
    }
    for ( i = 0; i < row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d\t", cr[i][j]);
        }
        printf("\n");
    }
    
return 0;
}