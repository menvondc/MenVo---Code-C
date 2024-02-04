#include <stdio.h>
int main(){
	int a, b, c;
	float x;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Giai pt: %dx + %d = 0", a, b);
	if(a!=0){
		x=(float)-b/(float)a;
		printf("\nx = %.2f", x);
	}
	else{
		printf("Pt vo nghiem");
	}
	return 0;
	
}