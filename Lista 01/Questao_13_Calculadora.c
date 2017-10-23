#include <stdio.h>

int main(void){

	int Opr1, Opr2;
	char Op;

	printf("Digite a expressão: ");
	scanf("%d %c %d", &Opr1, &Op, &Opr2);

	switch (Op){
		case '+':
			printf("%d + %d = %d", Opr1, Opr2, Opr1+Opr2);
			break;

		case '-':
			printf("%d - %d = ", Opr1, Opr2, Opr1-Opr2);
			break;

		case '*':
			printf("%d * %d = %d",Opr1 ,Opr2, Opr1*Opr2);
			break;

		case '/':
			Opr2 != 0 ? printf("%d / %d = ", Opr1, Opr2, Opr1/Opr2) : printf("Não existe divisão por 0\n");
			break;
	}

	return 0;
}