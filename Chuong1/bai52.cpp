#include <stdio.h>
#include <math.h>
int main(){
	int n, m, min, value;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai n: ");
		scanf("%d", &n);
	}
	min=n%10;
	for(int i=1; i<=n; i++){
		value=n%10;
		if(value<min){
			min=value;
		}
		n=n/10;
	}
	printf("chu so be nhat la: %d", min);
}