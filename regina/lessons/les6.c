// #include <stdio.h>

// int main() {
    // int login = 0, password = 0;
    // printf("Enter your login\n");
    // scanf("%d", &login);
    // printf("Enter a password\n");
    // scanf("%d", &password);
    // if (login == 123 && password == 12345) {
    //     printf("right\n");
    // } else {
    //     printf("Wrong login or password\n");
    // }


//Задача: Напишите программу, которая запрашивает у пользователя натуральные числа, пока не будет введен ноль, после этого выводит сумму введенных чисел.
#include <stdio.h>

int main() {
    int number = 1, result;
    while (number != 0) {
        printf("Enter you numbers:\n");
        scanf("%d", &number);
        result = result + number; /*result += number - аналогичная запись, суммирование введенных ранее значений*/
    }
    printf("%d\n", result);
    return 0;
}