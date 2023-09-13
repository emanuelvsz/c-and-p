#include <stdio.h>

int main() {
    float preco_mercadoria, percentual_desconto, desconto, preco_a_pagar;

    printf("Digite o preço da mercadoria: ");
    scanf("%f", &preco_mercadoria);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentual_desconto);

    desconto = (percentual_desconto / 100) * preco_mercadoria;
    preco_a_pagar = preco_mercadoria - desconto;

    printf("O valor do desconto é R$%.2f\n", desconto);
    printf("O preço a pagar é R$%.2f\n", preco_a_pagar);

    return 0;
}
