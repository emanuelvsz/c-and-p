#include <stdio.h>

int main() {
    int numero, i;
    int ehPrimo = 1; // Assume que o número é primo

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        ehPrimo = 0; // 0 e 1 não são primos
    } else if (numero > 2 && numero % 2 == 0) {
        ehPrimo = 0; // Números pares maiores que 2 não são primos
    } else {
        for (i = 3; i * i <= numero; i += 2) {
            if (numero % i == 0) {
                ehPrimo = 0; // Encontrou um divisor ímpar
                break;
            }
        }
    }

    if (ehPrimo) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}
