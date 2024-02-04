//Bài 67: Tính S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n

#include <stdio.h>
#include <math.h>
int sum(int n, int x){
    int k=0;
    for(int i=1; i<=n; i++){
        k += pow(-1, i+1)*pow(x,i);
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