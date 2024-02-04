#include <stdio.h>
#include <math.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
int check(int n){
	if(n<2){
		return 0;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int demnguyento(int arr[], int n){
	int count=0;
	printf("Cac so nguyen to la: ");
	for(int i=0; i<n; i++){
		if(check(arr[i])){
			printf("%d ", arr[i]);
			count++;
		}
	}
	return count;
}
void output(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	int n, arr[100];
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);
	input(arr, n);
	printf("\nCo tat ca: %d", demnguyento(arr, n));
	return 0;
}