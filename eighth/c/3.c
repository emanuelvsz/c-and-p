#include <stdio.h>

int somatorioNPrimeirosInteiros(int n) {
    int somatorio = 0;
    for (int i = 1; i <= n; i++) {
        somatorio += i;
    }
    return somatorio;
}

int main() {
    int n = 5;
    int resultado = somatorioNPrimeirosInteiros(n);
    printf("O somatório dos %d primeiros números inteiros é: %d\n", n, resultado);
    return 0;
}
