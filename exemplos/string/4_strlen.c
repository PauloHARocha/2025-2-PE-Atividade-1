#include <stdio.h>
#include <string.h>

// Retorna o tamanho de uma string (até o '\0')
// size_t strlen(char *texto);
// size_t: tipo inteiro sem sinal usado para representar tamanhos.

int main() {
    int v[5] = {10, 20, 30, 40, 50};
    char nome[10] = "Unicap";

    printf("sizeof(v) = %d bytes\n", (int) sizeof(v));
    printf("sizeof(v[0]) = %d bytes\n", (int) sizeof(v[0]));
    printf("Número de elementos = %d\n\n", (int) (sizeof(v) / sizeof(v[0])));

    printf("Conteúdo: \"%s\"\n", nome);
    printf("sizeof(nome) = %d bytes (tamanho total do array)\n", (int) sizeof(nome));
    printf("strlen(nome) = %d caracteres (até o '\\0')\n\n", (int) strlen(nome));

    char texto[40];

    printf("Digite uma palavra (teste fgets): ");
    fgets(texto, 40, stdin); // lê até ENTER, incluindo '\n' se couber

    printf("Texto lido: \"%s\"\n", texto);
    printf("Tamanho (strlen): %d caracteres\n\n", (int) strlen(texto));

    if (texto[strlen(texto) - 1] == '\n') {
        texto[strlen(texto) - 1] = '\0';
    }

    printf("Texto lido: \"%s\"\n", texto);
    printf("Tamanho (strlen): %d caracteres\n", (int) strlen(texto));

    return 0;
}