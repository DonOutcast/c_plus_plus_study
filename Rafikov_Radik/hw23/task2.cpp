/* Опишите класс для хранения даты (день и год - целочисленные поля, месяц поле типа char[128], все поля private).
В классе создайте два конструктора: конструктор, который принимает входные параметры и присваивает их значения полям,
и конструктор по умолчанию (присваивает значение 01 январь 2000).
Также в классе создайте метод для вывода полей на экран в формате: день месяц год. Создайте деструктор объектов класса.
Напишите программу, которая запрашивает ввод с клавиатуры день, месяц, год (в отдельных строках) и если год больше 2000,
то вызывает конструктор с параметрами, а если нет- то вызывает конструктор по умолчанию.

Для присвоения месяцу текстового значения используйте функцию копирования строки 
strcpy(строка_в_которую_копируем, строка_из_которой_копируем) из <cstring>

Пример работы программы:
Входные данные:
20
март
2023

Выходные данные:j
20 март 2023

Входные данные:
10
январь     
1995

Выходные данные:
1 январь 2000
*/
#include <iostream>
#include <string>
class Data{
private:
    int day;
    int age;
    std::string month;
public:
    Data(int day,std::string month,int age);
    Data(){day = 01;month = "January";age = 2000;};
    void enter_info();
    ~Data();
};
int main(){
    Data info;
    int day,age;
    std::string month;
    std::cout <<"Enter day: ";
    std::cin >>day;
    std::cout <<"Enter month: ";
    std::cin >>month;
    std::cout <<"Enter age: ";
    std::cin >>age;
    if (age > 2000){
        info.enter_info();
    }else{
        Data info(day,month,age);
        info.enter_info();
    }
    
    return 0;
}
Data::Data(int day,std::string month,int age){
    this->day = day;
    this->month = month;
    this->age = age;
}

Data::~Data(){
    this->day = 0;
    this->month = "";
    this->age = 0;
}
void Data::enter_info(){
    std::cout <<day<<" "<<month<<" "<<age<<std::endl;
}

