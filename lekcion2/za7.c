#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Russian");

    int namber1;
    int namber2;
    int namber3;

    printf("������� 1 ������� ������������\n");
    scanf("%d", &namber1);
    printf("������� 2 ������� ������������\n");
    scanf("%d", &namber2);
    printf("������� 3 ������� ������������\n");
    scanf("%d", &namber3);

    if(namber1 == namber2 && namber1 == namber3)
    {
        printf("������������ �� ����������");
    }
    else if((namber1 == namber2 && namber3 > namber1) || (namber2 == namber3 && namber1 > namber2 ) || (namber1 == namber3 && namber2 > namber1 ) )
    {
        printf("������������ �� ����������");
    }
    else
    {
        printf("����������� ��������");
    }

    return 0;
}
