#include <stdio.h>

/*Calcula o preço da gasolina em R$ dado o preço do galão em U$*/
int main(void){
	float PrecoGalaoDolar, PrecoGalaoReal, ValorLitro, TaxaConversao;

	printf("Digite o valor do galão em dólares: ");
	scanf("%f", &PrecoGalaoDolar);

	printf("Digite a taxa de conversão Dolar para Real: ");
	scanf("%f", &TaxaConversao);

	PrecoGalaoReal = TaxaConversao * PrecoGalaoDolar;
	ValorLitro = PrecoGalaoReal / 3.7854;

	printf("O valor do litro da gasolina em reais seria: %.3f R$\n", ValorLitro);

	return 0;
}