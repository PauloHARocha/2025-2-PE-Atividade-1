#include <stdio.h>

// Uma empresa registrou os salários de 6 funcionários em um vetor. 
// A administração deseja que todos os salários sejam exibidos, mas o programador chefe pediu que a solução utilize recursão. 
// O programa deve percorrer o vetor recursivamente e imprimir cada salário junto com sua posição.

// Função recursiva para percorrer e imprimir o vetor
void imprimirSalarios(float salarios[], int tamanho, int i) {
    if (i == tamanho) {
        return; // caso base: já percorreu todo o vetor
    }
    printf("Funcionario %d: R$ %.2f\n", i, salarios[i]);
    imprimirSalarios(salarios, tamanho, i + 1); // chamada recursiva
}

int main() {
    float salarios[6] = {2500.0, 3200.5, 2800.0, 4000.0, 3100.75, 2750.0};

    printf("Lista de salarios:\n");
    imprimirSalarios(salarios, 6, 0);

    return 0;
}

/*
-----------------------
 FLUXOGRAMA DETALHADO
-----------------------

[Início]
    |
[definir vetor de salarios]
    |
[chamar funcao imprimirSalarios com i=0]
    |
-------- Função imprimirSalarios --------
[ i == tamanho ? ] --sim--> [retorna] 
        |
        não
        v
[imprimir salarios[i]]
    |
[chamar imprimirSalarios com i+1]
    |
(retorna para checar caso base)
----------------------------------------

[Fim]

-------------------
 PSEUDOCÓDIGO
-------------------

função imprimirSalarios(vetor, tamanho, i):
    se i == tamanho então
        retorne
    fim-se
    escreva "Funcionario ", i, ": ", vetor[i]
    chamar imprimirSalarios(vetor, tamanho, i+1)
fim-função

início
    vetor salarios[6] <- {2500.0, 3200.5, 2800.0, 4000.0, 3100.75, 2750.0}
    escreva "Lista de salarios:"
    chamar imprimirSalarios(salarios, 6, 0)
fim
*/