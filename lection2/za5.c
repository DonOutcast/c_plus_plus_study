#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int namber;

    printf("������� �����\n");
    scanf("%d", &namber);

    if(namber > 0 && namber % 2 == 0)
    {
        printf("����� ��������"); 
    }else
    {
        printf("����� �� ��������");
    }

    return 0;
}