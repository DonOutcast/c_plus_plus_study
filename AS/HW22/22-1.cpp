// Опишите класс point с тремя полями private (x,y,z,) 
// и четырьмя методами public для задания значений полей и получения значений каждого
//  из полей. Напишите программу, которая будет запрашивать ввод значений координат x,y,z
//   (в отдельных строках), присваивать введенные значения полям объекта класса point и 
//   выводить значения полей в  формате: 
// x=значение y=значение z=значение

#include <iostream>

class Point {
private:
    int x, y, z;

public:
    void set_X(int value) {
        x = value;
    }

    void set_Y(int value) {
        y = value;
    }

    void set_Z(int value) {
        z = value;
    }

    int get_X() {
        return x;
    }

    int get_Y() {
        return y;
    }

    int get_Z() {
        return z;
    }
};


int main() {
    Point point;
    int x, y, z;

    std::cout << "Enter x: ";
    std::cin >> x;
    point.set_X(x);

    std::cout << "Enter y: ";
    std::cin >> y;
    point.set_Y(y);

    std::cout << "Enter z: ";
    std::cin >> z;
    point.set_Z(z);

    std::cout << "x=" << point.get_X() << " y=" << point.get_Y() << " z=" << point.get_Z() << std::endl;

    
    return 0;
}

