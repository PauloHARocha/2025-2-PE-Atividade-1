#include <stdio.h>
#include <string.h>

// Copia o conteúdo de origem para destino (inclui o '\0')
// char *strcpy(char *destino, char *origem);
// devolve o endereço da primeira posição da string de destino

int main() {
    char a[20] = "Computacao";
    char b[20];

    strcpy(b, a);  

    printf("a = %s\n", a);
    printf("b = %s\n", b);

    printf("\nEndereço base de a: %p\n", a);
    printf("Endereço base de b: %p\n", b);

    a[0] = 'X';
    printf("\nDepois de alterar a[0] para 'X':\n");
    printf("a = %s\n", a);
    printf("b = %s\n", b);

    // Atividade
    // Leia duas palavras armazenando em strings diferentes, 
    // copie para uma terceira string aquela que for menor e imprima.

    return 0;
}