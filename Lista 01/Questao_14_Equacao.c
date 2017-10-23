#include <stdio.h>
#include <math.h>

int main(void){

	int a, b, c, Delta;
	float x1, x2;

	printf("Digite os coeficientes: \n");
	scanf("%d %d %d", &a, &b, &c);

	if(a == 0){
		printf("O coeficiente a não pode ser 0.\n");

	}else{
		Delta = b*b - 4*a*c;

		if(Delta == 0){
			x1 = x2 = (-b) / 2*a;
			printf("X1 = X2 = %f", &x1);

		}else if(Delta > 0){
			x1 = (-1*b + sqrt(Delta)) / 2*a;
			x2 = (-1*b - sqrt(Delta)) / 2*a;
			printf("X1 = %.2f \n", x1);
			printf("X2 = %.2f ", x2);

		}else{
			printf("Não existe raiz real");
		}
	}

	return 0;
}