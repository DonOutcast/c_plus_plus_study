// Напишите программу для вычисления значения функции F(n) и G(n), где n – 
// натуральное число, задана следующими соотношениями: 
// F(1) = 1 
// F(n) = 2 * G(n–1) + 5 * n, при n >1 
// G(1) = 1 
// G(n) = F(n–1) + 2 * n, при n >1 
// Пользователь вводит n и m (в отдельных строках), программа должна вывести F(n)+G(m). 

#include <stdio.h>

int G(int n);
int F(int n) {  
    
    if (n == 1){
        return 1;
        }
    else {
        return 2 * G(n - 1) + 5 * n;
        }
}
int G(int n) {
    
    if (n == 1) {
        return 1;
        }
    else {
        return F(n - 1) + 2 * n;
        }
}

int main() {
    int n, m, result;
    
    printf("n: ");
    scanf("%d", &n);
    
    printf("m: ");
    scanf("%d", &m);
    
    result = F(n) + G(m);
    
    printf("F(n) + G(m) = %d\n", result);
    
    return 0;
}