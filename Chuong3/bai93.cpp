#include <stdio.h>
#include <math.h>
int main(){
	int n, count=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(n<2){
		count++;
	}
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0){
				count++;
				break;
			}
		}
	}
	if(count==0){
		printf("La so nguyen to!");
	}
	else{
		printf("Khong la so nguyen to!");
	}
	return 0;
}