#include <stdio.h>

int main() {
    int x = 10;
    char y = 'A';
    void *p;  // ponteiro genérico: pode apontar para qualquer tipo

    p = &x;  // p aponta para um int
    printf("x = %d\n", *(int *)p);  // é preciso fazer cast para (int *) antes de desreferenciar

    p = &y;  // p agora aponta para um float
    printf("y = %c\n", *(char *)p);  // cast para (float *) antes de usar * (desreferenciar)

    return 0;
}