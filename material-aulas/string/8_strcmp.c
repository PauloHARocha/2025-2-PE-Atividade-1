#include <stdio.h>
#include <string.h>

// Compara duas strings caractere a caractere (ordem alfabética / ASCII)
// int strcmp(char *str1, char *str2);
// Retorna (baseado em ordem alfabética): 
// <0 se str1 é menor que (vem antes que) str2 
// 0 se str1 é igual a str2
// >0 se str1 é maior que (vem depois que) str2

int main() {
    char a[20] = "Unicap";
    char b[20] = "Unicad";

    int r = strcmp(a, b);

    printf("Comparando \"%s\" e \"%s\"\n", a, b);
    if (r == 0){
        printf("As strings são iguais.\n");
    }else{
        if (r < 0){
            printf("\"%s\" é menor que (vem antes que) \"%s\".\n", a, b);
        }
        else{
            printf("\"%s\" é maior que (vem depois que) \"%s\".\n", a, b);
        }
    } 
        
    // Atividade
    // Leia duas frases (a e b).
    // Use strcmp para dizer qual vem primeiro em ordem alfabética ou se são iguais.

    return 0;
}