// 2. Создайте структуру "Прямоугольник", содержащую поля для ширины и высоты. 
// Напишите функцию "площадь", которая принимает структуру "Прямоугольник" в 
// качестве параметра и возвращает площадь прямоугольника.


#include <stdio.h>


struct Rectangle {
    float width;
    float height;
};


float Area(struct Rectangle rectangle) {
    return rectangle.width * rectangle.height;
}

int main() {
    
    struct Rectangle rectangle;

    printf("rectangle width: ");
    scanf("%f", &rectangle.width);
    printf("rectangle height: ");
    scanf("%f", &rectangle.height);

    float area = Area(rectangle);
    printf("Rectangle area: %.2f\n", area);

    return 0;
}
