// Напишите программу, которая будет рассчитывать стоимость пути в зависимости от выбранного типа транспорта. Программа должна запрашивать тип транспорта (1- автомобиль, 2- поезд, 3- самолет) и расстояние.  Стоимость 1 км на автомобиле - 100 руб., на поезде 150 руб., на самолете 200 руб. Программа должна вывести стоимость пути (только цифру).

#include <stdio.h>

int main() {
    int km = 0, transport = 1, cost;
    int car = 100, train = 150, airplane =200;
    printf("How many km you need do go?\n");
    scanf ("%d", &km);
    printf("Choose a transport to calculate the cost? \n 1 - car \n 2 - train \n 3 - airplane \n");
    scanf("%d", &transport);
    switch (transport) {
        case 1: cost = car * km; printf("%d", cost);break;
        case 2: cost = train * km; printf("%d", cost);break;
        case 3: cost = airplane * km; printf("%d", cost);break;
        default: printf("Error");
    }
    return 0;
}