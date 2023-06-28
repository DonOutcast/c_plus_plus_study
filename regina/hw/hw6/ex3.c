// Используя цикл while, напишите программу, которая выводит на экран в столбик ряд Фибоначчи до 10-го члена ряда.
// Числа Фибоначчи — это элементы числовой последовательности, в которой первые два числа равны 1 и 1, а каждое последующее число равно сумме двух предыдущих чисел.

#include <stdio.h>
int main() {
    int a = 1, b = 1, c;
    printf("%d\n", a);
    printf("%d\n", b);
    do {
        c = a + b;
        printf("%d\n", c);
        a = b;
        printf("%d\n", a);
        b = c;
        printf("%d\n", b);
    } while (c <= 55, a < 55, b < 55);
    return 0;
}

// #include <stdio.h>
// int main() {
//     int a = 1, b = 1, c;
//     printf("%d\n", a);
//     printf("%d\n", b);
//     while (c <= 55, a < 55, b < 55) {
//         c = a + b;
//         printf("%d\n", c);
//         a = b;
//         printf("%d\n", a);
//         b = c;
//         printf("%d\n", b);
//     } 
//     return 0;
// }
