#include <stdio.h>
#define N 2

// #define N 3
// int A[N][N] = {
//     { 1,  2,  3},
//     {10, 20, 30},
//     { 4,  5,  6}
// };
// int B[N][N] = {
//     { 7,  0, -1},
//     { 1,  1,  1},
//     { 9,  9,  9}
// };

// Alternativa com funcao
// void soma_matrizes(int A[N][N], int B[N][N], int C[N][N]) {
//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < N; j++)
//             C[i][j] = A[i][j] + B[i][j];
// }

int main() {
    int A[N][N] = {
        {1, 2},
        {5, 6}
    };
    int B[N][N] = {
        {3, 4},
        {7, 8}
    };
    int C[N][N];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];


    printf("C = A + B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}