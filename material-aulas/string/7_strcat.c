#include <stdio.h>
#include <string.h>

// Concatena (junta) o conteúdo da string origem ao final da string destino
// char *strcat(char *destino, char *origem);
// devolve o endereço da primeira posição da string de destino
// destino deve ter espaço suficiente para receber o texto final

int main() {
    char a[40] = "Bom ";
    char b[20] = "dia";

    printf("Antes da concatenação:\n");
    printf("a = \"%s\"\n", a);
    printf("b = \"%s\"\n\n", b);

    char *p = strcat(a, b); // adiciona o conteúdo de b ao final de a

    printf("Depois da concatenação:\n");
    printf("a = \"%s\"\n", a);
    printf("b = \"%s\"\n", b);

    printf("p = ");
    for(int i = 0; i<strlen(p); i++){
        printf("%c", *(p + i));
    }
    printf("\n");

    printf("Endereço de a: %p\n", a);
    printf("Endereço de p: %p\n", p);

    // Atividade
    // Leia duas frases (a e b).
    // Construa c = "a b" usando strcpy e strcat, e imprima c.

    return 0;
}