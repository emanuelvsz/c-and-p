#include <stdio.h>

int main() {
    int num1, num2, resto;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

    if (num2 != 0) {
        resto = num1 % num2;
        printf("O resto da divisão de %d por %d é: %d\n", num1, num2, resto);
    } else {
        printf("Erro: Divisão por zero!\n");
    }

    return 0;
}
