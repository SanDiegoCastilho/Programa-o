#include <stdio.h> //provisório
#include <stdlib.h>
#include <string.h>

int Gid = 0;

//Define a estrutura Viagem.
typedef struct viagem{
	int id, dia, mes, ano, periodo;
	char *cidade, *pais;
	struct viagem *direita, *esquerda, *pai;

} Viagem;

//Cria uma nova viagem.
Viagem *nova_v(int dia, int mes, int ano, char *cidade, char *pais, int periodo);

//Libera uma viagem.
void libera_v(Viagem *viagem);

//Acessa os dados de determinada viagem.
void acessa_v(Viagem *viagem, int *dia, int *mes, int *ano, char *cidade, char *pais, int *periodo);

//Atribui novos valores a uma dada viagem.
void atribui_v(Viagem *viagem, int dia, int mes, int ano, char *ciadade, char *pais, int periodo);

//Atribui uma viagem à direita da viagem dada;
void atribui_direita_v(Viagem *viagem, Viagem *direita);

//Acessa a Viagem a direita da Viagem dada.
Viagem *acessa_direita_v(Viagem *viagem);

//Atribui uma Viagem à esquerda da viagem dada.
void atribui_esquerda_v(Viagem *viagem, Viagem *esquerda);

//Acessa a Viagem a esquerda da Viagem dada.
Viagem *acessa_esquerda_v(Viagem *viagem);

//Retorna o tamanho da estrutura Viagem.
int tamanho_v();

int VerificaCidade(char *cidade){
	int Resultado = (cidade == NULL || strlen(cidade) > 60) ? 0 : 1;

	return Resultado;
}

int VerificaPais(char *pais){
	int Resultado = (pais == NULL || strlen(pais) > 30) ? 0 : 1;
	
	return Resultado;
}

Viagem *nova_v(int dia, int mes, int ano, char *cidade, char *pais, int periodo){
	if (!VerificaCidade(cidade) || !VerificaPais(pais)){
		return NULL;
	}

	Viagem *pont;

	Gid += 1; 

	pont->id = Gid;
	pont->dia = dia;
	pont->mes = mes;
	pont->ano = ano;
	pont->pais = pais;
	pont->cidade = cidade;
	pont->periodo = periodo;
	pont->pai = NULL;
	pont->direita = NULL;
	pont->esquerda = NULL;

	return pont;
}

void libera_v(Viagem *viagem){
	if(viagem != NULL){
		viagem->id = 0;
		viagem->dia = 0;
		viagem->mes = 0;
		viagem->ano = 0;
		viagem->pais = "";
		viagem->cidade = "";
		viagem->periodo = 0;
		viagem->pai = NULL;
		viagem->direita = NULL;
		viagem->esquerda = NULL;
	}
}

void acessa_v(Viagem *viagem, int *dia, int *mes, int *ano, char *cidade, char *pais, int *periodo){
	if (viagem != NULL){
		*dia = viagem->dia;
		*mes = viagem->mes;
		*ano = viagem->ano;
		*periodo = viagem->periodo;
		strcpy(pais, viagem->pais);
		strcpy(cidade, viagem->cidade);
	}
}

void atribui_v(Viagem *viagem, int dia, int mes, int ano, char *cidade, char *pais, int periodo){
	if (viagem != NULL){
		viagem->dia = dia;
		viagem->mes = mes;
		viagem->ano = ano;
		viagem->periodo = periodo;
		strcpy(viagem->cidade, cidade);
		strcpy(viagem->pais, pais);
	}
}

void atribui_direita_v(Viagem *viagem, Viagem *direita){
	if (viagem != NULL){
		viagem->direita = direita;
	}
}

Viagem *acessa_direita_v(Viagem *viagem){
	if (viagem != NULL){
		Viagem *pont = viagem->direita;
	
		return pont;
	}
}

void atribui_esquerda_v(Viagem *viagem, Viagem *esquerda){
	if (viagem != NULL){
		viagem->esquerda = esquerda;
	}
}

Viagem *acessa_esquerda_v(Viagem *viagem){
	if(viagem != NULL){
		Viagem *pont = viagem->esquerda;

		return pont;
	}
}

int tamanho(){
	int tam;

	tam = sizeof(Viagem);

	return tam;
}