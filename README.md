# Atividade 1 – Programação Estruturada

**Aluno:** `<SEU NOME COMPLETO AQUI>`
 
O objetivo é:
1. Revisar como funcionam o Git, o GitHub e o GitHub Classroom.  
2. Praticar conceitos básicos de programação em C.

---

## Parte 1 – Hello World com seu nome

1. Clone este repositório no seu computador.
2. Crie um programa em C chamado `hello_world.c`.
3. O programa deve imprimir exatamente a frase (substitua `<SEU NOME>` pelo seu nome):

```
Hello, my name is <SEU NOME>
```

4. Compile e execute para testar:

```
gcc hello_world.c -o hello_world
./hello_world
```

5. Atualize este arquivo (`README.md` / atividade) substituindo o placeholder do nome no topo.
6. Faça commit (pode ser 1 ou mais) contendo apenas:
   - `hello_world.c`
   - atualização deste README com seu nome
7. Faça o push desses commits antes de iniciar a Parte 2.

> Importante: não avance para a Parte 2 sem primeiro ter versionado (commit + push) a Parte 1.

---

## Parte 2 – Calculadora de IMC

Agora vamos praticar mais um pouco.

1. Crie um novo arquivo chamado `imc.c`.
2. O programa deve:
   - Solicitar ao usuário o **peso (kg)**.
   - Solicitar a **altura (m)**.
   - Calcular o IMC usando a fórmula:
     
     ```
     IMC = peso / (altura * altura)
     ```

3. Mostrar o IMC com **duas casas decimais**.

Exemplo de execução:

```
Digite seu peso (kg): 70
Digite sua altura (m): 1.75
Seu IMC é: 22.86
```

4. Compile e execute para validar:

```
gcc imc.c -o imc
./imc
```

5. Faça commit e push do `imc.c`.

---

## Entregáveis

- `hello_world.c` com seu nome no output.
- `imc.c` com o cálculo do IMC formatado com duas casas decimais.
- Este `README.md` atualizado com seu nome.

---
