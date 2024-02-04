	#include <stdio.h>
	int main(){
		int n;
		printf("Nhap n: ");
		scanf("%d", &n);
		switch(n){
			case 1: 
			case 2: 
			case 3: 
				printf("Quy1");
				break;
			case 4: 	
			case 5: 
			case 6:
				printf("Quy2");
				break;
			case 7: 
			case 8: 
			case 9:
				printf("Quy3");
				break;
			case 10: 
			case 11:
			case 12:
				printf("Quy4");
				break;
		default: printf("Xin nhap dung thang trong nam!");
	}
		return 0;
	}                                                 