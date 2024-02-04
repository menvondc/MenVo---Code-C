#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float x=sqrt(2);
    printf("Nh?p n: ");
    scanf("%d", &n);
    for(int i=3; i<=n; i++){
        x = pow((x+i)*1.0, 1.0/(i+1));
    }
    printf("sum = %.8f", x);	
    
    
}