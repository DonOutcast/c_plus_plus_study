#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Russian");
    int namber = 0;

    printf(" ������� �����\n");
    scanf("%d", &namber);

    if (namber < 0)
    {
        printf("����� ������������� ");
    }
    else if(namber == 0)
    {
        printf("����� 0 ");
    }else
    {
        printf("����� ������������� ");
    }

    return 0;
}