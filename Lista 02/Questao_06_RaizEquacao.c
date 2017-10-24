#include <stdio.h>
#include <math.h>

float CalDelta(float a, float b, float c);
int CalRaizes(float a, float b, float c, float *px1, float *px2);



int main(void){
	float c1,c2,c3,x1,x2;
	int qnt;

	//Recebe os valores dos coeficientes: c1, c2, c3;
	printf("Digite os valores de a, b e c: ");
	scanf("%f %f %f", &c1, &c2, &c3);

	//Calcula a quantidade de raízes qe a equação contém.
	qnt = CalRaizes(c1,c2,c3,&x1,&x2);

	//Verifica a quantidade de raízes e mostra na tela a mensagem correspondente.
	switch(qnt){
		case 0:
			printf("Não existem raízes reais!!\n");
			break;
		case 1:
			printf("Existe %d raíz: %.2f \n",qnt,x1);
			break;
		case 2:
			printf("Existem %d raízes: %.2f e %.2f \n",qnt,x1,x2);
	}

	return 0;
}




//Recebe os valores dos coeficientes para calcular o valor de Delta.
float CalDelta(float a, float b, float c){
	float delta;

	delta = (pow(b,2) - (4*a*c));

	return delta;
}


//Recebe o valores dos coeficientes e os ponteiros para as variáveis das raízes
// e as calcula de acordo com o valor Delta passado pela função CalDelta.
int CalRaizes(float a, float b, float c, float *px1, float *px2){
	float d = CalDelta(a,b,c);

	if (d == 0){
		*px1 = *px2 = (-b/2*a);
		return 1;
	}

	if (d > 0){
		 *px1 = ((-b + sqrt(d))/2*a);
		 *px2 = ((-b - sqrt(d))/2*a);
		 return 2;
	}

	if (d < 0){
		return 0;
	}
}