#include <stdio.h>
#include <math.h>
float sum(int n){
	float x=1, y=0;
	for(int i=1; i<=n; i++){
		y+=i;
		x+= pow(-1, i+1)*(1.0/y);
	}
	return x;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Tong la: %.8f", sum(n)); 
}