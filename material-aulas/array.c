#include <stdio.h>

int main() {
    // ARRAYS:
    // Um array em C é uma coleção de elementos do MESMO tipo,
    // armazenados em posições CONTÍGUAS na memória.
    // O índice começa em 0, e o tamanho do array é fixo.
    // Exemplo abaixo: um array de 5 inteiros.

    int numeros[5] = {1, 2, 3, 4, 5};   // array de inteiros

    for (int i = 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}