#include <stdio.h>

int main() {
    // VETORES COM FLOAT:
    // Vamos armazenar notas de 5 alunos, calcular a média da turma
    // e mostrar quais alunos ficaram acima da média.

    float notas[5];
    float soma = 0, media;

    // Lendo notas
    printf("Digite as notas dos 5 alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%f", &notas[i]);   // usa %f para float
        soma += notas[i];         // acumula a soma
    }

    // Calculando a média
    media = soma / 5.0;

    printf("\nMédia da turma = %.2f\n", media);

    // Mostrando quais alunos ficaram acima da média
    printf("Alunos acima da média:\n");
    for (int i = 0; i < 5; i++) {
        if (notas[i] > media) {
            printf("Aluno %d com nota %.2f\n", i + 1, notas[i]);
        }
    }

    printf("\nEnderecos dos elementos:\n");
    for (int i = 0; i < 5; i++) {
        printf("&notas[%d] = %p\n", i, (void*)&notas[i]);
    }

    return 0;
}