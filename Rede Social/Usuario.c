#include <string.h>
#include "Viagem.h"

typedef struct usuario{
	int id, inicio, fim;
	char *nome;
	Viagem *viagens;
	struct usuario **amigos;

} Usuario;

int *Identificadores; //Vetor de inteiros que guarda todos os ID dos usuários criados. 
int index = 0; //Index do vetor da última posição onde um ID foi adicionado.
int tamanho = 10; //Tamanho do vetor. (inicialmente inicializado com 10);

Identificadores = (int *) malloc(tamanho * sizeof(int)); //Alocação do vetor de inteiros;

//Função responsável por adicionar o ID no vetor Identificadores
void AdicionaId(int id);

//Função responsável por verificar se o ID que se quer adicionar já existe ou não.
//Afim de evitar conflitos de IDs.
int VerificaId(int id);

//Valida o tamanho do nome do usuario.
int VerificaNome(char *nome);

//Cria um novo usuário.
Usuario *novo_u(int id, char *nome);

void libera_u(Usuario *usuario);

//Acessa os dados de determinado Usuário.
void acessa_u(Usuario *usuario, int *id, char *nome);

//Atribui novos valores a um determinado usuario.
void atribui_u(Usuario *usuario, int id, char *nome);

//Busca uma viagem de um usuário dado.
Viagem *buscar_viagem_por_data_u(Usuario *usuario, int dia, int mes, int ano);

/*-----------------------------------------------------------------------------------------*/

void AdicionaId(int id){
	if (index == tamanho - 1){ //Verifica se o vetor de IDs está ou não cheio.
		tamanho += 10; //Aumenta o tamanho do vetor em 10 unidades.
		Identificadores = realloc(tamanho * sizeof(int)); //Realoca o vetor em 10 unidades.
	}

	Identificadores[index] = id; //Adiciona o ID na posição adequada do vetor.
	index += 1; //Incrementa o Index.
}

int VerificaId(int id){
	int j = 0;
	int resultado = 1; //Resultado para retornar.

	//Verifica se existe um ID igual ao passado por parâmetro. Inicializando do 0 até o último adicionado (Index).
	while (j <= index) {  
		if (id == Identificadores[j]){ 
			resultado = 0;
		}

		j += 1;
	}

	return resultado;
}


int VerificaNome(char *nome){
	int resultado = (strlen(nome) > 80) ? 0 : 1;

	return resultado;
}

//Cria o usuário, atribui seus valores e retorna o ponteiro se tudo der certo.
Usuario *novo_u(int id, char *nome){
	if (VerificaId(id) && VerificaNome(nome)){ //Verifica se o nome e o ID são válidos.
		Usuario *pont;

		pont->id = id;
		AdicionaId(id); //Adiciona o ID no vetor de IDs.

		pont->nome = nome;
		pont->inicio = 0;
		pont->fim = 0;
		pont->viagens = NULL;
		pont->amigos = malloc(Usuario);

		return pont;

	}else{
		return NULL;
	}
}

void libera_u(Usuario *usuario){
	if (usuario != NULL){
		usuario->id = 0;
		usuario->nome = "";
		usuario->viagens = NULL;
		free(usuario->amigos);
	}
}

void acessa_u(Usuario *usuario, int *id, char *nome){
	if (usuario != NULL){
		*id = usuario->id;
		nome = usuario->nome;
	}
}

void atribui_u(Usuario *usuario, int id, char *nome){
	if (usuario != NULL && !VerificaNome(nome)){
		//É preciso validar o ID.
		usuario->id = id;
		usuario->nome = nome;
	}
}