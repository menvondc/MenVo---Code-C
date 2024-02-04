#include <stdio.h>
int main(){
	int n=1, sum=0;
	while(sum<=10000){
		sum+=n;
		n++;
	}
	printf("So can tim: %d", n-1);
	
}