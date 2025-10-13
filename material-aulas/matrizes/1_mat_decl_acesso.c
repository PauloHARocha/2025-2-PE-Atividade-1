#include <stdio.h>

#define TAMANHO 3

int main(void) {
    int mat[TAMANHO][TAMANHO];               // 3 linhas x 3 colunas

    // int mat[3][3] = {
    //     {11, 12, 13},
    //     {21, 22, 23},
    //     {31, 32, 33}
    // };

    // atribuição direta de alguns elementos
    mat[0][0] = 10;
    mat[0][1] = 20;
    mat[1][2] = 30;

    // leitura de um elemento e impressão de outro
    int i = 2, j = 1;
    mat[i][j] = 99;

    printf("mat[0][0] = %d\n", mat[0][0]);
    printf("mat[0][1] = %d\n", mat[0][1]);
    printf("mat[1][2] = %d\n", mat[1][2]);
    printf("mat[%d][%d] = %d\n", i, j, mat[i][j]);
    printf("mat[2][2] = %d\n", mat[2][2]);
    return 0;
}