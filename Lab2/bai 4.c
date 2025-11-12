#include <stdio.h>

int main(){
    float toan, ly, hoa;    
    float diemTB;           
    printf("Nhap diem Toan : ");
    scanf("%f", &toan);
    printf("Nhap diem Ly: ");
    scanf("%f", &ly);
    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);
     diemTB = (toan + ly + hoa) / 3;
    printf("Diem trung binh = %.2f\n", diemTB);
    return 0;
}