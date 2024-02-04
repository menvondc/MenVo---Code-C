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
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(j<j+1){
				int temp=j;
				j=j+1;
				j=temp;
			}
		}
	}
	printf("n sao khi dao nguoc la: %d", n);
	return 0;
}