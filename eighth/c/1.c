#include <stdio.h>

float calcularPrestacaoAtraso(float valor, float taxa, int tempo) {
    float prestacao = valor + (valor * (taxa / 100) * tempo);
    return prestacao;
}

int main() {
    float valor = 1000;
    float taxa = 5;
    int tempo = 2;
    float prestacaoAtraso = calcularPrestacaoAtraso(valor, taxa, tempo);
    printf("O valor da prestação em atraso é: R$ %.2f\n", prestacaoAtraso);
    return 0;
}
