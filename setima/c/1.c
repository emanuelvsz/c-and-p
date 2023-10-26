#include <stdio.h>

int main() {
    int lista1[] = {1, 2, 3, 4, 5};
    int lista2[] = {3, 4, 5, 6, 7};
    int lista3[10]; // Supondo que o tamanho máximo seja 10

    int n1 = sizeof(lista1) / sizeof(lista1[0]);
    int n2 = sizeof(lista2) / sizeof(lista2[0]);
    int n3 = 0;

    for (int i = 0; i < n1; i++) {
        int repetido = 0;
        for (int j = 0; j < n3; j++) {
            if (lista1[i] == lista3[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            lista3[n3] = lista1[i];
            n3++;
        }
    }

    for (int i = 0; i < n2; i++) {
        int repetido = 0;
        for (int j = 0; j < n3; j++) {
            if (lista2[i] == lista3[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            lista3[n3] = lista2[i];
            n3++;
        }
    }

    // Imprimir a terceira lista sem elementos repetidos
    for (int i = 0; i < n3; i++) {
        printf("%d ", lista3[i]);
    }

    return 0;
}
