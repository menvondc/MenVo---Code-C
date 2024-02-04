#include <stdio.h>
#include <math.h>
int giaithua(int n){
    int x=1;
    for(int i=1; i<=n; i++)
        x*=i;
    return x;
}
int main(){
    int n, i=1;
    float x, s=1, k=0;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%f", &x);
    while(i<=n){
        s*=i;
        k += (pow(-1, (float)i) * pow(x, i))/s;
        i++;
    }
    printf("Tong la: %.8f", k);
}