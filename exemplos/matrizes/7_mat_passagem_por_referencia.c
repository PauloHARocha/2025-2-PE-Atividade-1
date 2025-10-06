#include <stdio.h>

// dobra todos os elementos da matriz 3x3
void dobra(int m[3][3]) {
    // m é, efetivamente, um ponteiro para um bloco contíguo de 3 linhas
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            m[i][j] *= 2;
}

int main(void) {
    int m[3][3];

    // lê matriz
    printf("Digite os elementos da matriz (3x3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);

    // passa por referência (na prática, passa o endereço base)
    dobra(m);

    // imprime matriz modificada
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }
    return 0;
}