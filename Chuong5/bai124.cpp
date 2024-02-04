#include <stdio.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d",&arr[i]);
	}
}
int check(int arr[], int n){
	for(int i=0; i<n; i++){
		if(arr[i]%2==0 && arr[i]<2004){
			return 1;
		}
	}
	return 0;
}
int main(){
	int n, arr[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	input(arr,n);
	if(check(arr,n)){
		printf("Ton tai gia tri!\n");
	}
	else{
		printf("Khong ton tai gia tri!\n");
	}
	return 0;
}