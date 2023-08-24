// Опишите класс  Figure с целочисленными полями width, height с доступом private, 
// метод  setData, который присваивает полям значения, метод print, который выводит 
// площадь прямоугольника в формате: “Площадь:значение”.
// Напишите программу, которая будет запрашивать ввод значений длины и ширины
//  прямоугольника с клавиатуры (в отдельных строках), 
// заполнять поля класса и выводить с помощью метода print информацию о площади фигуры.

#include <iostream>

class Figure {
private:
    int width, height;

public:
    void setData(int w, int h) {
        width = w;
        height = h;
    }

    void print() {
        int area = width * height;
        std::cout << "Area: " << area << std::endl;
    }
};



int main() {
    
    Figure figure;
    int width, height;

    std::cout << "Enter width: ";
    std::cin >> width;

    std::cout << "Enter height: ";
    std::cin >> height;

    figure.setData(width, height);
    figure.print();

    return 0;
}