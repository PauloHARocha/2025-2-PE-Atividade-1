#include <stdio.h>

// Uma clínica médica registrou os tempos de atendimento, em minutos, de 8 pacientes em um determinado plantão. 
// A administração deseja identificar qual foi o atendimento mais rápido para analisar a eficiência do processo. 
// Dessa forma, o programa deve analisar todos os tempos registrados e indicar o menor tempo de atendimento, 
// bem como a posição em que ele ocorreu na lista.

int main() {
    int tempos[8] = {30, 25, 40, 20, 35, 28, 22, 27};
    int i, menor, posicao;

    menor = tempos[0];  // assume o primeiro como o menor
    posicao = 0;

    for (i = 1; i < 8; i++) {
        if (tempos[i] < menor) {
            menor = tempos[i];
            posicao = i;
        }
    }

    printf("O menor tempo de atendimento foi %d minutos, na posicao %d\n", menor, posicao);

    return 0;
}

/*
-----------------------
 FLUXOGRAMA DETALHADO
-----------------------

[Início]
    |
[tempos[8] já definidos]
menor = tempos[0], posicao = 0
i = 1
    |
[ i < 8 ? ] --não--> [imprimir menor e posicao] -> [Fim]
    | sim
    v
[tempos[i] < menor ?] --sim--> menor = tempos[i], posicao = i
    | não
    v
i = i + 1
    |
(retorna para checar i < 8)

[imprimir menor e posicao]
    |
[Fim]


-------------------
 PSEUDOCÓDIGO
-------------------

início
    vetor tempos[8] <- {30, 25, 40, 20, 35, 28, 22, 27}

    menor <- tempos[0]
    posicao <- 0

    para i de 1 até 7 faça
        se tempos[i] < menor então
            menor <- tempos[i]
            posicao <- i
        fim-se
    fim-para

    escreva "O menor tempo de atendimento foi ", menor, " minutos, na posição ", posicao
fim
*/