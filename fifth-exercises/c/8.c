#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    printf("Escolha a operação (+, -, *, /): ");
    scanf(" %c", &operacao); // Use um espaço em branco antes de %c para ignorar espaços em branco

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: Divisão por zero!\n");
                return 1; // Saída de erro
            }
            break;
        default:
            printf("Operação inválida!\n");
            return 1; // Saída de erro
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
