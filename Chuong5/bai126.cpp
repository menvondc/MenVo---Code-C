#include <stdio.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
int sum(int arr[], int n){
	int sum=0;
	for(int i=0; i<n; i++){
		if(arr[i]<0){
			sum+=arr[i];
		}
	}
	return sum;
}
int main(){
	int n, arr[100];
	printf("Nhan n: ");
	scanf("%d", &n);
	input(arr, n);
	int tinhtong = sum(arr, n);
	printf("Tong la: %d", tinhtong);
	return 0;
}