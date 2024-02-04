#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	float x=sqrt(2);
	for(int i=0; i<n; i++){
		x=sqrt(x+2);
	}
	printf("sum = %.8f", x);
	return 0;
}