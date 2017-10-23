#include <stdio.h>
#include <math.h>

int main(void){

	float r, ang, x, y;

	printf("Digite o valor do Raio e do Ângulo: \n");
	scanf("%f %f", &r, &ang);

	x = r * cos(ang);
	y = r * sin(ang);

	printf("%.2f %.2f\n", x, y);

	return 0;
}