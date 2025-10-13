#include <stdio.h>

int main() {
    int v[] = {2, 8, 5, 3, 9, 4, 1};
    int n = sizeof(v) / sizeof(v[0]);
    int i, j, temp;

    // Algoritmo clássico da Bolha
    for (i = 0; i < n - 1; i++) {              // controla as passadas
        for (j = 0; j < n - i - 1; j++) {      // compara pares adjacentes
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    // Impressão do vetor ordenado
    printf("Vetor ordenado (Bolha): ");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}


// void bubble_sort(int v[], int n) {
//     int i, j, temp;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (v[j] > v[j + 1]) {
//                 temp = v[j];
//                 v[j] = v[j + 1];
//                 v[j + 1] = temp;
//             }
//         }
//     }
// }