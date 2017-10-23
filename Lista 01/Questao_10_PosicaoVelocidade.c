#include <stdio.h>

int main(void){

	float PosInicial, PosiFinal, VelInicial, VelFinal, Instante, Aceleracao;

	printf("Digite a Posição Inicial, Velocidade Inicial, Aceleração e o Instante respectivamente: ");
	scanf("%f %f %f %f", &PosInicial, &VelInicial, &Aceleracao, &Instante);

	PosiFinal = (PosInicial + VelInicial + (Aceleracao*Instante*Instante/2));

	VelFinal = VelInicial + Aceleracao*Instante;

	printf("A posição final do corpo é de: %.2f \n", PosiFinal);
	printf("A velocidade finao do corpo é de: %.2f", VelFinal);

	return 0;
}