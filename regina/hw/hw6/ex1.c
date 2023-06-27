// Напишите программу, которая запрашивает ввод целого числа n и n-раз выводит слово “programming” в строку.

#include <stdio.h>

int main() {
    int a = 1, b;
    printf("Enter a number:\n");
    scanf("%d", &a);
    for(int b = 0;  b < a; b++) {
        printf("programming\n");
    }
return 0;
}