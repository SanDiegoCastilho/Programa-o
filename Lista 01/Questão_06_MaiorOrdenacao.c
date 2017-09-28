#include <stdio.h>

int main(void){
	int valor, maior, aux, aux_2;
	int inteiros[2];

	//Recebe todos os valores que serão digitados e os guardam em um vetor.
	for (int i = 0; i < 3; i++){

		printf("Digite o %dº inteiro: ",i+1);
		scanf("%d", &inteiros[i]);

	}	

	//Calcula o o maior da lista com base no primeiro elemento. 
	maior = inteiros[0];

	for (int i = 0; i <= 2; i++){

		if(inteiros[i] > maior){

			maior = inteiros[i];
			
		}
	}

	aux = inteiros[2];

	inteiros[2] = maior;

	if(aux < inteiros[0]){
		aux_2 = inteiros[1];
		inteiros[1] = aux;
		inteiros[0] = aux_2;
	}else{
		inteiros[0] = aux;
	}


	for (int i = 0; i <= 2; i++){

		printf("%d | ",inteiros[i]);

	}

	printf("O maior valor digitado é: %d ",maior);

	return 0;
}