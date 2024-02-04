#include <stdio.h>
int main(){
	int n, sum=0, m=1;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		m=m*i;
		sum+=m;
	}
	printf("sum = %d", sum);
	return 0;
}