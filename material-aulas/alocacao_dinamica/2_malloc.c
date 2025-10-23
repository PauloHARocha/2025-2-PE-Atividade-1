#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int));

    if (v == NULL) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    printf("Valores iniciais (malloc):\n");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]); 

    for (int i = 0; i < n; i++)
        v[i] = i + 1;

    printf("\nVetor: ");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    free(v); // libera a memória alocada
    return 0;
}