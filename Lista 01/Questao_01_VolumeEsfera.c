#include <stdio.h>

int main(void){

	float pi = 3.1415;
	float raio;
	float CuboRaio;
	float volume;

	printf("Digite o valor do raio (cm³): ");
	scanf("%f", &raio);

	CuboRaio = raio * raio * raio;
	volume = 4/3 * pi * CuboRaio;

	printf("O volume da esfera vale: %2.5f cm³ \n ", volume);

	return 0;
}