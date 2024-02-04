#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float x, s;
    printf("Nh?p n: ");
    scanf("%d", &n);
    printf("Nh?p x: ");
    scanf("%f", &x);
    s=sqrt(x);
    for(int i=2; i<=n; i++){
        x = sqrt(pow(x,i)+s);
    }
    printf("sum = %.8f", x);		
    
    
}