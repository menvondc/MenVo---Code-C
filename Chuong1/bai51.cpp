#include <stdio.h>
#include <math.h>
int main(){
	int n, m=0, max=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai n: ");
		scanf("%d", &n);
	}
	while(n>0){
		m=n%10;
		if(m>max){
			max=m;
		}
		n=n/10;
	}
	printf("chu so lon nhat la: %d", max);
}