#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int number, sum = 0, even_sum = 0;
    while (even_sum <= 50){
        scanf("%d", &number);
        sum += number;
        if (number % 2 == 0){
            even_sum += number;
        }
    }
    printf("Сумма всех введённых чисел: %d\n", sum);
    printf("Сумма введённых чётных чисел: %d\n", even_sum);
    return 0;
}

