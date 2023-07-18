// Напишите программу для вычисления значения функции F(n), где n — натуральное число, 
// задана следующими соотношениями: 
//       F(1) = 1;  
//       F(2) = 1; 
//       F(n) = F(n – 2) * n при n > 2. 
//       Пользователь вводит n, программа должна вывести значение F(n). 

#include <stdio.h>

int F(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return F(n - 2) * n;
    }
}
int main() {
    int n, result;
    
    printf("n: ");
    scanf("%d", &n);
    
    result = F(n);
    
    printf("F(n) = %d\n", result);
    
    return 0;
}
