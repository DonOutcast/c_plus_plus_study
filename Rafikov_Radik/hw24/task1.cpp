/*Создайте класс Person с конструктором, который получает в качестве параметров значения char [] и int и 
инициализирует ими поля name (protected) и age (private).
Создайте метод класса display, который выводит на экран информацию в формате:  "Имя: name Возраст: age”.
Создайте класс Employee, наследник класса Person.
Создайте конструктор класса, который инициирует поле company(private) значением получаемого параметра.
Создайте метод класса showEmployeeName, который будет выводить информацию о сотруднике в формате: "Имя: name Компания: company”.
Напишите программу, которая запрашивает ввод с клавиатуры (в отдельных строках) имени и возраста сотрудника.
Создает объект класса Person, инициализирует его введенными с клавиатуры значениями и вызывает метод display. 
Далее в новых строках запрашивает ввод с клавиатуры имя, возраст, наименование компании.
Создает объект класса Employee, инициализирует его введенными с клавиатуры значениями и вызывает метод  showEmployeeName.

Пример работы программы:
Входные данные:
Иван
25

Выходные данные:
Имя: Иван Возраст: 25

Входные данные:
Петр
34
SoftWare

Выходные данные:
Имя: Петр Компания: SoftWare */
#include <iostream>
#include <string>

class Person{
private:
    int age;
protected:
    std::string name;
public:
    void display();
    Person(int age,std::string name);
    ~Person();
};
class Employee : Person{
private:
    std::string company;
public:
    Employee(int age,std::string name,std::string company):Person(age,name){
       this->company = company;
    };
    ~Employee();
    void showEmployeeName();
};

int main(){
    int age;
    std::string name;
    std::string company;
    std::cout <<"Enter Age: ";
    std::cin >>age;
    std::cout <<"Enter name: ";
    std::cin >>name;
    Person info(age,name);
    info.display();
    std::cout <<std::endl;
    std::cout <<"Enter Age: ";
    std::cin >>age;
    std::cout <<"Enter name: ";
    std::cin >>name;
    std::cout <<"Enter company: ";
    std::cin >>company;
    Employee info1(age,name,company);
    info1.showEmployeeName();
    return 0;
}


void Employee::showEmployeeName(){
    display();
    std::cout <<" Company: "<<company<<std::endl;
}
void Person::display(){
    std::cout <<"Name: "<<name<<" Age: "<<age;
}
Person::Person(int age,std::string name){
    this->age = age;
    this->name = name;
}

Person::~Person(){
    this->age = 0;
    this->name = "";
}

Employee::~Employee(){
    this->company = "";
}

