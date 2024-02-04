#include <stdio.h>
int main(){
	int a, b;
	printf("Nhap a: ");//a=48 b=18
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
		
	}
	printf("UCLN cua a va b la: %d", a);
	return 0;
}