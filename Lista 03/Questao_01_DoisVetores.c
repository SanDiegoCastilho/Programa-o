#include <stdio.h>

int main(void){

	int a[5], b[8];

	//Recebe dois vetores de inteiros

	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 5; j++){
			
			if(a[i] == b[j]){
				printf("%d\n", b[j]);
			}
		}
	}

	return 0;
}