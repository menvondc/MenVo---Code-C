#include <stdio.h>
#include <math.h>

int main(){
    int n, i=1;
    float x, s=1, k=1, m;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%f", &x);
    while(i<=n){
        s=(2*i)+1;
        m = pow(x, (2*i)+1);
        k = (pow(-1, (float)i+1) * m)/s;
        i++;
    }
    printf("Tong la: %.8f", k);
}