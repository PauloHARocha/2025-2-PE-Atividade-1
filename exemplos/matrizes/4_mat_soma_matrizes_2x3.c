#include <stdio.h>

int main() {
    int A[2][3], B[2][3], C[2][3];

    // lê A
    printf("Digite os elementos da matriz A (2x3):\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    // lê B
    printf("Digite os elementos da matriz B (2x3):\n");
    for (int i = 0; i < 2; i++) 
        for (int j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

    // C = A + B
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];

    // imprime C
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}