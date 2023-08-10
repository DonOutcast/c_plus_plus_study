// Создайте структуру для хранения координат точки в двумерном пространстве и цвета 
// точки (x, y, цвет), цвет задается одной латинской буквой. Создайте массив из пяти 
// таких структур, ввод данных запросите с клавиатуры. 
// Выведите количество точек красного цвета (r), координата x которых меньше 10.

#include <stdio.h>
struct point {
    int x;
    int y;
    char color;
};

int main() {
    struct point array[5];
    int red = 0;
    int i = 0;
    for (int i = 0; i < 5; i++) {
        printf("x: \n");
        scanf("%d", &array[i].x);
        printf("y: \n");
        scanf("%d", &array[i].y);
        printf("color: \n");
        scanf("%s", &array[i].color);
        if (array[i].color =='r' && array[i].x < 10) {
         red++;};
    }
         
    printf("number of red points %d\n", red);
    

    return 0;
}
