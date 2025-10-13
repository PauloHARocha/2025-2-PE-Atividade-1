#include <stdio.h>

/*
   Exemplo de uso do comando switch-case em C.
   O switch permite escolher um bloco de código a ser executado 
   com base no valor de uma variável. É uma alternativa mais clara 
   que vários if-else encadeados.

   - Cada "case" representa uma opção.
   - O comando "break" é necessário para evitar que continue
     executando os próximos casos (efeito chamado "fall-through").
   - O "default" é executado caso nenhuma opção seja atendida.
*/

int main() {
    int opcao;

    printf("Digite um número entre 1 e 3: ");
    scanf("%d", &opcao);

    // O switch compara o valor de "opcao"
    switch (opcao) {
        case 1: // Se opcao == 1
            printf("Você escolheu a opção 1.\n");
            break; // Interrompe o switch

        case 2: // Se opcao == 2
            printf("Você escolheu a opção 2.\n");
            break;

        case 3: // Se opcao == 3
            printf("Você escolheu a opção 3.\n");
            break;

        default: // Se nenhuma das opções acima for válida
            printf("Opção inválida.\n");
    }

    return 0;
}