#include <stdio.h>

int main(void){

	float PrecoGalaoDolar;
	float PrecoGalaoReal;
	float ValorLitro;
	float TaxaConversao;

	printf("Digite o valor do galão em dólares: ");
	scanf("%f", &PrecoGalaoDolar);

	printf("Digite a taxa de conversão Dolar para Real: ");
	scanf("%f", &TaxaConversao);

	PrecoGalaoReal = TaxaConversao * PrecoGalaoDolar;
	ValorLitro = PrecoGalaoReal / 3.7854;

	printf("O valor do litro da gasolina em reais seria: %2.3f R$\n", ValorLitro);
	return 0;
}