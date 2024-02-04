#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai n: ");
		scanf("%d", &n);
	}
	for(int i=1; i<=n; i++){
		n=n/10;
	}
	printf("Chu so dau tien la: %d", n);
	return 0;
}
