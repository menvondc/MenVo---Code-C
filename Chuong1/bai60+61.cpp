// Bài 60: Hãy kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái sang phải hay không
// Bài 61: Hãy kiểm tra các chữ số của số nguyên dương n có giảm dần từ trái sang phải hay không
#include <stdio.h>
int check(int n){
    int a,  b;
    a=n%10;
    printf("a = %d\n", a);
    n=n/10;
    while(n!=0){
        b=n%10;
        printf("b = %d\n", b);
        n=n/10;
        if(b<a){
            return 1;
        }
        else{
            return 0;
        }
    }
    
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if(check(n)){
        printf("Cac chu so tang dan");
    }
    else{
        printf("Cac chu so giam dan");
    }
}