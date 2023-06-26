// 9.  Напишите программу  которая запрашивает у пользователя два целых числа и если первое число делится на второе, то выводит на экран сообщение “<первое число> делится на <второе число>”.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RU");
    printf("Введите два числа");
    int number1 = 0, number2 = 0;
    scanf("%d, %d", &number1, &number2);
    if (number1 % number2 == 0) {
        printf("%d делится на %d", number1, number2);
    }
}
