#include <stdio.h>
#include <locale.h>
int main()
{
    int s,b=0;
    setlocale(LC_ALL, "Rus");
    wprintf(L"Введите стоимость заказа\n");
    scanf("%d",&s);
    
    if(s>=1000)
    {wprintf(L"Доставка бесплатно.\n");
    wprintf(L"Стоимость заказа:%d\n",s);}
    else {
        wprintf(L"1.Самовывоз.\n2.Доставка курьером.\n");
        scanf("%d",&b);
        if(b==1)
        {
        wprintf(L"Выбран самовывоз.\n");
        wprintf(L"Стоимость заказа:%d\n",s+100);
        }
        else {
        wprintf(L"Выбрана доставка курьером.\n");
        wprintf(L"Стоимость заказа:%d\n",s+300);
        }
        
    }
    return 0;
}