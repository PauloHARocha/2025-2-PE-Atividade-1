#include <stdio.h>
#include <stdlib.h>

// A função malloc() é usada para alocar dinamicamente um bloco de memória na heap.
// Ela apenas reserva o espaço, mas não inicializa o conteúdo (vem com "lixo de memória").
// Retorna um ponteiro genérico (void *) para o início do bloco.
// void *malloc(size_t tamanho_em_bytes);

int main() {
    int *p;

    p = malloc(12); // Aloca 12 bytes

    if (p == NULL) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    printf("p[0] = %d\n", p[0]);
    printf("p[1] = %d\n", p[1]);
    printf("p[2] = %d\n", p[2]);

    free(p); // libera a memória alocada
    return 0;
}