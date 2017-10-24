#include <stdio.h>
#include <math.h>

float Pot(float x, int k);


int main(void){
	int b;
	float a;

	scanf("%f %d", &a, &b);

		printf(" Pot: %.5f\n",Pot(a,b));
		printf(" Pow: %.5f\n",pow(a,b));


	return 0;
}




float Pot(float x, int k){

	if (k == 1){
		return x;
	}

	x = x * Pot(x,k-1);

}