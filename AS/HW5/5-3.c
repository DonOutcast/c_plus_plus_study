//Напишите программу, которая будет рассчитывать стоимость пути в зависимости 
//от выбранного типа транспорта. Программа должна запрашивать тип транспорта 
//(1- автомобиль, 2- поезд, 3- самолет) и расстояние.  Стоимость 1 км на 
//автомобиле - 100 руб., на поезде 150 руб., 
//на самолете 200 руб. Программа должна вывести стоимость пути (только цифру).


#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Rus");
    int a; // тип транспорта
    int b; // расстояние км
    
   
    wprintf (L"веберите тип транспорта\n 1- автомобиль\n 2- поезд\n 3- самолет\n");
    scanf ("%d", &a);
    wprintf (L"введите расстояние в км\n");
    scanf ("%d", &b);
    switch (a)
    {
        case 1: printf ("%d\n", (b*100));break;
        case 2: printf ("%d\n", (b*150));break;
        case 3: printf ("%d\n", (b*200));break;
     
     default:  { printf ("error \n");}
   
return 0;
}
}