//2. Напишите программу, которая запрашивает ввод n, затем выводит на экран в столбик все простые числа от 1 до n (включительно).

#include <stdio.h>
int main () {
    printf("Enter a number:\n");
    int n = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        printf("%d\n", i);
    }
    return 0;
}