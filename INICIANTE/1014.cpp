#include <iostream>
#include <cstdio>

int main() {
    int distancia;
    double litros;

    scanf("%d", &distancia);
    scanf("%lf", &litros);

    pritnf("%.3lf km/l\n", distancia/litros);
}