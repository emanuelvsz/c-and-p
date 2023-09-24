#include <stdio.h>

int main() {
    int num1, num2, num3;
    int maior, menor;

    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Inicialize maior e menor com o primeiro número
    maior = menor = num1;

    // Verifique e atualize o maior e o menor
    if (num2 > maior) {
        maior = num2;
    } else if (num2 < menor) {
        menor = num2;
    }

    if (num3 > maior) {
        maior = num3;
    } else if (num3 < menor) {
        menor = num3;
    }

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}
