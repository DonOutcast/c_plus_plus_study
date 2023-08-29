/* Напишите программу, которая запрашивает ввод координат x,y с клавиатуры (в отдельных строках),
создает объект класс и инициализирует его введенными данными.
Программа должна вывести результат работы метода, который рассчитывает расстояние с точностью до 2 знаков после запятой.
Во второй строке создайте второй объект класса, инициализируйте его конструктором по умолчанию и выведите  результат работы метода,
который рассчитывает расстояние с точностью до 2 знаков после запятой.

Пример работы программы:
Входные данные:
1
1

Выходные данные:
1.41
0.00 */
#include <iostream>
#include <math.h>
class Cordinate_points{
private:
    float x;
    float y;
public:
    void enter_x();
    void enter_y();
    void print_x();
    void distance(double new_x,double new_y);
};
int main(){
    Cordinate_points info;
    info.enter_x();
    info.enter_y();
    info.print_x();
    info.distance(1,1);
    return 0;
}
void Cordinate_points::distance(double new_x,double new_y){
    printf("%.2f \n",sqrt(x * new_x + y * new_y));
}
void Cordinate_points::print_x(){
    std::cout << x <<std::endl << y <<std::endl;
}
void Cordinate_points::enter_x(){
    std::cout <<"Enter x: ";
    std::cin >> x;  
}
void Cordinate_points::enter_y(){
    std::cout <<"Enter y: ";
    std::cin >> y;
}

