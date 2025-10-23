#include <stdio.h>

void dobrar(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = v[i] * 2; 
    }
}

void soma2(int *v, int n) {
    for (int i = 0; i < n; i++) {
        v[i] = v[i] + 2; 
    }
}

int main() {
    int v[5] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Vetor original:\n");
    for (int i = 0; i < n; i++) {
        printf("v[%d] = %d  (endereco: %p)\n", i, v[i], &v[i]);
    }

    dobrar(v, n);

    printf("\nDepois de dobrar():\n");
    for (int i = 0; i < n; i++) {
        printf("v[%d] = %d  (endereco: %p)\n", i, v[i], &v[i]);
    }

    soma2(v, n);

    printf("\nDepois de soma2():\n");
    for (int i = 0; i < n; i++) {
        printf("v[%d] = %d  (endereco: %p)\n", i, *(v+i), v+i);
    }

    /*
    Atividade
        Implemente uma função chamada incrementa_pares() que receba
        um vetor de inteiros e seu tamanho.
        A função deve somar 1 a todos os elementos pares do vetor.
        Imprima o antes e depois do vetor
    */

    return 0;
}


/*
Atividade Extra
    Implemente uma função chamada conta_maiores() que receba:
        - um vetor de inteiros,
        - o tamanho do vetor,
        - e um valor de referência.
    A função deve retornar quantos elementos do vetor
    são maiores que o valor informado.
*/