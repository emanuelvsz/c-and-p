#include <stdio.h>

int main() {
    float salario, aumento;
    
    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salario);

    if (salario > 1250.0) {
        aumento = salario * 0.10; // 10% de aumento
    } else {
        aumento = salario * 0.15; // 15% de aumento
    }

    printf("O valor do aumento é: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", salario + aumento);

    return 0;
}
