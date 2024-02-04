#include <stdio.h>
int main(){
	float n, i = 0.5, S = 0;
	scanf("%f", &n);
	while(i<=n){
		S = S + i*2;
		i++;
	}
	printf("%0.2f", S);
	return 0;
}