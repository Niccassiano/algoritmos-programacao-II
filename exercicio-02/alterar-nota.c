#include <stdio.h>
#include <string.h>

// criar funcao alterar nota MENOR QUE 6

typedef struct {
    int matricula;
    char nome[50];
    int idade;
    float nota;
    char endereco[100];
} Aluno;


Aluno criarAluno(int matricula, char nome[], int idade, float nota, char endereco[]){
    Aluno novo;
    novo.matricula = matricula;
    strcpy(novo.nome, nome);
    novo.idade = idade;
    novo.nota = nota;
    strcpy(novo.endereco, endereco);
    
    return novo;
}

// vamos usar ponteiro ja que precisa alterar algo 
// "a" é um PONTEIRO, nao é o aluno direto
// trocando de "."  para "->" ja que estamos falando de ponteiro

// com o ponteiro, nos nao precisamos que ele retorne nada
// com ponteiro (->), a funcao ja mexeu direto no original, automaticamente.

// Ou seja, quando a funcao termina, o aluno original ja está alterado 
// nao precisamos que ela "devolva" nada pra guardar em outra variável.

void alterarNota(Aluno *a, float nota){
    // void alterarNota() -> ela altera, nao cria/devolve, o tipo de retorno deveria ser void, sem return no final.
    
   // MENOR QUE 6
   if(nota < 6.0f){
       a->nota = 6.0f;
   }
   else {
       a->nota = nota;
   }
   
}

int main()
{
    
    Aluno marcelo = criarAluno(01, "Marcelo", 18, 4.0f, "Rua Jacob 03");
    printf("Nome: %s\n", marcelo.nome);
    printf("Nota: %.1f\n", marcelo.nota);
    
    printf("\n");
    printf("ALTERACAO NA NOTA \n");
    printf("\n");
    
    // pra transformar a variavel em um ponteiro na hora de chamar a funcao, usamos: &
    // & endereco de memoria
    
    alterarNota(&marcelo, 4.0f);
    
    printf("Nota Nova: %.1f \n", marcelo.nota);

    return 0;
}
