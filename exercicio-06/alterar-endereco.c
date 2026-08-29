#include <stdio.h>
#include <string.h>

// criar funcao cadrastrar endereco

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

void alterarNome(Aluno *a, char novoNome[]){
    strcpy(a->nome, novoNome);
}

int verificaMaiorDe18 (Aluno a){
    if (a.idade >= 18){
        return 1;
    }
    else {
        return 0;
    }
}

// funcao alterar endereco
// ponteiro
// obs: endereco e cadrastrado desde o comeco.
    void alterarEndereco(Aluno *a, char Novoendereco[]){
        strcpy(a->endereco, Novoendereco);
    }

int main()
{
    Aluno gabriel = criarAluno(01, "gabriel", 18, 7.0f, "Rua Jacinto 09");
    printf("Endereco de Gabriel: %s\n", gabriel.endereco);
    
    // ponteiro colocar sempre & para chamar a funcao.
    alterarEndereco(&gabriel, "Rua Mauricio de Morais 15");
    printf("Novo Endereco de Gabriel: %s\n", gabriel.endereco);
    
    return 0;
}
