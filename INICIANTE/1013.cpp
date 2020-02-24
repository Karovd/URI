#include <iostream>
#include <cstdio>
#include <cstdlib>

int maior(int x, int y) {
    return ((x+y+abs(x-y))/2);
}

int main() {
    int a,b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("%d eh o maior\n", maior(maior(a,b), c));
}