
#include <stdio.h>
#include <string.h>

// criar funcao passou ?

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


// 1 - verificar se e valour ou ponteiro
// -> - precisa alterar algo, tipo o valor original
// valor - so e para ler/mostrar

// vamos utilziar o VALOR 

// verificar se passou ou nao
// 1 - passou
// 0 - nao passou

// numero inteiro

int verificaPassou(Aluno a){
    if(a.nota >= 6){
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    Aluno lucas = criarAluno(01, "lucas", 18, 8.0f, "Rua Marcelo de queiroz");
    
    printf("Nota: %.1f\n", lucas.nota);
    
    if(verificaPassou(lucas)){
        printf("sim, passou de ano");
    }
    else {
        printf("reprovou de ano");
    }
    
    
    
    return 0;
}