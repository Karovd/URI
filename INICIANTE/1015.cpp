#include <iostream>
#include <cstdio>
#include <cmath>

class Ponto {
    public:
    double x, y;
};

int main() {
    Ponto p1,p2;

    scanf("%lf", &p1.x);
    scanf("%lf", &p1.y);
    scanf("%lf", &p2.x);
    scanf("%lf", &p2.y);

    printf("%.4lf\n", sqrt(pow(p2.x - p1.x, 2.0) + pow(p2.y - p1.y, 2.0)));
}