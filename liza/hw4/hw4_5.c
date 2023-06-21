#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    float cost, cost1;
    scanf("%f", &cost);
    int answer;
    cost1 = 0;
    if (cost >= 1000){
        printf("Доставка бесплатно.\n");
        cost1 = cost;
    } else {
        printf("1. Самовывоз. 2. Доставка курьером\n");
        scanf ("%d", &answer);
        if (answer == 1){
            printf("Выбран самовывоз\n");
            cost1 = cost + 100;
        } else if (answer == 2){
            printf("Выбрана доставка курьером\n");
            cost1 = cost + 300;
        } else {
            printf("Error!\n");
        }
    }
    printf("Стоимость заказа с учётом доставки: %f\n", cost1);
    return 0;
}

