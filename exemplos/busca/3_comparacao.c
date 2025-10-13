#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int busca_sequencial(int v[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (v[i] == x)
            return i;
    return -1;
}

int busca_binaria(int v[], int n, int x) {
    int ini = 0, fim = n - 1;
    while (ini <= fim) {
        int meio = (ini + fim) / 2;
        if (v[meio] == x)
            return meio;
        else if (v[meio] < x)
            ini = meio + 1;
        else
            fim = meio - 1;
    }
    return -1;
}

int main() {
    int n = 1000000000;
    int *v = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        v[i] = i; // vetor já ordenado para busca binária

    int x = n - 1; // valor procurado

    clock_t t1 = clock();
    busca_sequencial(v, n, x);
    clock_t t2 = clock();
    float tempo_seq = (float) (t2 - t1) / CLOCKS_PER_SEC;

    t1 = clock();
    busca_binaria(v, n, x);
    t2 = clock();
    float tempo_bin = (float) (t2 - t1) / CLOCKS_PER_SEC;

    printf("Tempo busca sequencial: %.8f s\n", tempo_seq);
    printf("Tempo busca binaria: %.8f s\n", tempo_bin);

    free(v);
    return 0;
}