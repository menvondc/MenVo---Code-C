//Bài 69: Tính S(x, n) = x – x^3 + x^5 + … + (-1)^n * x^2n+1

#include <stdio.h>
#include <math.h>

double sum(int n, double x) {
    double k = 0;
    for (int i = 1; i <= n; i++) {
        k += pow(-1, i) * pow(x, 2 * i + 1);
    }
    return k;
}

int main() {
    int n;
    double x;

    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%lf", &x);

    printf("sum = %lf\n", sum(n, x));

    return 0;
}
