#include <stdio.h>
int main()
{
    int ar[2][3], i, j, row, colum, sum[100];
    scanf("%d%d", &row, &colum);

    for (i = 0; i < row; i++)

    {
        sum[i] = 0;
        for (j = 0; j < colum; j++)
        {
            sum[i] += ar[i][j];
        }
    }
    for (i = 0; i < row; i++)
    {
        printf("Sum of %d row = %d\n", i + 1, sum[i]);
    }
}