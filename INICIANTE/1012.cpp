#include <iostream>
#include <cstdio>

#define pi 3.14159

int main() {
    double a,b,c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",(a*c/2),(pi*c*c),((a+b)*c/2),(b*b),(a*b));
}