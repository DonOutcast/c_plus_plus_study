/* Опишите класс для хранения информации о студенте (поля fname, lname типа char[128], поле age типа int c доступом private).
Создайте конструктор класса, который инициирует объекты класса получаемыми значениями.
Создайте метод класса, который возвращает значение поля age объекта.
Создайте метод print для вывода информации об объекте на экран в формате: "Имя Фамилия возраст лет".
Создайте деструктор объектов класса.
Напишите программу, которая будет запрашивать с клавиатуры (в отдельных строках) по очереди имя,
фамилию, возраст двух студентов, полученными данными инициировать объекты класса.
Программа должна вызвать метод print  у объекта с наибольшим значением поля age (старшего студента).

Для присвоения полям имя и фамилия текстового значения используйте функцию копирования 
строки strcpy(строка_в_которую_копируем, строка_из_которой_копируем) из <cstring>.
Пример работы программы:
Входные данные:
Иван
Иванов
20
Петр
Петров
25
Выходные данные:
Петр Петров 25 лет
*/
#include <iostream>
#include <string>

class Student{
private:
    std::string fname;
    std::string lname;
    int age;
public:
    void enter_fname();
    void enter_lname();
    void ernter_age();
    void print_info();
    int get(){return age;};

};
int main(){
    Student info1,info2;
    std::cout <<"Enter info student one."<<std::endl;
    info1.enter_fname();
    info1.enter_lname();
    info1.ernter_age();
    std::cout <<"Enter info student two."<<std::endl;
    info2.enter_fname();
    info2.enter_lname();
    info2.ernter_age();
    if (info1.get() > info2.get()){
        info1.print_info();
    }else{
        info2.print_info();
    }
}
void Student::enter_fname(){
    std::cout << "Enter fname: ";
    std::cin >>fname;
}
void Student::enter_lname(){
    std::cout <<"Enter lname: ";
    std::cin >>lname;
}
void Student::ernter_age(){
    std::cout <<"Enter age: ";
    std::cin >>age;
}
void Student::print_info(){
    std::cout <<fname<<" "<<lname<<" "<<age<<" age"<<std::endl;
}



