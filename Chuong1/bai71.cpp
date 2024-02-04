#include <stdio.h>
#include <math.h>
float sum(int n, int x){
	float y=0;
	for(int i=1; i<=n; i++){
		y+=i;
		x+= pow(-1, x)*(pow(x,i)/y);
	}
	return x;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("Tong la: %.8f", sum(n,x)); 
}