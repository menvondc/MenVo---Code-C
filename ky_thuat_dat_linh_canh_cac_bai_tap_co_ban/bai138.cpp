#include <stdio.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
int find(int arr[], int n){
	int max=0, vitri=0;
	for(int i=0; i<n; i++){
		if(arr[i]%2==0){
			max=arr[i];
			vitri=i;
			break;
		}
	}
	return vitri;
}
int main(){
	int n, arr[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	input(arr, n);
	int count = find(arr,n);
	if(count){
		printf("Vi tri chan dau tien la: %d",find(arr,n));
	}
	else{
		printf("Tra ve: %d", -1);
	}
	return 0;
}