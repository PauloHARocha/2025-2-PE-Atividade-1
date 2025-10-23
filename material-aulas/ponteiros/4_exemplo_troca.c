#include <stdio.h>

void troca(int x1, int x2) {
    int temp = x1;
    x1 = x2;
    x2 = temp;
}

void troca_por_referencia(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int a = 10, b = 20;

    printf("Antes da troca: a = %d (%p), b = %d (%p)\n", a, &a, b, &b);

    troca(a, b);

    printf("Depois da troca (por valor): a = %d (%p), b = %d (%p)\n", a, &a, b, &b);

    troca_por_referencia(&a, &b);

    printf("Depois da troca (por referencia): a = %d (%p), b = %d (%p)\n", a, &a, b, &b);

    /*
    Atividade
        Crie uma função que receba dois ponteiros para char.
        A função deve trocar os valores das variáveis originais.
        No main, exiba os caracteres e seus endereços
        antes e depois da chamada da função.
    */

    return 0;
}