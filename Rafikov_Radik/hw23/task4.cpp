/* Опишите класс для хранения информации о прямоугольнике (поля ширина и высота типа int c доступом private).
Создайте конструктор класса, который инициирует объекты класса получаемыми значениями.
Создайте метод класса, который возвращает значение площади прямоугольника. Создайте деструктор объектов класса.
Напишите программу, которая будет запрашивать ввод с клавиатуры (в отдельных строках) 
по очереди ширину и высоту двух прямоугольников, полученными данными инициировать объекты класса.
Программа должна вывести на экран значение площади большого прямоугольника.

Пример работы программы:
Входные данные:
Ширина:2
Высота:3
Ширина:1
Высота:4
Выходные данные:
6
*/
#include <iostream>
class Rectangle{
private:
    int width;
    int height;
public:
    Rectangle(int width,int height);
    ~Rectangle();
    void square(class Rectangle x,class Rectangle y);
};
int main(){
    int width,height;
    std::cout <<"Enter width: ";
    std::cin >>width;
    std::cout <<"Enter height: ";
    std::cin >>height;
    Rectangle info(width,height);
    std::cout <<"Enter width: ";
    std::cin >>width;
    std::cout <<"Enter height: ";
    std::cin >>height;
    Rectangle info1(width,height);

    info.square(info,info1);
    return 0;
}
void Rectangle::square(class Rectangle x,class Rectangle y){
    if (x.height * x.width > y.height * x.width){
        std::cout <<x.height * x.width;
    }else{
        std::cout <<y.height * y.width;
    } 
}

    

Rectangle::Rectangle(int width,int height){
    this->height = height;
    this->width = width;
}

Rectangle::~Rectangle(){
    this->height = 0;
    this->width = 0;
}
