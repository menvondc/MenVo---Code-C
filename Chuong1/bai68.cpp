//Bài 68: Tính S(x, n) = -x^2 + x^4  + … + (-1)^n * x^2n

#include <stdio.h>
#include <math.h>
int sum(int n, int x){
    int k=0;
    for(int i=1; i<=n; i++){
        k += pow(-1, i)*pow(x,i*2);
    }
    return k;
}
int main(){
    int n, x;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("sum = %d", sum(n, x));
}