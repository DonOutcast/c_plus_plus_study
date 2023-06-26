/*1.  Напиши программу, которая спрашивает “Уроки сделаны?”, если пользователь отвечает “y”- программа выводит на экран “Молодец!”. Во всех остальных случаях ничего не выводит.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RU");
    printf("Уроки сделаны?");
    char answer = 0;
    scanf("%s", &answer);
    if (answer == 'y') {
        printf("Молодец!");
        }
    return 0;
}
