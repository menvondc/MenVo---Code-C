#include <stdio.h>
int main(){
	int n, sum=1;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		sum*=i;
	printf("sum = %d", sum);
	return 0;
	
}