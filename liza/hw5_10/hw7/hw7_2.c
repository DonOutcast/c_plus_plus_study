#include<stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int i, n, prime_num, remainder;
    scanf("%d", &n);
    printf("Простые числа: \n");
    for (prime_num = 1; prime_num <= n; prime_num ++){
        i = 2;
        remainder = 0;
        while(i < prime_num){
            if (prime_num % i == 0){
                remainder ++;
            }
            i ++;
        }
        if (remainder == 0){
            printf("%d\n", prime_num);
        }
    }
}