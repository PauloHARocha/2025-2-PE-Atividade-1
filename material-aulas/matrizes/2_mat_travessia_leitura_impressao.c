#include <stdio.h>

int main(void) {
    int mat[3][3];

    // leitura linha a linha
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // impressão em formato de tabela 3x3
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}