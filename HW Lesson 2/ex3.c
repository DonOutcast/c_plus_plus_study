/* Напиши программу, которая запрашивает у пользователя число, если оно чётное, выводит сообщение “Число <введенное число>- чётное.”*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RU");
    printf("Введите число");
    int number = 0;
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("Число %d - четное", number);
    } else {
        printf("Число %d - нечетное", number);
    }
}

