#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    double sum = 0;  
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%d", &x);
    for (int i = 1; i <= n; i++) {
        double value = pow(x, i);
        sum += value;
    }

    printf("sum = %.2f", sum);  

    return 0;
}
