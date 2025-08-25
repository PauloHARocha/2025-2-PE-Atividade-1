#include <stdio.h>

int main() {
    int i;

    // if-else
    int x = 5;
    if (x > 0) printf("Positivo\n");
    else printf("Negativo ou zero\n");

    // for
    for (i = 1; i <= 5; i++)
        printf("%d ", i);

    // while
    int j = 5;
    while (j > 0) {
        printf("\nContagem: %d", j);
        j--;
    }
    return 0;
}
