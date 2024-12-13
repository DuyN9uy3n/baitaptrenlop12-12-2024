#include <stdio.h>

int main() {
    int n;
    
    printf("nhap so n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("so nhap ko hop le.\n");
        return 1;
    }
    
    printf("cac uoc cua  %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
