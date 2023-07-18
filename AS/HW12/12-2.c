// Напишите программу для  вычисления значения функции F(n), где n — натуральное число,
//  задана следующими соотношениями: 
// F(1) = 1; 
// F(n) = n + F(n − 1), если n чётно; 
// F(n) = 2 · F(n − 2), если n > 1 и при этом нечётно. 
// Пользователь вводит n, программа должна вывести значение F(n). 

#include <stdio.h>

int F(int n) {
    if (n == 1) {
        return 1;
    }  else if (n % 2 == 0) {
        return n + F(n - 1);
    } else {
        return 2 * F(n - 2);
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


