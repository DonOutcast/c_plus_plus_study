#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    char answer;
    printf("����� ���������?\n");
    scanf("%c", &answer);
    if (answer == 'y'){
        //("%c", &answer);
        //scanf("%c", &answer);
        printf("����� �������?\n");
        scanf("%c", &answer);
        scanf("%c", &answer);
        if(answer == 'y'){
            printf("����� ���������");
        }
        else{
            printf("������� ���������");
        }
    } else {
        printf("�� ��������!");
    }
    return 0;
}