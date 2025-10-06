#include <stdio.h>
#define N 2

// #define N 3

// Alternativa funcao
// void multiplica(int A[N][N], int B[N][N], int P[N][N]) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             int acc = 0;
//             for (int k = 0; k < N; k++) {
//                 acc += A[i][k] * B[k][j];
//             }
//             P[i][j] = acc;
//         }
//     }
// }

int main() {
    int A[N][N] = {
        {1, 2},
        {3, 4}
    };
    int B[N][N] = {
        {3, 4},
        {5, 6}
    };
    int P[N][N];

    for (int i = 0; i < N; i++) {         // percorre as linhas de A
        for (int j = 0; j < N; j++) {     // percorre as colunas de B
            int acc = 0;                  // acumulador para P[i][j]
            for (int k = 0; k < N; k++) { // percorre os elementos da linha i de A e da coluna j de B
                acc += A[i][k] * B[k][j]; // soma dos produtos (linha x coluna)
            }
            P[i][j] = acc;                // guarda o resultado na posição P[i][j]
        }
    }

    printf("P = A x B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", P[i][j]);
        printf("\n");
    }
    return 0;
}