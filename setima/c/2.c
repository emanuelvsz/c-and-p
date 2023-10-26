#include <stdio.h>

int main() {
    int matriz[4][5];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o elemento da posição (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Apresentar a matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
