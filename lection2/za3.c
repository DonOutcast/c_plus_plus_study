
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int namber;

    printf("Введите число ");

    scanf("%d", &namber) ;

    if (namber % 2 == 0 && namber !=0)
    {
        printf("Число четное ");
    }
    else if(namber != 0)
    {
        printf("Число нечетное ");
    }
    else
    {
        printf("число 0");
    }

    return 0;
}