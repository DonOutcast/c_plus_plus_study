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
    if (x == x1 || y == y1){
        printf("��\n");
    }else if(abs(x1-x) == abs(y1-y)){
        printf("��\n");
    }else{
        printf("���\n");
    }
    return 0;
}