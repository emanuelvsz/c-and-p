#include <stdio.h>
#include <string.h>

int find_character_at_position(char *s, char c, int p) {
    char *found = strchr(s + p, c);
    if (found != NULL) {
        return found - s;
    } else {
        return -1;
    }
}

int main() {
    char s[100];
    char c;
    int p;

    printf("Digite uma string: ");
    fgets(s, sizeof(s), stdin);
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    printf("Digite a posição inicial: ");
    scanf("%d", &p);

    int result = find_character_at_position(s, c, p);
    if (result != -1) {
        printf("Índice da primeira ocorrência de '%c' a partir da posição %d: %d\n", c, p, result);
    } else {
        printf("Caractere não encontrado a partir da posição especificada.\n");
    }

    return 0;
}
