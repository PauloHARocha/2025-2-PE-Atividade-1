#include <stdio.h>

// Função recursiva para calcular Fibonacci
int fibonacci(int n) {
    if (n == 0 || n == 1)
        return n; // n == 0 ou n == 1 caso base
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // chamada recursiva
}

int main() {
    int n = 4;

    // printf("Digite um numero inteiro nao negativo: ");
    // scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci nao definido para numeros negativos.\n");
    } else {
        printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    }

    return 0;
}

/*
função fibonacci(n):
    se n == 0 ou n == 1 então
        retorne n
    senão
        retorne fibonacci(n-1) + fibonacci(n-2)
fim-função

início
    leia n
    se n < 0 então
        escreva "Fibonacci não definido"
    senão
        resultado <- fibonacci(n)
        escreva "Fibonacci(", n, ") = ", resultado
    fim-se
fim
*/