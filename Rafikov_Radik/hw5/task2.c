// ������ ���������, ������� ������ ���������� � ������ �����.
// ��������� ������ ���������� ������������ ������ ����� (1 ��� 2)?�,
// ����� ���� ��� ������������ ������ �����, ��������� ������ ��������� ������ ����� (1-6)?�.
// ����������� ������ ��������� ����� ����� ������ ���������� ����� � ��������� �����. 
// 1 �����:
// 1 ���� - 8:00
// 2 ���� - 8:50
// 3 ���� - 9:50
// 4 ���� - 10:50
// 5 ���� - 11:50
// 6 ���� - 12:40
// 2 �����:
// 1 ���� - 14:00
// 2 ���� - 15:50
// 3 ���� - 16:50
// 4 ���� - 17:50
// 5 ���� - 18:50
// 6 ���� - 19:40
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Russian");
    int answer = 0;
    printf("����� ����� (1 ��� 2)?\n");
    scanf("%d",&answer);
    if (answer == 1)
    {
        printf("����� ����� (1-6)?\n");
        int answer2 = 0;
        scanf("%d",&answer2);
        switch (answer2)
        {
        case 1:
            printf("8:00");
            break;
        case 2:
            printf("8:50");
            break;
        case 3:
            printf("9:50");
            break;
        case 4:
            printf("10:50");
            break;
        case 5:
            printf("11:50");
            break;
        case 6:
            printf("12:40");
            break;
        
        default:
            printf("Error");
            break;
        }
    }
    else if (answer == 2)
    {
        printf("����� ����� (1-6)?\n");
        int answer2 = 0;
        scanf("%d",&answer2);
        switch (answer2)
        {
        case 1:
            printf("14:00");
            break;
        case 2:
            printf("15:50");
            break;
        case 3:
            printf("16:50");
            break;
        case 4:
            printf("17:50");
            break;
        case 5:
            printf("18:50");
            break;
        case 6:
            printf("19:40");
            break;
        
        default:
            printf("Error");
            break;
        }
    }
    else
    {
        printf("Error");
    }
    
    
    return 0;
}