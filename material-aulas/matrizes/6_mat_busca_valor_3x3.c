#include <stdio.h>

int main() {
    int mat[3][3], x, achou = 0;

    // entrada da matriz
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    // valor a buscar
    scanf("%d", &x);

    // busca exaustiva (varre toda a matriz)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] == x) {
                printf("Encontrado em [%d][%d]\n", i, j);
                achou = 1;
            }
        }
    }
    if (!achou) printf("Nao encontrado\n");
    return 0;
}