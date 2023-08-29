// Опишите класс для хранения информации о прямоугольнике (поля ширина и высота типа int c доступом private). Создайте конструктор класса, который инициирует объекты класса получаемыми значениями. Создайте метод класса, который возвращает значение площади прямоугольника. Создайте деструктор объектов класса.
// Напишите программу, которая будет запрашивать ввод с клавиатуры (в отдельных строках) по очереди ширину и высоту двух прямоугольников, полученными данными инициировать объекты класса. Программа должна вывести на экран значение площади большого прямоугольника.

// Пример работы программы:
// Входные данные:
// Ширина:2
// Высота:3
// Ширина:1
// Высота:4
// Выходные данные:
// 6

#include <iostream>

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int area() {
        return width * height;
    }

    ~Rectangle() {}
};

int main() {
    int width1, height1, width2, height2;

    std::cout << "Width 1: ";
    std::cin >> width1;
    std::cout << "Height 1: ";
    std::cin >> height1;

    std::cout << "Width 2: ";
    std::cin >> width1;
    std::cout << "Height 2: ";
    std::cin >> height1;

    Rectangle rectangle1(width1, height1);
    Rectangle rectangle2(width2, height2);

    int area1 = rectangle1.area();
    int area2 = rectangle2.area();

    if (area1 > area2) {
        std::cout << "Biggest area: " << area1 << std::endl;
    } else {
        std::cout << "Biggest area: " << area2 << std::endl;
    }

    return 0;
}