#include <iostream>
#include <cstdio>

int main() {
    int number, hours;
    double salary;

    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%lf", &salary);

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, (salary*hours));
}