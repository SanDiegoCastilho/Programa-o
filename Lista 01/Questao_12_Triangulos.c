#include <stdio.h>

int main(void){

	int a, b ,c;

	printf("Digite os valores dos lados dos triângulos: \n");
	scanf("%d %d %d", &a ,&b ,&c);

	if(a < (b+c) && b < (a+c) && c < (a+b)){

		if(a == b && b == c){
			printf("É um triâgulo equilátero.\n");

		}else if(a == b || b == c || a == c){
			printf("É um triângulo isósceles.\n");

		}else{
			printf("É um triângulo escaleno.\n");
		}

	}else{
		printf("Não é possível formar um triângulo.\n");

	}

	return 0;
}