#include <stdio.h>
#include <math.h>
int giaithua(int n){
    int s=1;
    for(int i=1; i<=n; i++){
        s*=i;
    }
    return s;
}
int main(){
    int n;
    float x=sqrt(1);
    printf("Nh?p n: ");
    scanf("%d", &n);
    for(int i=2; i<=n; i++){
        x = sqrt(giaithua(i)+x);
    }
    printf("sum = %.8f", x);
    
    
}	