#include <stdio.h>

int main(void){

	int x, y, r, mdc;

	printf("MDC :\n");
	scanf("%d %d", &x, &y);

	r = 1;
	while(r != 0){
		r = x % y;
		mdc = y;
		x = y;
		y = r;
	}

	printf("%d",mdc);

	return 0;
}