#include <stdio.h>
#include <math.h>
int main(){
	int n, count=0, value=0, sum=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai n: ");
		scanf("%d", &n);
	}
	do{
		for(int i=1; i<=n; i++){
			value=n%10;
			if(value%2 == 0){
				sum+=value;
				count++;
			}
			n=n/10;
		}
	}while(n!=0);
	printf("\nSo luong chu so chan la: %d", count);
	printf("\nTong cac chu so chan la: %d", sum);
	return 0;
}
