// Напишите программу, которая будет рассчитывать стоимость пути в зависимости от выбранного типа транспорта.
// Программа должна запрашивать тип транспорта (1- автомобиль, 2- поезд, 3- самолет) и расстояние.
// Стоимость 1 км на автомобиле - 100 руб., на поезде 150 руб., на самолете 200 руб.
// Программа должна вывести стоимость пути (только цифру).
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Russian");
    int transport = 0;
    int distance = 0;
    char x = 0;
    printf("На каком транспорте? 1- автомобиль, 2- поезд, 3- самолет.\n");
    scanf("%d",&transport);
    printf("На какое растояние?\n");
    scanf("%d",&distance);
    switch (transport)
    {
    case 1:
        printf("%d",distance*100);
        break;
    case 2:
        printf("%d",distance*150);
        break;
    case 3:
        printf("%d",distance*200);
        break;
    
    default:
        printf("Error");
        break;
    }



    
    return 0;
}