/* Опишите класс  Figure с целочисленными полями width, height с доступом private,
метод  setData, который присваивает полям значения, метод print, который выводит площадь прямоугольника в формате: “Площадь:значение”.
Напишите программу, которая будет запрашивать ввод значений длины и ширины прямоугольника с клавиатуры (в отдельных строках),
заполнять поля класса и выводить с помощью метода print информацию о площади фигуры. */
#include <iostream>
class Figure{
private:
    int width;
    int height;
public:
    void setData();
    void print();
};
int main(){
    Figure info;
    info.setData();
    info.print();
    return 0;
}

void Figure::setData(){
    std::cout <<"Enter width: ";
    std::cin >> width;
    std::cout <<"Enter height: ";
    std::cin >> height;
}

void Figure::print(){
    std::cout <<"Square: "<<width * height<<std::endl;
}
