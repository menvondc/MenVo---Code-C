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
    float x=sqrt(2);
    printf("Nh?p n: ");
    scanf("%d", &n);
    for(int i=3; i<=n; i++){
        x = pow((x+giaithua(i))*1.0, 1.0/(i+1));
    }
    printf("sum = %.8f", x);	
    
    
}