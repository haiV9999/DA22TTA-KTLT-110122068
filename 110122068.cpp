#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap bien n: ");
    scanf("%d", &n);

    int tong = n;
    printf("Tong: %d", tong);

    int hieu = n;
    printf("\nHieu: %d", hieu);

    int tich = n;
    printf("\nTich: %d", tich);

    float thuong = (float)n / 2;
    printf("\nThuong: %.2f", thuong);

    return 0;
}

