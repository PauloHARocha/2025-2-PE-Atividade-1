#include <stdio.h>

int main() {
    int v[3] = {10, 20, 30};
    int *p = v;  // p aponta para o primeiro elemento &v[0]

    printf("Enderecos:\n");
    printf("&v[0]=%p p= %p\n", &v[0], p);
    printf("&v[1]=%p (p+1)= %p\n", &v[1], p+1);
    printf("&v[2]=%p (p+2)= %p\n", &v[2], p+2);

    printf("\nValores:\n");
    printf("v[0]=%d *(p)= %d\n", v[0], *p);
    printf("v[1]=%d *(p+1)= %d\n", v[1], *(p+1));
    printf("v[2]=%d *(p+2)= %d\n", v[2], *(p+2));

    printf("\nUsando o nome do vetor (v) diretamente:\n");
    printf("v = %p \t*(v)   = %d\n", v, *(v));
    printf("v + 1 = %p \t*(v+1) = %d\n", (v + 1), *(v + 1));
    printf("v + 2 = %p \t*(v+2) = %d\n", (v + 2), *(v + 2));
}