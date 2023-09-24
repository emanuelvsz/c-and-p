#include <stdio.h>
#include <math.h>

int main() {
    double n, b = 2.0, p;
    printf("Digite um número para calcular a raiz quadrada: ");
    scanf("%lf", &n);

    do {
        p = (b + (n / b)) / 2;
        b = p;
    } while (fabs(n - (b * b)) >= 0.0001);

    printf("A raiz quadrada é aproximadamente: %.4lf\n", b);

    return 0;
}
