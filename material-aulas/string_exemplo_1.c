#include <stdio.h>
#include <string.h>

int main() {
    // STRINGS EM C:
    // Uma string é um vetor de char terminado por '\0' (caractere nulo).

    // Inicialização por literal (o compilador insere o '\0'):
    char palavra1[] = "Ola";       // tamanho = 4: {'O','l','a','\0'}

    // Inicialização manual, com '\0' explícito:
    char palavra2[4] = {'O','l','a', '\0'};

    // Vetor maior que a string (sobram bytes não usados após o '\0'):
    char palavra3[10] = "Oi";      // {'O','i','\0', ?, ?, ...}

    printf("palavra1\t= %s\n", palavra1);
    printf("palavra2\t= %s\n", palavra2);
    printf("palavra3\t= %s\n", palavra3);
    

    // Mostrando como o '\0' marca o final
    for (int i = 0; i < 5; i++) { // imprime até 5 posições (inclui '\0')
        printf("palavra1[%d] = %d (%c)\n", i, palavra1[i], palavra1[i]);
    }

    // Leitura com scanf: NUNCA use & em vetores; limite para não estourar:
    char nome[20];
    printf("Digite seu nome (sem espacos): ");
    scanf("%19s", nome);           // lê até espaço/linha; reserva 1 p/ '\0'

    printf("nome\t\t= %s\n", nome);
    // Mostrando como o '\0' marca o final
    for (int i = 0; i <= 20; i++) { // imprime até 5 posições (inclui '\0')
        printf("nome[%d] = %d (%c)\n", i, nome[i], nome[i]);
    }

    return 0;
}