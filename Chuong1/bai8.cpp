#include <stdio.h>
int main(){
	int n, i=2;
	float sum=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(i<=n){
		sum+= (float)(2*i+1)/(2*i+2);	
		i++;
	}
	printf("sum = %.2f", sum);
	return 0;
	
}