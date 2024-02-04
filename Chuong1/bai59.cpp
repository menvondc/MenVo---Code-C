#include <stdio.h>
int find(int n){
    int sodao=0, temp;
    while(n!=0){
        temp=n%10;
        sodao=(sodao*10) + temp;
        n=n/10;
    }
    return sodao;
}

int main(){
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if(n==find(n)){
        printf("La so doi xung!");
    }
    else{
        printf("Khong phai so doi xung");
    }
   
}