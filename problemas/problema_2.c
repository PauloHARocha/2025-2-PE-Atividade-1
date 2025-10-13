#include <stdio.h>

// Um supermercado mantém em seu sistema os códigos de 12 produtos em promoção. 
// O gerente precisa verificar rapidamente se um determinado produto faz parte da lista de promoção para responder aos clientes. 
// Dessa forma, o programa deve permitir que seja informado um código de produto e verificar se ele está presente no cadastro. 
// Ao final, o programa deve imprimir a posição em que o produto aparece na lista ou informar que o produto não foi encontrado.


int main() {
    int produtos[12] = {101, 203, 305, 410, 522, 634, 710, 815, 920, 1001, 1105, 1230};
    int codigo, i, posicao = -1;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    for (i = 0; i < 12; i++) {
        if (produtos[i] == codigo) {
            posicao = i; // guarda a posição
            break;       // pode parar a busca
        }
    }

    if (posicao != -1) {
        printf("Produto encontrado na posicao %d\n", posicao);
    } else {
        printf("Produto nao encontrado\n");
    }

    return 0;
}

/*
--------------
 FLUXOGRAMA 
--------------

[Início]
    |
[ler codigo do produto]
    |
i = 0, posicao = -1
    |
[ i < 12 ? ] --não--> [posicao != -1 ?] --não--> [imprimir "não encontrado"] -> [Fim]
    | sim
    v
[produtos[i] == codigo ?] --sim--> posicao = i -> [sair do loop]
    | não
    v
i = i + 1
    |
(retorna para checar i < 12)

[posicao != -1 ?] --sim--> [imprimir posição] -> [Fim]

-------------------
 PSEUDOCÓDIGO
-------------------

início
    vetor produtos[12] <- {101, 203, 305, 410, 522, 634, 710, 815, 920, 1001, 1105, 1230}

    leia codigo
    posicao <- -1

    para i de 0 até 11 faça
        se produtos[i] == codigo então
            posicao <- i
            pare o loop
        fim-se
    fim-para

    se posicao != -1 então
        escreva "Produto encontrado na posição ", posicao
    senão
        escreva "Produto não encontrado"
    fim-se
fim
*/