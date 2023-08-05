#include <stdio.h>
#include <math.h>
int main()
{
    int t, num;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        /* code */
        scanf("%d", &num);
        int sq_root = sqrt(num);
        if (sq_root * sq_root == num)
        {
            printf("Yes\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}