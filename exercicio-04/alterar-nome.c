#include <stdio.h>
#include <string.h>

// criar funcao alterar nome 

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


void alterarNota(Aluno *a, float nota){
    
   if(nota < 6.0f){
       a->nota = 6.0f;
   }
   else {
       a->nota = nota;
   }
   
}


int verificaPassou(Aluno a){
    if(a.nota >= 6){
        return 1;
    }
    else {
        return 0;
    }
}

// funcao para alterar nome
// verificar se e valor ou ponteiro
// precisamos ALTERAR UM VALOR ORIGINAL, -> nome
// entao vamos usar o PONTEIRO.
// nao vamos colocar o char nome porque ja temos um ponteiro a que me da acesso direto ao aluno inteiro
// incluindo o nome atual.
// entao precisamos passar apenas o NOVO NOME.

// Ou seja, não precisa receber o nome atual como parâmetro, porque ele já está lá dentro da struct que o ponteiro aponta.

void alterarNome(Aluno *a, char novoNome[]){
    strcpy(a->nome, novoNome);
    // sem ser o ponteiro ficaria assim - strcpy(novo.nome, nome);
}


int main()
{
    Aluno marcos = criarAluno(01, "Marcos", 18, 5.0f, "Rua Edmundo 02");
    
    printf("Nome: %s\n", marcos.nome);
    
    printf("\n");
    
    // usar o & para ponteiro
    alterarNome(&marcos, "Matheus");
    printf("Novo Nome: %s\n", marcos.nome);

    return 0;
}