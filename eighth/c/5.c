#include <stdio.h>
#include <string.h>

void gerarEmail(const char *nomeCompleto, char *email) {
    char primeiroNome[50];
    char sobrenome[100];
    
    sscanf(nomeCompleto, "%s", primeiroNome);
    int i = strlen(primeiroNome) + 1;
    strncpy(sobrenome, nomeCompleto + i, 100);
    for (i = 0; sobrenome[i]; i++) {
        sobrenome[i] = tolower(sobrenome[i]);
    }
    
    sprintf(email, "%c%s@lp.com.br", tolower(primeiroNome[0]), sobrenome);
}

int main() {
    char nomeCompleto[150] = "Sr. Fulano de Tal";
    char email[150];
    gerarEmail(nomeCompleto, email);
    printf("%s, seu email é: %s\n", nomeCompleto, email);
    
    return 0;
}
