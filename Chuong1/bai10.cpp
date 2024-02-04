#include <stdio.h>
#include <math.h>
int main(){
	int x, n;
	printf("Nhap co so x: ");
	scanf("%d", &x);
	printf("Nhap so mu n: ");
	scanf("%d", &n);
	int sum = pow(x,n);
	printf("sum = %d", sum);
	return 0;
}