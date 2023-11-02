#include <stdio.h>
#include <string.h>

int verificarStringEmLista(const char *string, const char *lista[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(string, lista[i]) == 0) {
            return 1; // Encontrou a string na lista
        }
    }
    return 0; // String não encontrada na lista
}

int main() {
    const char *stringAVerificar = "Python";
    const char *lista[] = {"C", "Java", "Python", "JavaScript"};
    int tamanhoLista = sizeof(lista) / sizeof(lista[0]);
    
    if (verificarStringEmLista(stringAVerificar, lista, tamanhoLista)) {
        printf("A string '%s' foi encontrada na lista.\n", stringAVerificar);
    } else {
        printf("A string '%s' não foi encontrada na lista.\n", stringAVerificar);
    }
    
    return 0;
}
