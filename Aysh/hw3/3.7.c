#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()

{
setlocale(LC_ALL, "Rus");
int a,b;//начальные координаты
int a1,b1;//конечные координаты
wprintf(L"Введите  координату a от 1 до 8:");
scanf("%d",&a);
wprintf(L"Введите  координату b от 1 до 8:");
scanf("%d",&b);
wprintf(L"Введите  координату a1 от 1 до 8:");
scanf("%d",&a1);
wprintf(L"Введите  координату b1 от 1 до 8:");
scanf("%d",&b1);

if((abs(a-a1)==1&&abs(b-b1)==2 )|| (abs(a-a1)==2&&abs(b-b1))==1)
{
    wprintf(L"Да\n");
}

else 
   wprintf(L"Нет\n");

   return 0;
} 