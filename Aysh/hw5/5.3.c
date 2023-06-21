#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");

    int t=0;//тип транспорта
    float l=0;//расстояние
    wprintf(L"Выберите тип транспорта:\n1-Автомобиль\n2.Поезд\n3.Самолет\n");
    scanf("%d",&t);
    wprintf(L"Расстояние в км?\n");
    scanf("%f",&l);
    switch(t) {
    case 1 : printf("%f\n",l*100);break;
    case 2 : printf("%f\n",l*150);break;
    case 3 : printf("%f\n",l*200);break;
    default : printf("Error\n");
    }

    return 0;
}