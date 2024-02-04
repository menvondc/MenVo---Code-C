#include <stdio.h>
int main(){
	int a, b;
	float x;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("%dx + %d = 0", a, b);
	if(a==0){
		printf("\nPhuong trinh vo nghiem!");
	}
	else{
		x=(float)b/(float)a;
	}
	printf("\nx = %.2f", x);
}