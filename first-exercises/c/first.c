#include <stdio.h>

int main() {
    float salario_atual, porcentagem_aumento, aumento, novo_salario;

    printf("Digite o valor do salário: ");
    scanf("%f", &salario_atual);

    printf("Digite a porcentagem de aumento: ");
    scanf("%f", &porcentagem_aumento);

    aumento = salario_atual * (porcentagem_aumento / 100);
    novo_salario = salario_atual + aumento;

    printf("O aumento é de R$%.2f\n", aumento);
    printf("O novo salário é de R$%.2f\n", novo_salario);

    return 0;
}
