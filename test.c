#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    printf(" - Когда я добрался до них,мы вступили в агрессиные переговоры.\n");
    printf(" - Агрессиные переговоры?Это как?\n");
    printf(" - Это переговоры на световых мечах.\n");

    return 0;
}