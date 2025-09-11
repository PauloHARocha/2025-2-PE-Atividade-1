#include <stdio.h>

// Programa que lê um número inteiro não negativo e calcula seu fatorial

// Função recursiva para calcular fatorial
unsigned int fatorial(int n) {
    if (n == 0) {
        return 1; // caso base
    } else {
        return n * fatorial(n - 1); // chamada recursiva
    }
}

// unsigned int fatorial(int n) {
//     printf("Entrando em fatorial(%d)\n", n);   // ida
//     if (n == 0) {
//         printf("Retornando 1 (caso base)\n");  // volta no caso base
//         return 1;
//     } else {
//         unsigned int resultado = n * fatorial(n - 1);
//         printf("Retornando %d * fatorial(%d) = %d\n", n, n-1, resultado); // volta
//         return resultado;
//     }
// }

int main() {
    unsigned int n; // 4 bytes

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
    } else {
        printf("%d! = %d\n", n, fatorial(n));
    }

    return 0;
}

/*
função fatorial(n):
    se n == 0 então
        retorne 1
    senão
        retorne n * fatorial(n-1)
fim-função

início
    leia n
    se n < 0 então
        escreva "Fatorial não definido"
    senão
        resultado <- fatorial(n)
        escreva n, "! = ", resultado
    fim-se
fim
*/