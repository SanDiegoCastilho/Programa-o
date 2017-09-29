#include <stdio.h>

int main(void){
	int valor, maior, aux;
	int inteiros[3];

	//Recebe todos os valores que serão digitados e os guardam em um vetor.
	for (int i = 0; i < 3; i++){

		printf("Digite o %dº inteiro: ",i+1);
		scanf("%d", &inteiros[i]);

	}	

	//Verifica qual é o maior entre os extremos do vetor
	if(inteiros[0] > inteiros[2]){
		aux = inteiros[0];
		inteiros[0] = inteiros[2];
		inteiros[2] = aux;

	}


	//Verifica qual o maior entre os primeiros do vetor
	if (inteiros[0] > inteiros[1]){
		aux = inteiros[0];
		inteiros[0] = inteiros[1];
		inteiros[1] = aux;

	}


	//Verifica qual o maior entre os últimos do vetor
	if(inteiros[1] > inteiros[2]){
		aux = inteiros[1];
		inteiros[1] = inteiros[2];
		inteiros[2] = aux;
	}

	maior = inteiros[2];

	printf("O maior valor digitado é: %d ",maior);

	return 0;
}