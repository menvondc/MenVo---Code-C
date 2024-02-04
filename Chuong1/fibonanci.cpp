#include <stdio.h>
int fibo(int n){
	if(n==0 || n==1)
		return n;
	else
		return fibo(n-1) + fibo(n-2);
}
int main(){
	int n, sum=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("sum = %d", fibo(n));
}