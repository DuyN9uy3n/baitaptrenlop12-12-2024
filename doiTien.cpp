#include <stdio.h>

int main() {
    char loaiTien;
    float soTien, ketQua;
    const float tyGiaUSD = 23500, tyGiaEUR = 25000, tyGiaGBP = 28000, tyGiaJPY = 180;

    printf("Chon dong muon doi: \n");
    printf("U: USD\n");
    printf("E: EUR\n");
    printf("G: GBP\n");
    printf("J: JPY\n");
    printf("V: VND\n");
    printf("nhap lua chon: ");
    scanf(" %c", &loaiTien);

    printf("Nhap so tien: ");
    scanf("%f", &soTien);

    switch (loaiTien) {
        case 'U':
            ketQua = soTien * tyGiaUSD;
            printf("%.2f USD sap si %.2f VND\n", soTien, ketQua);
            break;
        case 'E':
            ketQua = soTien * tyGiaEUR;
            printf("%.2f EUR sap si %.2f VND\n", soTien, ketQua);
            break;
        case 'G':
            ketQua = soTien * tyGiaGBP;
            printf("%.2f GBP sap si %.2f VND\n", soTien, ketQua);
            break;
        case 'J':
            ketQua = soTien * tyGiaJPY;
            printf("%.2f JPY sap si %.2f VND\n", soTien, ketQua);
            break;
        case 'V':
            printf("Chon dong muon doi sang: \n");
            printf("U: USD\n");
            printf("E: EUR\n");
            printf("G: GBP\n");
            printf("J: JPY\n");
            scanf(" %c", &loaiTien);

            switch (loaiTien) {
                case 'U':
                    ketQua = soTien / tyGiaUSD;
                    printf("%.2f VND sap si %.2f USD\n", soTien, ketQua);
                    break;
                case 'E':
                    ketQua = soTien / tyGiaEUR;
                    printf("%.2f VND sap si %.2f EUR\n", soTien, ketQua);
                    break;
                case 'G':
                    ketQua = soTien / tyGiaGBP;
                    printf("%.2f VND sap si %.2f GBP\n", soTien, ketQua);
                    break;
                case 'J':
                    ketQua = soTien / tyGiaJPY;
                    printf("%.2f VND sap si %.2f JPY\n", soTien, ketQua);
                    break;
                default:
                    printf("ko hop le!\n");
            }
            break;
        default:
            printf("ko hop le!\n");
    }

    return 0;
}