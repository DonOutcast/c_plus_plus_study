#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    char answer, answer1;
    printf("������� ����� ���?\n");
    scanf("%c", &answer);
    if (answer == 'y'){
        printf("�������� ����� ���\n");
    } else {
        printf("������� ������-����?\n");
        scanf("%c", &answer1);
        scanf("%c", &answer1);
        if (answer1 == 'y'){
            printf("������� ������-����\n");
        } else {
            printf("�������� ����\n");
        }
    }
    return 0;
}