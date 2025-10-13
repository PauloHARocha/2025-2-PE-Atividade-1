#include <stdio.h>

int main() {
    char nome[40];

    printf("Digite seu nome completo (scanf %%s): ");
    scanf("%39s", nome);   // lê até o primeiro espaço

    printf("nome: %s\n", nome);

    printf("Endereço base: %p\n", nome);
    printf("Primeiro caractere: '%c' está em %p\n", nome[0], &nome[0]);

    return 0;
}