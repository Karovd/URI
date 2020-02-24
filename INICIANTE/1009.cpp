#include <iostream>
#include <cstdio>
#include <string>

int main() {
    std::string nome;
    double fixo, vendas;

    std::cin>>nome;
    scanf("%lf", &fixo);
    scanf("%lf", &vendas);

    printf("TOTAL = R$ %.2lf\n", fixo + (vendas*0.15));
}