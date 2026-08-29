#include <stdio.h>
#include <string.h>


// criar funcao aluno

typedef struct {
    int matricula;
    char nome[50];
    int idade;
    float nota;
    char endereco[100];
} Aluno;

// isso e um valor porque ele apenas vai ler/mostrar, nao vai fazer alteracoes
Aluno criarAluno(int matricula, char nome[], int idade, float nota, char endereco[]){
    Aluno novo;
    novo.matricula = matricula;
    strcpy(novo.nome, nome);
    novo.idade = idade;
    novo.nota = nota;
    strcpy(novo.endereco, endereco);
    
    return novo;
}


int main()
{
    // criando manual sem funcao
    Aluno carlos = {01, "Carlos", 18, 8.0f, "Rua Jair 09"};
    
    // mostra no log
    printf("Novo Aluno Criado: \n");
    printf("Matricula: %d\n", carlos.matricula);
    printf("Nome: %s\n", carlos.nome);
    printf("Idade: %d\n", carlos.idade);
    printf("Nota: %.1f\n", carlos.nota);
    printf("Endereco: %s\n", carlos.endereco);
    
    
    printf("\n");
    
    // criando um novo aluno pela funcao.
    Aluno daniela = criarAluno(02,"daniela", 15, 7.0f, "Rua Antonio de Morais");
    
    // mostra no log
    printf("Novo Aluno Criado: \n");
    printf("Matricula: %d\n", daniela.matricula);
    printf("Nome: %s\n", daniela.nome);
    printf("Idade: %d\n", daniela.idade);
    printf("Nota: %.1f\n", daniela.nota);
    printf("Endereco: %s\n", daniela.endereco);
    
    

    return 0;
}