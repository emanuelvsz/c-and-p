#include <stdio.h>

int main() {
    float kWh, preco;
    char tipo;

    printf("Digite a quantidade de kWh consumida: ");
    scanf("%f", &kWh);

    printf("Digite o tipo de instalação (R para residências, I para indústrias, C para comércios): ");
    scanf(" %c", &tipo);

    switch (tipo) {
        case 'R':
        case 'r':
            if (kWh <= 500) {
                preco = kWh * 0.40;
            } else {
                preco = kWh * 0.65;
            }
            break;
        case 'C':
        case 'c':
            if (kWh <= 1000) {
                preco = kWh * 0.55;
            } else {
                preco = kWh * 0.60;
            }
            break;
        case 'I':
        case 'i':
            if (kWh <= 5000) {
                preco = kWh * 0.55;
            } else {
                preco = kWh * 0.60;
            }
            break;
        default:
            printf("Tipo de instalação inválido!\n");
            return 1; // Saída de erro
    }

    printf("O preço a pagar é: R$ %.2f\n", preco);

    return 0;
}
