#include <stdio.h>

int main() {
    int v[] = {2, 8, 5, 3, 9, 4, 1};
    int n = sizeof(v) / sizeof(v[0]);
    int i, j, menor, temp;

    for (i = 0; i < n - 1; i++) {          
        menor = i;                         
        for (j = i + 1; j < n; j++) {      
            if (v[j] < v[menor]) {
                menor = j;
            }
        }
        
        temp = v[i];
        v[i] = v[menor];
        v[menor] = temp;
    }

    printf("Vetor ordenado (Selecao Direta): ");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}




// void selection_sort(int v[], int n) {
//     int i, j, menor, temp;
//     for (i = 0; i < n - 1; i++) {
//         menor = i;
//         for (j = i + 1; j < n; j++) {
//             if (v[j] < v[menor]) {
//                 menor = j;
//             }
//         }
//         temp = v[i];
//         v[i] = v[menor];
//         v[menor] = temp;
//     }
// }