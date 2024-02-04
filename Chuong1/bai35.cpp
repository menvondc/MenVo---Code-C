#include <stdio.h>
#include <cmath>
int giaithua(int n){
    int s=1;
    for(int i=1; i<n; i++){
        s*=i;
    }
    return s;
}
int main(){
    int n;
    float x;
    printf("Nh?p n: ");
    scanf("%d", &n);
    for(int i=2; i<=n; i++){
        x = sqrt(giaithua(n)+i);
    }
    printf("sum = %.5f", x);
    
    
}