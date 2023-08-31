/*Создайте класс Rectangle с полями width, height с доступом private.
Создайте конструктор с аргументами, который инициирует поля переданными значениями аргументов.
Создайте дружественную функцию  area, которая возвращает значение площади.
Напишите программу, которая запрашивает ввод с клавиатуры ширины и длины прямоугольника в отдельных строках,
создает объект класса Rectangle и инициализирует его введенными значениями.
Выведите на экран результат работы функции area.*/
#include <iostream>

class Rectangle{
private:
    int width;
    int hight;
protected:

public:
    Rectangle(int x,int y);
    ~Rectangle();
    friend void area(Rectangle &rectangle);
};
void area(Rectangle &rectangle){
    std::cout <<rectangle.hight * rectangle.width;
}
int main(){
    int x,y;
    std::cout <<"Enter width: ";
    std::cin >> x;
    std::cout <<"Enter hight: ";
    std::cin >> y;
    Rectangle info(x,y);
    area(info);
    return 0;
}
Rectangle::Rectangle(int x,int y){
    this->hight = x;
    this->width = y;
}

Rectangle::~Rectangle(){
    this->hight = 0;
    this->width = 0;
}

