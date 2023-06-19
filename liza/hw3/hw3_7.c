#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int x, y, x1, y1;
    printf("Координаты первой клетки: ");
    scanf("%d %d", &x, &y);
    printf("Координаты второй клетки: ");
    scanf("%d %d", &x1, &y1);
    if(abs(x1 - x) == 1 && abs(y1 - y) == 2){
        printf("Да\n");
    }else if(abs(x1 - x) == 2 && abs(y1 - y) == 1){
        printf("Да\n");
    }else{
        printf("Нет\n");
    }
    return 0;
}