#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int answer;
    printf("��� �������� ������� ����� C++?\n 1. ������ ������� 2. ����� ���������� 3. ������ �����\n");
    scanf ("%d", &answer);
    switch(answer){
        case 1:
        printf("������\n");
        break;
        case 2:
        printf("�����\n");
        break;
        case 3:
        printf("������");
        break;
        default:
        printf("Error\n");
    }
    return 0;
}