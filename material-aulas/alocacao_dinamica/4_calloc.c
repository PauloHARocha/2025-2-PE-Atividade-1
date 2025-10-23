#include <stdio.h>
#include <stdlib.h>

// A função calloc() é usada para alocar dinamicamente um bloco de memória na heap,
// assim como o malloc(), mas ela também inicializa todos os bytes com zero.
// É útil quando se deseja começar com memória limpa (por exemplo, vetores zerados).
// void *calloc(size_t quantidade_elementos, size_t tamanho_de_cada_elemento);

int main() {
    int n = 5;
    int *v;

    v = calloc(n, sizeof(int));  // aloca e inicializa com 0

    if (v == NULL) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    printf("Valores iniciais (calloc):\n");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);  // todos devem ser 0

    for (int i = 0; i < n; i++)
        v[i] = i + 1;

    printf("\nValores apos atribuicao:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    free(v);
    return 0;
}