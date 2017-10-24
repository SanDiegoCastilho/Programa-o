#include <stdlib.h>
#include "Aluno.h"

struct fila{
	int tamanho;
	int inicio;
	int fim;
	Aluno **vetor;
};

typedef struct fila Fila;

/* Aloca e retorna uma fila de tamanho informado */
Fila *nova_f(int tamanho);
/* Libera a memória de uma fila previamente criada */
void destroi_f(Fila *fila);
/* Adiciona um aluno na fila. Retorna 1 se der certo e 0 caso contrário */
int adiciona_f(Fila *fila, Aluno *aluno);
/* Remove um aluno na fila. Retorna 1 se der certo e 0 caso contrário */
int retira_f(Fila *fila);
/* Busca aluno pelo número de matricula. Retorna o aluno se der certo e NULL
caso contrário */
Aluno *busca_f(Fila *fila, int matricula);
/* Retorna 1 se a fila estiver cheia e 0 caso contrário */
int cheia_f(Fila *fila);
int VerificaTamanho(int tamanho);

Fila *nova_f(int tamanho){

	Fila* pont = (Fila*) malloc(sizeof(Fila));
	Aluno** vetor = (Aluno**) malloc(tamanho * sizeof(Aluno*));

	if (pont == NULL || vetor == NULL || !VerificaTamanho(tamanho))
		return NULL;

	pont->vetor = vetor;
	pont->inicio = 0;
	pont->fim = 0;
	pont->tamanho = tamanho;

	return pont;
}


void destroi_f(Fila *fila){
	free(fila);
}

int adiciona_f(Fila *fila, Aluno *aluno){

	if (cheia_f(fila) || fila == NULL || aluno == NULL){
		return 0;

	}else{

		fila->vetor[fila->fim] = aluno;
		fila->fim = fila->fim + 1;

		if (fila->fim > fila->tamanho){
			fila->fim = 0;
		}

		return 1;
	}
}

int retira_f(Fila *fila){
	if (fila->fim == fila->inicio || fila == NULL){
		return 0;

	}else{
		Aluno *aux;

		aux = fila->vetor[fila->inicio];
		fila->inicio = fila->inicio + 1;

		if (fila->inicio > fila->tamanho){
			fila->inicio = 0;
		}

		return 1;
	}
}

Aluno *busca_f(Fila *fila, int matricula){
		
	if(fila == NULL)
		return NULL;

	if(fila->inicio == fila->fim)
		return NULL;
	 
	int i, tamanho;
	int matricula_aluno;
	char nome[50];
	char curso[30];

	if(fila->inicio < fila->fim)
		tamanho = fila->fim;
	else
		tamanho = fila->tamanho + fila->fim;


	for(i=fila->inicio; i<tamanho; i++){
		if(i == fila->tamanho)
			i = 0;
		acessa_a(fila->vetor[i], &matricula_aluno, nome, curso);
		if(matricula_aluno == matricula)
			return fila->vetor[i];
		
		}
	return NULL;
}

int cheia_f(Fila *fila){
	if(fila->fim == fila->tamanho && fila->inicio == 0)
		return 1;
	
	if(fila->inicio == fila->fim + 1)
		return 1;

	return 0;
}


int VerificaTamanho(int tamanho){
	int resultado = tamanho >= 1 ? 1 : 0;

	return resultado;
}