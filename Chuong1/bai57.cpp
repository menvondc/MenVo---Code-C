#include <stdio.h>
int main(){
	int n, count=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n>0){
		int value=n%10;
		if(value %2!=0){
			count=1;
			break;
		}
		n/=10;
	}
	if(count!=0){
		printf("Co chu so le!");
	}
	else{
		printf("Toan chu so chan!");
	}
	return 0;
}
