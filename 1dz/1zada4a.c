#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    wprintf(L"-Когда я добрался до них,мы вступили в агрессивные переговоры.\n");
    wprintf(L"-Агрессивные переговоры? Это как?\n");
    wprintf(L"-Это переговоры на световых мечах.\n");
    return 0;
}