#include <stdio.h>

// enum (enumeração) define um conjunto de nomes simbólicos para valores inteiros.
// Por padrão, o primeiro vale 0, e os seguintes aumentam de 1 em 1.
// Exemplo: DOM=0, SEG=1, TER=2, ...
enum semana { DOM, SEG, TER, QUA, QUI, SEX, SAB };

int main() {
    enum semana hoje = QUA;
    printf("Dia numerico: %d\n", hoje);

    hoje = SAB;
    printf("Dia numerico: %d\n", hoje);

    hoje = 0;
    printf("Dia numerico: %d\n", hoje);
}