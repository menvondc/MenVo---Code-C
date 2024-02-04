#include <stdio.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d",&arr[i]);
	}
}
void find(int arr[], int n){
	int min=arr[n-1], vitri=0;
	for(int i=0; i<n; i++){
		if(arr[i]<min){
			min=arr[i];
			vitri=i;
		}
	}
	printf("\nmin = %d", min);
	printf("\nvitri = %d", vitri);
}
int main(){
	int n, arr[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	input(arr, n);
	find(arr, n);
	return 0;
}