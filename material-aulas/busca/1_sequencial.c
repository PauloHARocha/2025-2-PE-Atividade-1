#include <stdio.h>

int main() {
    int v[] = {8, 3, 10, 1, 7, 5, 3};
    // sizeof é um operador em C que retorna o tamanho em bytes de um tipo ou variável.
    // Exemplo: sizeof(int) normalmente retorna 4 em arquiteturas comuns (32 ou 64 bits).
    int n = sizeof(v)/sizeof(v[0]);
    int x = 7;  

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            pos = i;   /* primeira ocorrência */
            break;
        }
    }

    if (pos == -1) 
        printf("Nao encontrado.\n");
    else
        printf("Sequencial: %d encontrado em v[%d].\n", x, pos);

    return 0;
}


// int busca_sequencial(int v[], int n, int x) {
//     for (int i = 0; i < n; i++) {
//         if (v[i] == x) {
//             return i; // posição encontrada
//         }
//     }
//     return -1; // não encontrado
// }