#include <stdio.h>
int main(){
	int n, sum=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(i%2!=0){
			printf("\ni = %d ", i);
			sum+=i;
		}
	}
	printf("\nsum = %d", sum);
	return 0;
}