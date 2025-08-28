#include <stdio.h>
/*
   Exemplo de precedência e diferença entre:
   - Pré-decremento (--x): o valor é decrementado ANTES de ser usado na expressão.
   - Pós-decremento (x--): o valor é usado na expressão e depois decrementado.

   Isso influencia diretamente o resultado de cálculos.
*/

int main() {
    int x = 5, y;

    // Pré-decremento: primeiro x = 4, depois usa o valor em y = 4 + 2
    y = --x + 2;
    printf("Após y = --x + 2: x = %d, y = %d\n", x, y);

    // Resetando x para o valor inicial
    x = 5;

    // Pós-decremento: primeiro usa x = 5 na expressão (y = 5 + 2),
    // depois decrementa x (x passa a ser 4 após a operação).
    y = x-- + 2;
    printf("Após y = x-- + 2: x = %d, y = %d\n", x, y);

    return 0;
}