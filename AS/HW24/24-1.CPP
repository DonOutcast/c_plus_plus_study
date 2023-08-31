// Создайте класс Rectangle с полями width, height с доступом private. Создайте конструктор с аргументами, который инициирует поля переданными значениями аргументов. Создайте дружественную функцию  area, которая возвращает значение площади.
// Напишите программу, которая запрашивает ввод с клавиатуры ширины и длины прямоугольника в отдельных строках, создает объект класса Rectangle и инициализирует его введенными значениями. Выведите на экран результат работы функции area.


#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    friend double area(const Rectangle &rect);
};

double area(const Rectangle& rect) {
    return rect.width * rect.height;
}

int main() {
    double width, height;
    
    std::cout << "Enter the width: ";
    std::cin >> width;
    
    std::cout << "Enter the height: ";
    std::cin >> height;
    
    Rectangle rect(width, height);
    
    std::cout << "Area of the rectangle: " << area(rect) << std::endl;
    
    return 0;
}
