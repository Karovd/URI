#include <iostream>
#include <cstdio>

class Produto {
    public:
    int codigo, quantidade;
    double valor;
};

int main() {
    Produto p1, p2;
    scanf("%d", &p1.codigo);
    scanf("%d", &p1.quantidade);
    scanf("%lf", &p1.valor);
    scanf("%d", &p2.codigo);
    scanf("%d", &p2.quantidade);
    scanf("%lf", &p2.valor);

    printf("VALOR A PAGAR: R$ %.2lf\n", (p1.valor*p1.quantidade) + (p2.valor*p2.quantidade));
}