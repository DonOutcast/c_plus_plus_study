#include <locale.h>
#include <stdio.h>
#include <conio.h>


void main()
{
setlocale(LC_ALL, "Rus");
wprintf(L"-Когда я добрался до них, мы вступили в агрессивные переговоры\n"
        "-Агрессивные переговоры? Это как?\n"
        "-Это переговоры на световых мечах.\n");
}