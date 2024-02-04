#include <stdio.h>
#include <math.h>
int main(){
	int x, fx=0;
	printf("Nhap x: ");
	scanf("%d", &x);
	if(x>=5){
		printf("f(x)=2x^2+5x+9\n");
		fx=2*pow(x,2)+5*x+9;
		printf("f(5) = %d", fx);
	}
	if(x<5){
		printf("f(x)=-2x^2+4x-9\n");
		fx=-2*pow(x,2)+4*x-9;
		printf("f(5) = %d", fx);
	}
	return 0;
}