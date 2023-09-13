#include <stdio.h>

int main() {
    float distancia_km, velocidade_media_kmph, tempo_horas, tempo_minutos;

    printf("Digite a distância a percorrer (em quilômetros): ");
    scanf("%f", &distancia_km);

    printf("Digite a velocidade média esperada (em km/h): ");
    scanf("%f", &velocidade_media_kmph);

    tempo_horas = distancia_km / velocidade_media_kmph;
    tempo_minutos = tempo_horas * 60;

    printf("O tempo estimado da viagem é de %.2f horas (%.2f minutos).\n", tempo_horas, tempo_minutos);

    return 0;
}
