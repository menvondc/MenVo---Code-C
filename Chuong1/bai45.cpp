#include <stdio.h>
#include <math.h>
int main(){
	int n, count=0, sum=1, value=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai n: ");
		scanf("%d", &n);
	}
	do{
		for(int i=1; i<=n; i++){
			value=n%10;
			sum*=value;
			n=n/10;
			count++;
		}
	}while(n!=0);
	printf("sum = %d", sum);
	printf("\ncount = %d", count);
	return 0;
}
