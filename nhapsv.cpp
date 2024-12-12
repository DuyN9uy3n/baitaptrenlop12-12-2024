#include <stdio.h>  

int main() {  
    char hoTen1[] = "Nguyen Van A";  
    float toan1 = 7.5, ly1 = 7.0, hoa1 = 5.5, sinh1 = 8.5, van1 = 7.5;  
    float diemTB1 = (toan1 + ly1 + hoa1 + sinh1 + van1) / 5;  

    char hoTen2[] = "Nguyen Van B";  
    float toan2 = 7.0, ly2 = 8.5, hoa2 = 9.0, sinh2 = 5.0, van2 = 6.5;  
    float diemTB2 = (toan2 + ly2 + hoa2 + sinh2 + van2) / 5;  

    char hoTen3[] = "Nguyen Van C";  
    float toan3 = 6.5, ly3 = 7.2, hoa3 = 6.5, sinh3 = 10.0, van3 = 5.5;  
    float diemTB3 = (toan3 + ly3 + hoa3 + sinh3 + van3) / 5;  

    printf("STT|\tHo Va Ten\t|\tToan\t|\tVat Ly\t|\tHoa\t|\tSinh\t|\tVan\t|\tDiem TB\n");  
    printf("------------------------------------------------------------------------------------------------------------------------\n");  

    printf("1|\t%s\t|\t%.1f\t|\t%.1f\t|\t%.1f\t|\t%.1f\t|\t%.1f\t|\t%.1f\n", hoTen1, toan1, ly1, hoa1, sinh1, van1, diemTB1);  
    printf("-----------------------------------------------------------------------------------------------------------------------\n");  

    printf("2|\t%s\t|\t%.1f\t|\t%.1f\t|\t%.1f\t|\t%.1f\t|\t%.1f\t|\t%.1f\n", hoTen2, toan2, ly2, hoa2, sinh2, van2, diemTB2);  
    printf("-----------------------------------------------------------------------------------------------------------------------\n");  

    printf("3|\t%s\t|\t%.1f\t|\t%.1f\t|\t%.1f\t|\t%.1f\t|\t%.1f\t|\t%.1f\n", hoTen3, toan3, ly3, hoa3, sinh3, van3, diemTB3);  
    printf("-----------------------------------------------------------------------------------------------------------------------\n");  

    return 0;  
}