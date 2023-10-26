#include <stdio.h>
#include <string.h>

int main() {
    char frase[] = "O rato";
    int n = strlen(frase);
    char dicionario[256]; // Supondo que o alfabeto seja ASCII

    for (int i = 0; i < n; i++) {
        char caractere = frase[i];
        dicionario[caractere] = i;
    }

    // Imprimir o dicionário
    for (int i = 0; i < n; i++) {
        printf("%c: %d\n", frase[i], dicionario[frase[i]]);
    }

    return 0;
}
