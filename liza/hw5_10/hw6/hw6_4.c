#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int number, i = 1;
    scanf("%d", &number);
    printf("Делители числа %d: \n", number);
    while (i <= number){
        if (number % i == 0){
            printf ("%d\n", i);
        }
        i ++;
    }
    return 0;
}
