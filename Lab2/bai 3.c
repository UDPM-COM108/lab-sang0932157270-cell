#include <stdio.h>
#define PI 3.14
int main(){
    float bankinh;
    float chuviHT, dientichHT;
    printf("nhap ban kinh hinh tron: ");
    scanf("%f", &bankinh);
    chuviHT= 2 * PI * bankinh;
    dientichHT= PI * bankinh * bankinh;
    printf("Chu vi hinh tron = %.2f\n", chuviHT);
    printf("Dien tich hinh tron = %.2f\n", dientichHT);
    return 0;
}
    
