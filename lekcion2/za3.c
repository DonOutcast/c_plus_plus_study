
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int namber;

    printf("������� ����� ");

    scanf("%d", &namber) ;

    if (namber % 2 == 0 && namber !=0)
    {
        printf("����� ������ ");
    }
    else if(namber != 0)
    {
        printf("����� �������� ");
    }
    else
    {
        printf("����� 0");
    }

    return 0;
}