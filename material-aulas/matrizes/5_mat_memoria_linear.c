#include <stdio.h>

int main() {
    int v[3] = {11, 12, 13};
    int mat[3][3] = {
        {11, 12, 13},
        {21, 22, 23},
        {31, 32, 33}
    };

    // endereço do primeiro elemento e sequência na memória (row-major)
    printf("&mat[0][0] = %p\n", &mat[0][0]);
    int *p = &mat[0][0];
    for (int k = 0; k < 9; k++) {
        // percorre linearmente usando um ponteiro para o primeiro elemento
        printf("*(p+%d) = %d  %p\n", k, *(p + k), (p + k));
    }

    // equivalência entre índices e ponteiros em 2D
    int i = 2, j = 1;
    int via_indices  = mat[i][j];
    int via_ponteiros = *(*(mat + i) + j);  // mesmo elemento
    printf("mat[%d][%d] = %d | *(*(mat+%d)+%d) = %d\n",
           i, j, via_indices, i, j, via_ponteiros);
    return 0;
}