#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct Aluno{
	int matricula;
	char *nome;
	char *curso;
};

typedef struct Aluno Aluno;

Aluno *novo_a(int matricula, char *nome, char *curso);
void acessa_a(Aluno *aluno, int *matricula, char *nome, char *curso);
void atribui_a(Aluno *aluno, int matricula, char *nome, char *curso);
void libera_a(Aluno *aluno);
int tamanho_a();



int VerificaMatricula(int matricula){
	int resultado = matricula < 0 ? 0 : 1;

	return resultado;
}

int VerificaNome(char *nome){
	int resultado = (nome == NULL || strlen(nome) > 50) ? 0 : 1;

	return resultado;
}

int VerificaCurso(char *curso){
	int resultado = (curso == NULL || strlen(curso) > 30) ? 0 : 1;

	return resultado;
}	

Aluno *novo_a(int matricula, char *nome, char *curso){

	Aluno *Pont = malloc(sizeof(Aluno));

	if (!VerificaMatricula(matricula) || !VerificaNome(nome) || !VerificaCurso(curso)){
		return NULL;
	}

		Pont->nome = nome;
		Pont->curso = curso;
		Pont->matricula = matricula;

		return Pont;
}

void libera_a(Aluno *aluno){
	if(aluno != NULL){
		aluno->matricula = 0;
		aluno->nome = "";
		aluno->curso = "";
	}
}


void acessa_a(Aluno *aluno, int *matricula, char *nome, char *curso){
	if (aluno != NULL){
		*matricula = aluno->matricula;
		strcpy(nome,aluno->nome);
		strcpy(curso,aluno->curso);
	}
}

void atribui_a(Aluno *aluno, int matricula, char *nome, char *curso){
	if (aluno != NULL && VerificaMatricula(matricula) && VerificaNome(nome) && VerificaCurso(curso)){
		aluno->matricula = matricula;
		aluno->nome = nome;
		aluno->curso = curso;
	}
}

int tamanho_a(){
	return sizeof(Aluno);
}