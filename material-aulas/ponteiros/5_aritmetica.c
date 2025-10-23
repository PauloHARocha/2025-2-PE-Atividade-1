#include <stdio.h>

int main() {
    int x = 10, y = 20;
    int *p1 = &x;
    int *p2 = &y;

    printf("p1 = %p  *p1 = %d\n", p1, *p1);
    printf("p2 = %p  *p2 = %d\n\n", p2, *p2);

    if (p1 < p2)
        printf("p1 < p2 (endereco)\n");
    else
        printf("p1 > p2 (endereco)\n");

    if (*p1 < *p2)
        printf("*p1 < *p2 (valor)\n");
    else
        printf("*p1 > *p2 (valor)\n");

    p1++;
    printf("\nDepois de p1++:\n");
    printf("p1 = %p  *p1 = %d\n", p1, *p1);

    if (p1 == p2)
        printf("p1 == p2\n");
    else
        printf("p1 != p2\n");

    return 0;
}