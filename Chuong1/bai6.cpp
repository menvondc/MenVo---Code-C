#include <stdio.h>
int main(){
	int n, i=1;
	float sum=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(i<=n){
		sum+= 1.0/(i*(i+1));
		i++;
	}
	printf("sum = %.2f", sum);
	return 0;
	
}