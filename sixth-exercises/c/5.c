#include <stdio.h>
#include <string.h>

void reverse_and_replace(char *input_string, char char_to_replace, char replacement_char) {
    int len = strlen(input_string);
    for (int i = 0; i < len; i++) {
        if (input_string[i] == char_to_replace) {
            input_string[i] = replacement_char;
        }
    }

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = input_string[i];
        input_string[i] = input_string[j];
        input_string[j] = temp;
    }
}

int main() {
    char phrase1[100];
    char phrase2[100];

    printf("Digite a primeira frase: ");
    fgets(phrase1, sizeof(phrase1), stdin);
    printf("Digite a segunda frase: ");
    fgets(phrase2, sizeof(phrase2), stdin);

    reverse_and_replace(phrase1, 'A', '*');
    reverse_and_replace(phrase2, 'A', '*');

    printf("Frase 1 invertida e com 'A' substituídos por '*': %s\n", phrase1);
    printf("Frase 2 invertida e com 'A' substituídos por '*': %s\n", phrase2);

    return 0;
}
