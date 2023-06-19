#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int x, y, x1, y1;
    printf("Координаты первой клетки: ");
    scanf("%d %d", &x, &y);
    printf("Координаты второй клетки: ");
    scanf("%d %d", &x1, &y1);
    if (x == x1 || y == y1){
        printf("Да\n");
    }else{
        printf("Нет");
    }
    return 0;
}