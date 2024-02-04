#include <stdio.h>
int main(){
	int n, i = 1, S = 0;
	scanf("%d", &n);
	while(i <= n){
		S += i*2;
		i++;
	}
	printf("Tong = %d", S);
	return 0;
}