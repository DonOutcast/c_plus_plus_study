#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Russian");
    int namber = 0;

    printf(" Введите число\n");
    scanf("%d", &namber);

    if (namber < 0)
    {
        printf("Число отрицательное ");
    }
    else if(namber == 0)
    {
        printf("Число 0 ");
    }else
    {
        printf("Число положительное ");
    }

    return 0;
}