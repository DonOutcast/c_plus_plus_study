#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int type, distance, cost;
    printf("Расстояние: ");
    scanf("%d", &distance);
    printf("1- автомобиль, 2- поезд, 3- самолет\n");
    scanf("%d", &type);
    switch(type){
        case 1:
        cost = distance * 100;
        printf("Стоимость пути: %d\n", cost);
        break;
        case 2:
        cost = distance *150;
        printf("Стоимость пути: %d\n", cost);
        break;
        case 3:
        cost = distance *200;
        printf("Стоимость пути: %d\n", cost);
        break;
        default:
        printf("Error\n");
    }
    return 0;
}


