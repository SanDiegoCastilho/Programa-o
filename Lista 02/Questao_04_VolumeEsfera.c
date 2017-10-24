#include <stdio.h>
#include <math.h>
#define pi 3.14

float Area(float r);
float Volume(float r);

int main(void){
	float a;

	printf("Digite o valor do raio (cm): ");
	scanf("%f", &a);

	printf("Área: %.2f cm² Volume: %.2f cm³",Area(a), Volume(a));

	return 0;
}

float Area(float r1){
	float area = 4 * pi * pow(r1,2);

	return area;
}

float Volume(float r2){
	float vol;
	vol = (pi * pow(r2,3) * 4)/3;

	return vol;
}