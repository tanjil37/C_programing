#include<stdio.h>
int main()
{
    int length,breadth,area;

    printf("Enter the length of rectangle: ");

    scanf("%d",&length);

    printf("Enter the breath of rectangle: ");

    scanf("%d", &breadth);

    area= length * breadth;

    printf("area of rectangle: %d", area);

    return 0;

}
