#include <stdio.h>

#define Unidade 57.29578;

int main(void){
	float seg, min, graus, radianos;

	//Recebe o valor digitado pelo usuário em Radianos
	printf("Digite o valer em Radianos: ");
	scanf("%f", &radianos);

	//Transforma o valor digitado em Segundos (segundo => 60 * minutos => 60 * Graus) Daí segundo => 360 * graus
	seg = radianos*360.00*Unidade;
	
	//Verifica a quantidade de Graus completos contidos em 'seg' e guarda na variável
	graus = seg / 360.00;
	
	//'seg' reccebe o restante de segundos que não completam 1 grau completo
	seg = (seg - graus * 360.00);
	
	//Verifica a quantiddade de minutos completos contidos em 'seg' e guarda na variável
	min = seg / 60.00;

	//'seg' recebe os segundos restantes que não completam 1 minuto completo
	seg = (seg - min * 60.00);

	//Imprime tudo :)
	printf("O resultado é: %0.2f° %0.2f' %0.2f''",graus, min, seg);

	return 0;
}