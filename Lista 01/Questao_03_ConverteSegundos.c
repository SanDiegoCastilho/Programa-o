#include <stdio.h>

int main(void){

	int Segundos, Minutos, Horas;

	printf("Digite o total de segundos: ");
	scanf("%d", &Segundos);

	Horas = Segundos/3600;
	Segundos = Segundos - Horas * 3600;

	Minutos = Segundos / 60;
	Segundos = Segundos - Minutos * 60;

	printf("O evento durou %02d:%02d:%02d \n", Horas,Minutos,Segundos);
	return 0;
}