// Создайте структуру "Прямоугольник", содержащую поля для ширины и высоты. Напишите функцию "площадь",
// которая принимает структуру "Прямоугольник" в качестве параметра и возвращает площадь прямоугольника.
#include <stdio.h>
struct Rectangle{
    int width;
    int height;
};
struct Rectangle EnterNamber(struct Rectangle info){
    printf("Enter width: ");
    scanf("%d",&info.width);
    printf("Enter height: ");
    scanf("%d",&info.height);
    return info;
}
int rectangle_area(struct Rectangle info){
    int result = info.height * info.width;
    return result;
}

int main(){
    struct Rectangle info;
    struct Rectangle new = EnterNamber(info);
    printf("The area of the rectangle is equal to: %d",rectangle_area(new));
    return 0;
}