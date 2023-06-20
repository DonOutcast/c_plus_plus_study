#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    char answer;
    printf("Нужен компьютер?\n");
    scanf("%c", &answer);
    if (answer == 'y'){
        //("%c", &answer);
        //scanf("%c", &answer);
        printf("Нужен ноутбук?\n");
        scanf("%c", &answer);
        scanf("%c", &answer);
        if(answer == 'y'){
            printf("Прайс ноутбуков");
        }
        else{
            printf("Каталог десктопов");
        }
    } else {
        printf("До свидания!");
    }
    return 0;
}