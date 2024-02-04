#include <stdio.h>
int main(){
	float a, b, c, max=0;
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("Nhap c: ");
	scanf("%f", &c);
	max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	printf("Max = %.3f", max);
}