#include <stdio.h>
#include <math.h>
int main(){
	int n, sum=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		sum+=pow(i,3);
	}
	printf("sum = %d", sum);
}