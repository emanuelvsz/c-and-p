#include <stdio.h>

int main() {
    int matriz_A[15][15];
    int soma_pares = 0;

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            printf("Digite o elemento da posição (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matriz_A[i][j]);

            if (i == j && matriz_A[i][j] % 2 == 0) {
                soma_pares += matriz_A[i][j];
            }
        }
    }

    printf("A soma dos elementos pares na diagonal principal é: %d\n", soma_pares);

    return 0;
}
