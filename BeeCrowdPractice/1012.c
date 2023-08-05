#include <stdio.h>
int main() {
    double a,b,c;
    scanf("%lf%lf%lf", &a,&b,&c);

    printf("TRIANGULO: %.3lf", (0.5*a*b));
    printf("CIRCULO: %.3lf", (3.14159*c*c) );

    printf("TRAPEZIO: %.3lf", (.5*(a+b)*c));
    printf("QUADRADO: %.3lf", (b*b));
    printf("RETANGULO: %.3lf", (a*b));
return 0;
}