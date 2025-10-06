#include <stdio.h>

int main(void) {
    int v[3] = {10, 20, 30};

    printf("Endereco v[0] = %p, valor = %d\n", &v[0], v[0]);
    printf("Endereco v[1] = %p, valor = %d\n", &v[1], v[1]);
    printf("Endereco v[2] = %p, valor = %d\n", &v[2], v[2]);

    int *p = &v[0];  // ponteiro para o primeiro elemento do vetor

    printf("p = %p, *p = %d\n", p, *p);

    // avançando o ponteiro
    printf("p+1 = %p, *(p+1) = %d\n", (p+1), *(p+1));
    printf("p+2 = %p, *(p+2) = %d\n", (p+2), *(p+2));
    printf("p+3 = %p, *(p+3) = %d\n", (p+3), *(p+3));
    printf("Endereco v[3] = %p, valor = %d\n", &v[3], v[3]);
    
    return 0;
}