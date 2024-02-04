#include <stdio.h>
#include <math.h>
int main(){
	int n, count=0, value=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai n: ");
		scanf("%d", &n);
	}
	do{
		for(int i=1; i<=n; i++){
			value=n%10;
			if(value%2 != 0){
				count++;
			}
			n=n/10;
		}
	}while(n!=0);
	printf("\nSo luong chu so le la: %d", count);
	return 0;
}
