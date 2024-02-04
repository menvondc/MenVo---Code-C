#include <stdio.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
void sort(int arr[], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void output(int arr[], int n){
	printf("Mang sau khi sort: ");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	int n, arr[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	input(arr, n);
	sort(arr, n);
	output(arr, n);
	return 0;
}