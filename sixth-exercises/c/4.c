#include <stdio.h>
#include <string.h>

int main() {
    char full_name[100];
    char *first_name, *last_name;

    printf("Digite um nome completo: ");
    fgets(full_name, sizeof(full_name), stdin);
    
    last_name = strrchr(full_name, ' ');
    if (last_name != NULL) {
        *last_name = '\0';  // Terminate the last name.
        last_name++;        // Move to the first character of the first name.
        printf("%s/%s\n", last_name, full_name);
    } else {
        printf("Nome completo inválido.\n");
    }

    return 0;
}
