#include <stdio.h>
#include <math.h>

int prime(int n){
    if(n < 2){
        return 0; 
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0; 
        }
    }
    return 1;
}

int main(){
    int n;
    int dem = 0;
    
    printf("nhap so luong so nguyen to can kiem tra: ");
    scanf("d", &n);
    for(int i = 1; i <= n; i++){
        if(prime(i) == 1){
            printf("%d ", i);
            ++dem;
        }
    }
    return 0;
}