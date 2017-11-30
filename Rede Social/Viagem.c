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

//Cira uma nova viagem
Viagem *nova_v(int dia, int mes, int ano, char *cidade, char *pais, int periodo);

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

}
