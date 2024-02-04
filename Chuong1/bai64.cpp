#include <stdio.h>
#include <math.h>
int main(){
	int denta=0, a, b, c, x1, x2;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	printf("Giai pt: %dx^2 + %dx + %d = 0", a, b, c);
	if(a!=0){
		denta = pow(b,2) - 4*a*c;
		printf("\ndenta = %d", denta);
		if(denta>0){
			printf("\nPt co 2 no phan biet");
			x1=(-b+sqrt(denta))/(2*a);
			x2=(-b-sqrt(denta))/(2*a);
			printf("\nx1 = %d", x1);
			printf("\nx2 = %d", x2);
		}
		if(denta==0){
			printf("Pt co nghiem kep");
			x1=-b/2*a;
			printf("\nx1=x2 = %d", x1);
		}
		if(denta<0){	
			printf("\nPt vo nghiem");
		}
	}
	else{
		printf("\nKhong phai pt bac 2");
	}
	return 0;
}