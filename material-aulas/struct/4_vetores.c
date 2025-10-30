#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[30];
    int idade;
};

int main() {
    struct pessoa grupo[3];

    strcpy(grupo[0].nome, "Ana");
    grupo[0].idade = 20;

    strcpy(grupo[1].nome, "Bruno");
    grupo[1].idade = 22;

    strcpy(grupo[2].nome, "Carlos");
    grupo[2].idade = 21;

    for (int i = 0; i < 3; i++)
        printf("%s - %d anos\n", grupo[i].nome, (*(grupo+i)).idade);
}