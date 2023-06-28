// 4.  Напишите программу, которая запрашивает n-количество чисел, затем запрашивает ввод n-натуральных чисел.
// Программа должна вывести на экран в отдельных строках количество и сумму чётных введенных чисел, оканчивающихся на 4.

#include <stdio.h>

int main() {
    int n, numbers, count = 0, sum = 0;
    printf("How many numbers?\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter a number:\n");
        scanf("%d", &numbers);
        if (numbers % 10 == 4 && numbers % 2 == 0) {
            count++;
            sum += numbers;
        }
    }
    printf("Even numbers ending in 4: %d\n", count);
    printf("The sum of even numbers ending in 4: %d\n", sum);
    return 0;
}