
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int namber;
    int circle =0;
    printf(" Сколько будет 2 + 2 ?\n");

    while(circle + 1)
    {
        scanf("%d", &namber);

        if(namber == 4)
        {
            printf(" Верно ");
            break;
        }
        else 
        {
            printf(" Ошибка\n ");
        }
    }
    
    return 0;
}