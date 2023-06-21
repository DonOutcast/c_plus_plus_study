#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    char answer, answer1;
    printf("Желаете блюдо дня?\n");
    scanf("%c", &answer);
    if (answer == 'y'){
        printf("Заказано блюдо дня\n");
    } else {
        printf("Желаете бизнес-ланч?\n");
        scanf("%c", &answer1);
        scanf("%c", &answer1);
        if (answer1 == 'y'){
            printf("Заказан бизнес-ланч\n");
        } else {
            printf("Основное меню\n");
        }
    }
    return 0;
}