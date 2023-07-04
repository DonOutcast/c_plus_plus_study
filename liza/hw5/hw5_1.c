#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int answer;
    printf("Кто является автором языка C++?\n 1. Джеймс Гослинг 2. Бьёрн Страуструп 3. Деннис Ритчи\n");
    scanf ("%d", &answer);
    switch(answer){
        case 1:
        printf("Ошибка\n");
        break;
        case 2:
        printf("Верно\n");
        break;
        case 3:
        printf("Ошибка");
        break;
        default:
        printf("Error\n");
    }
    return 0;
}