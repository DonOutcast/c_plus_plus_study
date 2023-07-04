#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int number_1, number_2, remainder;
    scanf("%d %d", &number_1, &number_2);
    while (number_2 != 0) {
        remainder = number_1 % number_2;
        number_1 = number_2;
        number_2 = remainder;
    }
    printf("Наибольший общий делитель: %d", number_1);
    return 0;
}