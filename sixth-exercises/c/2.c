#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int extract_date_components(char *date_string, int *dd, int *mm, int *aaaa) {
    char *token = strtok(date_string, "/");
    if (token == NULL) return 0;
    *dd = atoi(token);

    token = strtok(NULL, "/");
    if (token == NULL) return 0;
    *mm = atoi(token);

    token = strtok(NULL, "/");
    if (token == NULL) return 0;
    *aaaa = atoi(token);

    return 1;
}

int main() {
    char date_string[11];
    int dd, mm, aaaa;

    printf("Digite uma data no formato DD/MM/AAAA: ");
    fgets(date_string, sizeof(date_string), stdin);

    if (extract_date_components(date_string, &dd, &mm, &aaaa)) {
        printf("Dia: %d, Mês: %d, Ano: %d\n", dd, mm, aaaa);
    } else {
        printf("Formato de data inválido ou não numérico.\n");
    }

    return 0;
}
