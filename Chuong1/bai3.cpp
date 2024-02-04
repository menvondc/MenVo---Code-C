#include <stdio.h>
int main(){
	int n, i = 1;
	float S = 0;
	scanf("%d", &n);
	while(i<=n){
		S = S + 1.0/(2*i);
		i++;
	}
	printf("Tong = %0.2f", S);
	return 0;
}