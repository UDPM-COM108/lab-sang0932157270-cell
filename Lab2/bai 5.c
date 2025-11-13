#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, chuVi, dienTich;
    printf("Nhap canh a: ");
    scanf("%f", &a);
    printf("Nhap canh b: ");
    scanf("%f", &b);
    printf("Nhap canh c: ");
    scanf("%f", &c);
    chuVi = a + b + c;
    dienTich = 0.5 * a * b;
    printf("\nChu vi tam giac vuong = %.2f", chuVi);
    printf("\nDien tich tam giac vuong = %.2f\n", dienTich);
    return 0;
}