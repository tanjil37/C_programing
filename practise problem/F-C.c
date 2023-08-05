#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter the furan height temperature = ");

    scanf("%f", &f);
    c=(f-32)*5/9;
    printf("\n The temperature is =  %.2f", c);
}
