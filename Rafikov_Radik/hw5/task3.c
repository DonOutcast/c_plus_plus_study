// �������� ���������, ������� ����� ������������ ��������� ���� � ����������� �� ���������� ���� ����������.
// ��������� ������ ����������� ��� ���������� (1- ����������, 2- �����, 3- �������) � ����������.
// ��������� 1 �� �� ���������� - 100 ���., �� ������ 150 ���., �� �������� 200 ���.
// ��������� ������ ������� ��������� ���� (������ �����).
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Russian");
    int transport = 0;
    int distance = 0;
    char x = 0;
    printf("�� ����� ����������? 1- ����������, 2- �����, 3- �������.\n");
    scanf("%d",&transport);
    printf("�� ����� ���������?\n");
    scanf("%d",&distance);
    switch (transport)
    {
    case 1:
        printf("%d",distance*100);
        break;
    case 2:
        printf("%d",distance*150);
        break;
    case 3:
        printf("%d",distance*200);
        break;
    
    default:
        printf("Error");
        break;
    }



    
    return 0;
}