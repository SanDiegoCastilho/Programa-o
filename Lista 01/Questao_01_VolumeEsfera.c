#include <stdio.h>
#include <math.h>
#define pi 3.14159 


/*Calcula o volume de uma esfera com o raio dado.*/
int main(void){
	float Raio, CuboRaio, Volume;

	printf("Digite o valor do raio: ");
	scanf("%f", &Raio);

	Volume = 4/3 * pi * pow(Raio,3);

	printf("O volume da esfera vale: %.5f cm³ \n ", Volume);

	return 0;
}