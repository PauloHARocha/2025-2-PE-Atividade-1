#include <stdio.h>

// Uma escola aplicou uma prova para uma turma de 10 estudantes. 
// O professor precisa controlar as notas desses alunos para avaliar o desempenho da turma. 
// Assim, é necessário registrar as notas de todos os estudantes, calcular a média geral e identificar quantos alunos ficaram com nota acima da média. 
// Ao final, o programa deve imprimir todas as notas, a média da turma e a quantidade de alunos que superaram esse valor.


int main() {
    float notas[10];
    float soma = 0.0, media;
    int acima = 0;
    int i;

    // leitura das notas e soma
    for (i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    // cálculo da média
    media = soma / 10.0;

    // contagem acima da média
    for (i = 0; i < 10; i++) {
        if (notas[i] > media) {
            acima = acima + 1;
        }
    }

    // impressão final
    printf("\nNotas da turma:\n");
    for (i = 0; i < 10; i++) {
        printf("Aluno %d: %.2f\n", i + 1, notas[i]);
    }

    printf("\nMédia da turma: %.2f\n", media);
    printf("Quantidade de alunos acima da média: %d\n", acima);

    return 0;
}


/*
início
    soma <- 0
    para i de 0 até 9 faça
        leia nota[i]
        soma <- soma + nota[i]
    fim-para

    media <- soma / 10

    acima <- 0
    para i de 0 até 9 faça
        se nota[i] > media então
            acima <- acima + 1
        fim-se
    fim-para

    escreva "Notas da turma:"
    para i de 0 até 9 faça
        escreva "Aluno ", i+1, ": ", nota[i]
    fim-para

    escreva "Média da turma: ", media
    escreva "Quantidade acima da média: ", acima
fim
*/