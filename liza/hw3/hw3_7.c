#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int x, y, x1, y1;
    printf("���������� ������ ������: ");
    scanf("%d %d", &x, &y);
    printf("���������� ������ ������: ");
    scanf("%d %d", &x1, &y1);
    if(abs(x1 - x) == 1 && abs(y1 - y) == 2){
        printf("��\n");
    }else if(abs(x1 - x) == 2 && abs(y1 - y) == 1){
        printf("��\n");
    }else{
        printf("���\n");
    }
    return 0;
}