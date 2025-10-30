#include <stdio.h>
#include <string.h>

struct cadastro {
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

int main() {
    struct cadastro c;
    
    strcpy(c.nome, "Carlos");
    c.idade = 18;
    strcpy(c.rua, "Avenida Brasil");
    c.numero = 1082;

    printf("Nome: %s\nIdade: %d\nRua: %s, %d\n",
           c.nome, c.idade, c.rua, c.numero);
}

/*
Atividade
Crie uma struct chamada "Aluno" com os campos:
nome, curso e idade.
Leia os dados de um aluno e imprima.
*/