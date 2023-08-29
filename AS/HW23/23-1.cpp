// Напишите программу на c++, которая запрашивает ввод координат x,y с клавиатуры (в отдельных строках), создает объект класс и инициализирует его введенными данными. Программа должна вывести результат работы метода, который рассчитывает расстояние с точностью до 2 знаков после запятой.
// Во второй строке создайте второй объект класса, инициализируйте его конструктором по умолчанию и выведите  результат работы метода, который рассчитывает расстояние с точностью до 2 знаков после запятой.

// Пример работы программы:
// Входные данные:
// 1
// 1

// Выходные данные:
// 1.41
// 0.00

#include <iostream>
#include <cmath>

class Point {
private:
    double x;
    double y;

public:
    Point() : x(0), y(0) {}
    Point (double x, double y) {this-> x=x; this-> y=y;};

    double distance(){
        return std::sqrt(x * x + y * y);
    }
};

int main() {
    double x, y;

    std::cout << "Enter the x coordinate: ";
    std::cin >> x;
    std::cout << "Enter the y coordinate: ";
    std::cin >> y;

    Point p1(x, y);
    std::cout.precision(2);
    std::cout << "Distance from origin: " << std::fixed << p1.distance() << std::endl;

    Point p2;
    std::cout << "Distance from origin (start): " << std::fixed << p2.distance() << std::endl;
    
    return 0;
}