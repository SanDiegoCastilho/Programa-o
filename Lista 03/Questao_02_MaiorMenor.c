#include <stdio.h>

int Maior(int *a);
int Menor(int *a);

int main(void){

	int a[10];

	//Recebe um vetor

	printf("%d %d\n",Maior(a), Menor(a));

	return 0;
}

int Maior(int *a){
	int maior = a[0];

	for (int i = 0; i < 10; i++){
		if(a[i] > maior){
			maior = a[i];
		}
	}

	return maior;
}

int Menor(int *a){
	int menor = a[0];

	for (int i = 0; i < 10; i++){
		if(a[i] < menor){
			menor = a[i];
		}
	}

	return menor;
}