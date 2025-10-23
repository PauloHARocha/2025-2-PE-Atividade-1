#include <stdio.h>
#include <stdlib.h>

// A função realloc() é usada para **redimensionar** um bloco já alocado.
// Ela pode aumentar ou diminuir o tamanho, e pode mover os dados para outro lugar da memória.
// void *realloc(void *ptr, size_t novo_tamanho);

int main() {
    int n = 3;
    int *v = malloc(n * sizeof(int));

    if (v == NULL) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
        v[i] = i + 1;

    printf("Vetor original:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);

    // aumenta o vetor para 5 elementos
    n = 5;
    v = realloc(v, n * sizeof(int));

    if (v == NULL) {
        printf("\nErro de realocacao!\n");
        return 1;
    }    

    // novos valores
    v[3] = 40;
    v[4] = 50;

    printf("\n\nVetor apos realloc:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    free(v);
    return 0;
}