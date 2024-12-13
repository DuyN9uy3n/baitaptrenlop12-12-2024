#include <stdio.h>  
#include <math.h>  

int main() {  
    int count = 0, i, j;  

    printf("10 so nguyen to dau tien la: ");  
    
    i = 2; 
    while (count < 15) { 
        int isPrime = 1; 
        for (j = 2; j <= sqrt(i); j++) {  
            if (i % j == 0) {  
                isPrime = 0;
                break;  
            }  
        }  
        if (isPrime) {  
            printf("%d ", i);
            count++;
        }  
        i++;
    }  

    printf("\n");  

    return 0;  
}