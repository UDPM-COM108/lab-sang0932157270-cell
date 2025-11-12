#include <stdio.h>
 #define PI 3.14
 #include <math.h>
int main(){
    // Bài 1 Tổng hiệu 
    float a, b, cong, tru;
    printf("nhap vao 2 so thuc: ");
    scanf("%f %f", &a, &b);
    printf("Xuat ra 2 so thuc: %f %f",a,b);
    cong = a + b;
    tru = a - b;
    printf("\nCong 2 so thuc: %.2f", cong);
    printf("\nTru 2 so thuc: %.2f", tru);
    // Bài 2 Chu vi diện tích hình chữ nhật
    float cdai, crong;
    float chuvi, dientich;
    printf("Nhap chieu dai: ");
    scanf("%f", &cdai);
    printf("Nhap chieu rong: ");
    scanf("%f", &crong);
    chuvi= (cdai + crong)*2;
    dientich= (cdai*crong);
    printf("chu vi HCN = %.2f\n",chuvi);
    printf("dien tich HCN = %.2f\n",dientich);
    // Bài 3 Chu vi diện tích hình tròn
    float bankinh;
    float chuviHT, dientichHT;
    printf("nhap ban kinh hinh tron: ");
    scanf("%f", &bankinh);
    chuviHT= 2 * PI * bankinh;
    dientichHT= PI * bankinh * bankinh;
    printf("Chu vi hinh tron = %.2f\n", chuviHT);
    printf("Dien tich hinh tron = %.2f\n", dientichHT);
    // Bài 4 Điểm trung bình 3 môn
    float toan, ly, hoa;    
    float diemTB;           
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem Ly: ");
    scanf("%f", &ly);
    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);
     diemTB = ((toan*3) + (ly*2) + (hoa*1)) / 3;
    printf("Diem trung binh = %.2f\n", diemTB);
    // Bài 5 Chu vi diện hình tam giác vuông
    float A, B, C, chuVi, dienTich;
    printf("Nhap canh a: ");
    scanf("%f", &A);
    printf("Nhap canh b: ");
    scanf("%f", &B);
    printf("Nhap canh c: ");
    scanf("%f", &C);
    chuVi = A + B + C;
    dienTich = 0.5 * A * B;
    printf("\nChu vi tam giac vuong = %.2f", chuVi);
    printf("\nDien tich tam giac vuong = %.2f\n", dienTich);
    return 0;
}
    
