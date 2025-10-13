#include <stdio.h>
#include <string.h>

int main() {
    char palavra[] = "Unicap";

    printf("String: %s\n", palavra);
    printf("Tamanho (strlen): %zu caracteres\n\n", strlen(palavra));

    printf("Posição\tCaractere\tEndereço\n");

    for (int i = 0; i < strlen(palavra); i++) {
        printf("%d\t%c\t\t%p\n", i, palavra[i], &palavra[i]);
    }

    return 0;
}