#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()

{
setlocale(LC_ALL, "Rus");
int a,b;//начальные координаты
int a1,b1;//конечные координаты
wprintf(L"Введите a от 1 до 8:");
scanf("%d",&a);
wprintf(L"Введите b от 1 до 8:");
scanf("%d",&b);
wprintf(L"Введите a1 от 1 до 8:");
scanf("%d",&a1);
wprintf(L"Введите b1 от 1 до 8:");
scanf("%d",&b1);


if((a+b)%2==(a1+b1)%2)
{
    wprintf(L"Да\n");
}

else 
   wprintf(L"Нет\n");
   
   return 0;
} 