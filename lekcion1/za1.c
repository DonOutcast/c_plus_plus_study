#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    printf("-Когда я добрался до них, мы вступили в агресивные переговоры.\n");
    printf("-Агресивные переговоры это как?\n");
    printf("-Это переговоры на световых мячах.\n");

    return 0;
}