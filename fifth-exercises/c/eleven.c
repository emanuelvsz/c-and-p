#include <stdio.h>

int main() {
    int escolha;

    do {
        printf("Menu:\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        if (escolha >= 1 && escolha <= 4) {
            int num1, num2, resultado;
            printf("Digite dois números: ");
            scanf("%d %d", &num1, &num2);

            switch (escolha) {
                case 1:
                    resultado = num1 + num2;
                    printf("Resultado: %d\n", resultado);
                    break;
                case 2:
                    resultado = num1 - num2;
                    printf("Resultado: %d\n", resultado);
                    break;
                case 3:
                    resultado = num1 * num2;
                    printf("Resultado: %d\n", resultado);
                    break;
                case 4:
                    if (num2 != 0) {
                        resultado = num1 / num2;
                        printf("Resultado: %d\n", resultado);
                    } else {
                        printf("Erro: Divisão por zero!\n");
                    }
                    break;
            }
        } else if (escolha != 5) {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (escolha != 5);

    return 0;
}
