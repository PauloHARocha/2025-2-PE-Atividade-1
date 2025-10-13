#include <stdio.h>
#define N 2

// #define N 3
// int A[N][N] = {
//     {1, 2, 3},
//     {4, 0, 6},
//     {7, 8, 9}
// };

// Alternativa funcao
// void transposta(int A[N][N], int T[N][N]) {
//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < N; j++)
//             T[j][i] = A[i][j];
// }


int main() {
    int A[N][N] = {
        {1, 2},
        {5, 4}
    };
    int T[N][N];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            T[j][i] = A[i][j];

    printf("Transposta T:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", T[i][j]);
        printf("\n");
    }
    return 0;
}