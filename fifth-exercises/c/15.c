#include <stdio.h>

int main() {
    int numero, reverso = 0, original, resto;
    printf("Digite um número: ");
    scanf("%d", &numero);

    original = numero;

    while (numero > 0) {
        resto = numero % 10;
        reverso = reverso * 10 + resto;
        numero /= 10;
    }

    if (original == reverso) {
        printf("%d é um número palíndromo.\n", original);
    } else {
        printf("%d não é um número palíndromo.\n", original);
    }

    return 0;
}
