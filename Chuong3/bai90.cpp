#include <stdio.h>
int main(){
	int m=1, sum=0;
	while(sum+m<=10000){
		sum+=m;
		m++;
	}
	printf("So can tim: %d", m-1);
	
}