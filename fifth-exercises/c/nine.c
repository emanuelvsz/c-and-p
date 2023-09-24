#include <stdio.h>

int main() {
    float valorCasa, salario, prestacao;
    int anos;

    printf("Digite o valor da casa a comprar: R$ ");
    scanf("%f", &valorCasa);

    printf("Digite o salário do comprador: R$ ");
    scanf("%f", &salario);

    printf("Digite a quantidade de anos a pagar: ");
    scanf("%d", &anos);

    int meses = anos * 12; // Converter anos em meses

    prestacao = valorCasa / meses;

    if (prestacao > salario * 0.3) {
        printf("Empréstimo não aprovado. Prestação mensal excede 30%% do salário.\n");
    } else {
        printf("Empréstimo aprovado! Prestação mensal: R$ %.2f\n", prestacao);
    }

    return 0;
}
