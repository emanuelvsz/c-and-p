#include <stdio.h>

int main() {
    float distancia_km, preco_diario, preco_por_km, preco_total;
    int dias_aluguel;

    // Solicita a quantidade de km percorridos e a quantidade de dias de aluguel
    printf("Digite a quantidade de km percorridos: ");
    scanf("%f", &distancia_km);

    printf("Digite a quantidade de dias de aluguel: ");
    scanf("%d", &dias_aluguel);

    // Define as taxas de preço
    preco_diario = 60.0; // R$60 por dia
    preco_por_km = 0.15; // R$0.15 por km rodado

    // Calcula o preço total
    preco_total = (preco_diario * dias_aluguel) + (preco_por_km * distancia_km);

    // Exibe o preço a pagar
    printf("O preço a pagar é de R$%.2f\n", preco_total);

    return 0;
}
