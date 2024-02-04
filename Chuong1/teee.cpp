#include <stdio.h>

float tinh_S(int n) {
    float S = 0.0;
    for (int i = 1; i <= n; i++) {
        S += 1.0 / (i * (i + 1));
    }
    return S;
}

int main() {
    // Thay đổi giá trị của n tại đây
    int n = 5;
    
    float ket_qua = tinh_S(n);
    printf("Gia tri cua S(%d) la: %f\n", n, ket_qua);

    return 0;
}
