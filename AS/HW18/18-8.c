// Создайте структуру для хранения координат точки в трехмерном пространстве (x, y, z). 
// Создайте массив из трех таких структур, 
// ввод данных запросите с клавиатуры. Выведите сумму координат x всех точек.


#include <stdio.h>

struct Point {
    int x;
    int y;
    int z;
};

int main() {
    struct Point p[3];
    int sum = 0;

    printf("Enter 3 coordinats:\n");

    for (int i = 0; i < 3; i++) {
        printf("point %d:\n", i + 1);
        printf("enter x: ");
        scanf("%d", &p[i].x);
        printf("enter y: ");
        scanf("%d", &p[i].y);
        printf("enter z: ");
        scanf("%d", &p[i].z);

        sum += p[i].x;
    }

    printf("sum of x: %d\n", sum);

    return 0;
}
