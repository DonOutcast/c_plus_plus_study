/*10.  Напишите программу, которая запрашивает целое трехзначное число и определяет, является ли сумма его цифр двузначным числом.
Если является, то выводит на экран “Сумма цифр <сумма цифр>”.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RU");
    printf("Введите трехзначное число");
    int number1 = 0, number2 = 0, number3 =0;
    scanf("%d%d%d", &number1, &number2, &number3);
    int number = number1 + number2 + number3;
    if (number > 9) {
        printf("Сумма цифр %d", number);
    }
}

/*#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RU");
    printf("Введите трехзначное число");
    char number = 000;
    scanf("%s", &number);
    int number = number1 + number2 + number3;
    if (number > 9) {
        printf("Сумма цифр %d", number);
    }
}*/