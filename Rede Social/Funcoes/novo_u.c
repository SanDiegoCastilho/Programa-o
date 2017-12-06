#include <string.h> //Biblioteca necessária 
#include <stdlib.h> //Biblioteca necessária

//Definição do tipo estruturado Usuário
typedef struct usuario{
	int id, inicio, fim; //Inicio e Fim diz respeito a fila de amigos (ainda precisa ser feita).
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

//Função resposável por verificar o tamanho do nome do usuário (tamanho < 80).
int VerificaNome(char *nome);

//Função responsável por criar um usuário.
Usuario *novo_u(int id, char *nome);

/* ----------------------------------------------------------------------------------- */

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

//Verifica se o nome passado por parâmetro tem um tamanho maior que 80.
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