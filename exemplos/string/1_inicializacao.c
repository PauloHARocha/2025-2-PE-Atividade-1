#include <stdio.h>

int main() {
    char s1[] = "Unicap";                       
    char s2[10] = "Linguagem";                   
    char s3[] = {'G','C','C', '\0'};  

    printf("s1 = %s | tamanho: %d\n", s1, (int)sizeof(s1));
    printf("s2 = %s | tamanho: %d\n", s2, (int)sizeof(s2));
    printf("s3 = %s | tamanho: %d\n", s3, (int)sizeof(s3));

    printf("Enderecos de s1 (caractere a caractere):\n");
    for (int i = 0; s1[i] != '\0'; i++) {
        printf("&s1[%d] = %p  valor='%c'\n", i, &s1[i], s1[i]);
    }
    printf("Endereco de s1 (base) = %p  (igual a &s1[0])\n", s1);

    char nome[] = "Carlos";
    printf("Antes do corte: %s\n", nome);
    nome[3] = '\0';  // agora fica "Car"
    printf("Depois do corte: %s (inserimos \\0 em nome[3])\n", nome);

    // Atividade
    // inicialize uma string com a palavra Pernambuco, imprima apenas Perna

    return 0;
}