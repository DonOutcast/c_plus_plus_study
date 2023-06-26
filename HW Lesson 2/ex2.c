/*2. Напиши программу, которая запрашивает у пользователя число, если оно отрицательное, выводит сообщение “Число <введенное число>- отрицательное.”*/


#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RU");
    printf("Укажите число");
    int number = 0;
    scanf("%d", &number);
    if (number < 0) {
        printf("Число %d -отрицательное", number);
    }
}

