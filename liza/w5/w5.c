#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int month;
    scanf("%d", month);
    if (month == 1){
        printf("������\n");
    } else if (month == 2){
        printf("�������\n");
    } else if (month == 3){
        printf("����\n");
    } else if (month == 4){
        printf("������\n");
    } else if (month == 5){
        printf("���\n");
    } else if (month == 6){
        printf("����\n");
    } else if (month == 7){
        printf("����\n");
    } else if (month == 8){
        printf("������\n");
    } else if (month == 9){
        printf("��������\n");
    } else if (month == 10){
        printf("�������\n");
    } else if (month == 11){
        printf("������\n");
    } else if (month == 12){
        printf("�������\n");
    } else {
        printf("Error\n");
    }
    return 0;
}