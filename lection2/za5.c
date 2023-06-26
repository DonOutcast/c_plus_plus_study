#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int namber;

    printf("Введите число\n");
    scanf("%d", &namber);

    if(namber > 0 && namber % 2 == 0)
    {
        printf("Число подходит"); 
    }else
    {
        printf("Число не подходит");
    }

    return 0;
}