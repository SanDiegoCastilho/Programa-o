#include <stdio.h>
	
int mdc(x,y);

int main(){
	int a,b,c;

	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n",	mdc(mdc(a,b),c));
}

int mdc(x,y){
	if(x%y == 0){
		return y;
	}else{
		mdc(y,x%y);
	}
}