#include <stdio.h>
#include <string.h>

void remove_spaces(char *input_string) {
    int len = strlen(input_string);
    int i, j = 0;

    for (i = 0; i < len; i++) {
        if (input_string[i] != ' ') {
            input_string[j++] = input_string[i];
        }
    }
    input_string[j] = '\0';
}

int main() {
    char input_string[100];

    printf("Digite uma string com espaços: ");
    fgets(input_string, sizeof(input_string), stdin);

    remove_spaces(input_string);
    printf("String sem espaços: %s\n", input_string);

    return 0;
}
