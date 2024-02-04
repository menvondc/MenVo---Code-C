#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float x=sqrt(2);
    printf("Nh?p n: ");
    scanf("%d", &n);
    for(int i=3; i<=n; i++){
        x = pow((sqrt(i+x)*1.0), (1.0/i));
    }
    printf("sum = %.8f", x);	
    
    
}