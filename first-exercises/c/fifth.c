#include <stdio.h>

int main() {
    int cigarros_por_dia, anos_fumados;
    float reducao_tempo_vida_minutos, reducao_tempo_vida_dias;

    printf("Digite a quantidade de cigarros fumados por dia: ");
    scanf("%d", &cigarros_por_dia);

    printf("Digite quantos anos já foram fumados: ");
    scanf("%d", &anos_fumados);

    reducao_tempo_vida_minutos = cigarros_por_dia * 10 * 365 * anos_fumados;
    reducao_tempo_vida_dias = reducao_tempo_vida_minutos / (24 * 60);

    printf("Um fumante perderá %.2f dias de vida devido ao hábito de fumar.\n", reducao_tempo_vida_dias);

    return 0;
}
