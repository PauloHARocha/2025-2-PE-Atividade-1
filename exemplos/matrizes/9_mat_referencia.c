#include <stdio.h>
#define N 3

void imprime_endereco_primeiro_elemento_NN(int M[N][N]) {
    printf("[M[N][N]] &M[0][0] = %p\n", &M[0][0]);
}

void imprime_endereco_primeiro_elemento__N(int M[][N]) {
    printf("[M[][N] ] &M[0][0] = %p\n", &M[0][0]);
}


void imprime_endereco_com_ponteiro(int *p, int nlin, int ncol) {

    printf("[int *p ] p (== &M[0][0]) = %p\n", p);

    int i = 1, j = 0;
    printf("[int *p ] &M[1][0] ~ p + (1*%d + 0) = %p\n", ncol, (p + (i*ncol + j)));
}

void imprime_enderecos_linhas(int M[N][N]) {
    for (int i = 0; i < N; i++) {
        printf("Linha %d -> &M[%d][0] = %p\n", i, i, &M[i][0]);
    }
}

int main() {
    int A[N][N] = {
        { 1,  2,  3},
        { 4,  5,  6},
        { 7,  8,  9}
    };

    printf("[main] &A[0][0] = %p\n", &A[0][0]);

    imprime_endereco_primeiro_elemento_NN(A);
    imprime_endereco_primeiro_elemento__N(A);
    imprime_endereco_primeiro_elemento__N(&A[0][0]);
    imprime_endereco_com_ponteiro(&A[0][0], N, N);
    imprime_endereco_com_ponteiro(A, N, N);

    /* Mostrar conteúdo e endereços por linha */
    printf("\nConteudo de A:\n");
    for (int i = 0; i < N; i++) {
        printf("A[%d]: ", i);
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nEnderecos do inicio de cada linha:\n");
    imprime_enderecos_linhas(A);

    return 0;
}