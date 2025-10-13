#include <stdio.h>

int main() {
    int v[] = {2, 8, 5, 3, 9, 4, 1};
    int n = sizeof(v) / sizeof(v[0]);
    int i, j, key;

    // Algoritmo clássico da Inserção Direta (Insertion Sort)
    for (j = 1; j < n; j++) {          // subvetor v[0..j-1] já está ordenado
        key = v[j];                    // elemento a inserir
        i = j - 1;
        while (i >= 0 && v[i] > key) { // desloca p/ direita enquanto v[i] > key
            v[i + 1] = v[i];
            i--;
        }
        v[i + 1] = key;                // insere a key na posição correta
    }

    // Impressão do vetor ordenado
    printf("Vetor ordenado (Insercao Direta): ");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}


// void insertion_sort(int v[], int n) {
//     int i, j, key;
//     for (j = 1; j < n; j++) {
//         key = v[j];
//         i = j - 1;
//         while (i >= 0 && v[i] > key) {
//             v[i + 1] = v[i];
//             i--;
//         }
//         v[i + 1] = key;
//     }
// }