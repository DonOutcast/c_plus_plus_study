#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int count, number = 0, Max_number, Min_number, i;
    printf("���������� �����: ");
    scanf("%d", &count);
    number = Max_number = Min_number;
    printf("�����: ");
    for (i = 1; i <= count; i ++){
        scanf("%d", &number);
        if (number > Max_number){
            Max_number = number;
        } else if (number < Min_number){
            Min_number = number;
        }
    }
    printf("������������ �����: %d\n", Max_number);
    printf("����������� �����: %d\n", Min_number);
    return 0;
}
