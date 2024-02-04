#include <stdio.h>
void nhapmang(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
}
int find(int arr[], int n){
	int max=arr[0];
	for(int i=0; i<n; i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	int arr[100], n;
	printf("Nhap n: ");
	scanf("%d", &n);
	nhapmang(arr,n);
	printf("Gia tri lon nhat: %d", find(arr,n));
	return 0;
}