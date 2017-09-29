#include <stdio.h>

int main(void){

	float P1, P2, P3, Media, MaiorNota;

	//Recebe os valores das notas parciais
	printf("Digite as notas parcial: ");
	scanf("%f %f", &P1, &P2);

	//Verifica qual a maior nota
	MaiorNota = P1 > P2 ? P1 : P2; 

	//Calcula a média aritmética
	Media = (P1 + P2)/2;

	//Verifica se a média tem valor suficiente para que o aluno seja aprovado direto
	if(P1 > 3 && P2 > 3 && Media >= 5){
		printf("Aprovado conceito A");

	}else{
	//Recalcula a media a partir do valor da terceira Avaliação
		printf("Você não passou de primeira!\n");
		printf("Digite a nota da AP3 Final: ");
		scanf("%f", &P3);

		Media = (P3 + MaiorNota)/2;

		//Verifica se foi aprovado
		Media >= 5 ? printf("Aprovado conceito B!") : printf("Reprovado!\n");
	}

	return 0;
}