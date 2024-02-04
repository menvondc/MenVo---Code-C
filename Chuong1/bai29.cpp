#include <stdio.h>
int main(){
	int n, count=0, sum=0, max=0, min=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<1){
		printf("Xin nhap lai n: ");
		scanf("%d", &n);
	}
	printf("Cac uoc so le cua n: ");
	for(int i=1; i<=n; i++){
		if(n%i == 0 && i%2 != 0){
			printf("%d ", i);
			count++;
			max=i;
			if(max=i){
				max=i;
			}
		}
	}
	printf("\nCo tat ca %d uoc so le ", count);
	printf("\nUoc so le be nhat = %d", max);
	return 0;
}