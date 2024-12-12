#include <stdio.h>

int main() {
    float soGioLam, mucLuongTheoGio, luongCoBan, phuCap, tongLuong;

    printf("Nhap so gio lam: ");
    scanf("%f", &soGioLam);

    printf("Nhap muc luong/gio: ");
    scanf("%f", &mucLuongTheoGio);
    luongCoBan = soGioLam * mucLuongTheoGio;

    phuCap = 0;
    if (soGioLam > 160) {
        phuCap = luongCoBan * 0.1; 
    }

    tongLuong = luongCoBan + phuCap;
    
    printf("Luong co ban: %.0f\n", luongCoBan);
    printf("Phu cap: %.0f\n", phuCap);
    printf("Tong luong: %.0f\n", tongLuong);

    return 0;
}