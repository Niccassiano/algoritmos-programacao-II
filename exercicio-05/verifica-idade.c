#include <stdio.h>
#include <string.h>

// criar funcao verificar + 18

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

// so utiliza * no PONTEIRO
// so utliza -> no PONTEIRO

void alterarNome(Aluno *a, char novoNome[]){
    strcpy(a->nome, novoNome);
}

// funcao verificar + 18
// definir se e ponteiro ou valor
// valor porque nao vai alterar nada, apenas mostrar/alterar
// se ele for + 18, retorna 1, se ele for menor, retorna 0

int verificaMaiorDe18 (Aluno a){
    if (a.idade >= 18){
        return 1;
        // "." porque e VALOR
    }
    else {
        return 0;
    }
}

int main()
{
    // com struct
   Aluno Jacinto = {02, "Jacinto", 16, 6.0f, "Rua Pinheiro"};
    // printf("Aluno Jacinto: %d anos \n", Jacinto.idade);
   
   // com funcao criarAluno
   Aluno lucas = criarAluno(01, "Lucas", 18, 8.0f, "Rua Jacinto 09");
  
   
   
   
    printf("VERIFICA SE E MAIOR DE 18 ANOS\n");
    
   if (verificaMaiorDe18(lucas)){
       printf("Lucas Maior de 18 anos\n");
   }
   else {
       printf("Lucas Menor de 18 anos\n");
   }


    printf("\n");

    printf("VERIFICA SE E MAIOR DE 18 ANOS\n");
   
    
    if (verificaMaiorDe18(Jacinto)){
        printf("Jacinto Maior de 18 anos\n");
    }
    else{
        printf("Jacinto Menor de 18 anos\n");
    }
    
    return 0;
}
