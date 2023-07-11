//1.  Напишите программу, которая возводит число a в степень n, 
// a   и n вводятся с клавиатуры в отдельных строках. Возведение в степень
//  оформите в виде функции. 
//Программа должна вывести одно число=а в степени n.

#include <stdio.h>
int power(int a, int n) {
   
    int result = 1;

    for (int i = 0; i < n; i++) {
        result *= a;
    }
    return result;
}
int main() {

    int a, n = 0;
    
    printf("number a: ");
    scanf("%d", &a);
    printf("power n: ");
    scanf("%d", &n);
    int result = power(a, n);

    printf("%d to the power of %d is: %d", a, n, result);

    return 0;
}


