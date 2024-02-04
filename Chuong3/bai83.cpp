#include <stdio.h>
int main(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	if((a>0 && b>0) || (a<0 && b<0)){
		printf("Ca 2 cung dau");
	}
	else{
		printf("Ca 2 khac dau");
	}
	return 0;
}