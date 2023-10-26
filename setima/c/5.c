#include <stdio.h>
#include <string.h>

struct Registro {
    char nome[50];
    char endereco[100];
    char telefone[20];
};

int main() {
    struct Registro agenda[10];
    int num_registros = 0;

    while (1) {
        int opcao;
        printf("Menu de Opções:\n");
        printf("1 - Cadastrar 10 registros\n");
        printf("2 - Pesquisar registro pelo nome\n");
        printf("3 - Classificar registros por ordem de nome\n");
        printf("4 - Apresentar todos os registros\n");
        printf("5 - Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            for (int i = num_registros; i < num_registros + 10; i++) {
                printf("Digite o nome: ");
                scanf("%s", agenda[i].nome);
                printf("Digite o endereço: ");
                scanf("%s", agenda[i].endereco);
                printf("Digite o telefone: ");
                scanf("%s", agenda[i].telefone);
            }
            num_registros += 10;
        } else if (opcao == 2) {
            char nome_pesquisa[50];
            printf("Digite o nome a ser pesquisado: ");
            scanf("%s", nome_pesquisa);
            int encontrado = 0;
            for (int i = 0; i < num_registros; i++) {
                if (strcmp(agenda[i].nome, nome_pesquisa) == 0) {
                    printf("Registro encontrado:\n");
                    printf("Nome: %s\n", agenda[i].nome);
                    printf("Endereço: %s\n", agenda[i].endereco);
                    printf("Telefone: %s\n", agenda[i].telefone);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                printf("Registro não encontrado.\n");
            }
        } else if (opcao == 3) {
            // Supondo que você queira classificar por ordem alfabética de nomes
            for (int i = 0; i < num_registros; i++) {
                for (int j = i + 1; j < num_registros; j++) {
                    if (strcmp(agenda[i].nome, agenda[j].nome) > 0) {
                        struct Registro temp = agenda[i];
                        agenda[i] = agenda[j];
                        agenda[j] = temp;
                    }
                }
            }
        } else if (opcao == 4
