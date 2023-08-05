#include <stdio.h>
int main()
{
    int  first[10][10], second[10][10], result[10][10], r1, r2, c1, c2, i, j, k;
    printf("Enter row and column for first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter row and column for second matrix: ");
    scanf("%d%d", &r2, &c2);
    while (c1 != r2)
    {
        printf("Error!! colum of first matrix not equal to row of second matrix\n");

        printf("Enter row and column for first matrix: \n");
        scanf("%d%d", &r1, &c1);
        printf("Enter row and column for second matrix: ");
        scanf("%d%d", &r2, &c2);
    }
    // taking input first matrix
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; i++)
        {
            printf("first[%d][%d]= ", i, j);
            scanf("%d", &first[i][j]);
        }
    }
    // taking input Second matrix
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; i++)
        {
            printf("Second[%d][%d]= ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    // print first matrix
    printf("\nFirst matrix\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < r2; j++)
        {
            printf("%d", first[i][j]);
        }
    }

    // print second matrix
    printf("\nSecond matrix\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < r2; j++)
        {
            printf("%d", second[i][j]);
        }
    }

    return 0;
}