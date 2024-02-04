#include <stdio.h>
int find(int n){
	int count=0, max;
	while(n>0){
		int digital=n%10;
		if(digital<max){
			max=digital;
			count=1;
		}
		else if(digital==max){
			count++;
		}
		n=n/10;
	}
	return count;
}
int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	printf("So chu so lon nhat cua n la: %d", find(n));
	return 0;
}