#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int shift, lesson;
    printf("����� ����� (1 ��� 2)?\n");
    scanf("%d", &shift);
    switch(shift){
        case 1:
        printf("����� ����� (1-6)?\n");
        scanf("%d", &lesson);
        switch(lesson){
            case 1:
            printf("1 ���� - 8:00\n");
            break;
            case 2:
            printf("2 ���� - 8:50\n");
            break;
            case 3:
            printf("3 ���� - 9:50\n");
            break;
            case 4:
            printf("4 ���� - 10:50\n");
            break;
            case 5:
            printf("5 ���� - 11:50\n");
            break;
            case 6:
            printf("6 ���� - 12:40\n");
            break;
            default:
            printf("Error\n");
        } 
        break;
        case 2:
        printf("����� ����� (1-6)?\n");
        scanf("%d", &lesson);
        switch(lesson){
            case 1:
            printf("1 ���� - 14:00\n");
            break;
            case 2:
            printf("2 ���� - 15:50\n");
            break;
            case 3:
            printf("3 ���� - 16:50\n");
            break;
            case 4:
            printf("4 ���� - 17:50\n");
            break;
            case 5:
            printf("5 ���� - 18:50\n");
            break;
            case 6:
            printf("6 ���� - 19:40\n");
            break;
            default:
            printf("Error\n");
        }
        break;
        default:
        printf("Error\n");
    }
    return 0;
}