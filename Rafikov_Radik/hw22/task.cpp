/*ќпишите класс point с трем€ пол€ми private (x,y,z,) и четырьм€ методами public дл€ задани€ значений полей и получени€ значений каждого из полей.
Ќапишите программу, котора€ будет запрашивать ввод значений координат x,y,z (в отдельных строках),
присваивать введенные значени€ пол€м объекта класса point и выводить значени€ полей в  формате: 
x=значение y=значение z=значение*/
#include <iostream>
#include <string>
class Point{
private:
    int x;
    int y;
    int z;
public:
    void set();
    void get();
};
int main(){
    Point info;
    info.set();
    info.get();
    return 0;
}
void Point::set(){
    std::cout <<"Enter x: ";
    std::cin >> x;
    std::cout <<"Enter y: ";
    std::cin >> y;
    std::cout <<"Enter z: ";
    std::cin >> z;
}
void Point::get(){
    std::cout <<"x = "<< x <<" y = "<< y <<" z = "<< z <<std::endl;
}

