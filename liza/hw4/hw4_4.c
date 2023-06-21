#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c){
        printf("Наибольшее число: %d", a);
    } else if (b >= a && b >= c){
        printf("Наибольшее число: %d", b);
    } else if (c >= a && c >= b){
        printf("Наибольшее число: %d", c);
    }
    return 0;
}