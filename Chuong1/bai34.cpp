#include <stdio.h>
int main(){
    int n;
    float x;
    printf("Nhập n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        x=sqrt(i+x);
    printf("sum = %.8f", x);
    return 0;
}