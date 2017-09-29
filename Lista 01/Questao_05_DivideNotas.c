#include <stdio.h>

int main(void){
	int cem, cinquenta, vinte, dez, cinco, dois, um, valor, TotalNotas;

	cem = 0;
	cinquenta = 0;
	vinte = 0;
	dez = 0;
	cinco = 0;
	dois = 0;
	um = 0;
	valor = 0;
	TotalNotas = 0;

	printf("Digite um valor em Reais (R$): ");
	scanf("%d", &valor);

	if(valor >= 100){
		cem = valor / 100;
		valor = valor - (cem * 100);

	}
	if(valor >= 50){
		cinquenta = valor / 50;
		valor = valor - (cinquenta * 50);

	}
	if(valor >= 20){
		vinte = valor / 20;
		valor = valor - (vinte * 20);

	}
	if(valor >= 10){
		dez = valor / 10;
		valor = valor - (dez * 10);

	}
	if(valor >= 5){
		cinco = valor / 5;
		valor = valor - (cinco * 5);

	}
	if(valor >= 2){
		dois = valor / 2;
		um = valor - (dois * 2);
	}

	TotalNotas = cem + cinquenta + vinte + dez + cinco + dois + um;
		
	printf("O menor números de notas necessárias para representas %d é: \n",valor );
	printf("%d de R$ 100 %d de R$ 50 %d de R$ 20 %d R$ 10 %d R$ 5 %d R$ 2 %d R$ 1\n", cem, cinquenta, vinte, dez, cinco, dois, um);
	printf("Totalizando %d\n", TotalNotas);

	return 0;
}