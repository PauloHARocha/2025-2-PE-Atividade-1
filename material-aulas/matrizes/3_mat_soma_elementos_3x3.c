#include <stdio.h>

int main() {
    int mat[3][3], soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
            soma += mat[i][j];
        }
    }
    printf("Soma = %d\n", soma);
    return 0;
}