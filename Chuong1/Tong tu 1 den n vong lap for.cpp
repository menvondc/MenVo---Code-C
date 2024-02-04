#include <stdio.h>
int main(){
	int n, S = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		S += i;
	}
	printf("S = %d", S);
	return 0;	
}