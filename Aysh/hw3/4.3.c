#include <stdio.h>
#include <locale.h>

int main()
{   setlocale(LC_ALL, "Rus");
    char a;
    wprintf(L"Желаете блюдо дня?");
    scanf("%c",&a);
    if(a=='y')
    {
        wprintf(L"Заказано блюдо дня\n");
        }
    else {
        wprintf(L"Желаете бизнес ланч?");
        scanf("%c", &a);
        scanf("%c", &a);
        if(a=='y')
        { wprintf(L"Заказан бизнес ланч\n");}
        else {wprintf(L"Основное меню\n");}
    }

return 0;

}