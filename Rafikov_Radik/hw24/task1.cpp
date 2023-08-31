/*�������� ����� Person � �������������, ������� �������� � �������� ���������� �������� char [] � int � 
�������������� ��� ���� name (protected) � age (private).
�������� ����� ������ display, ������� ������� �� ����� ���������� � �������:  "���: name �������: age�.
�������� ����� Employee, ��������� ������ Person.
�������� ����������� ������, ������� ���������� ���� company(private) ��������� ����������� ���������.
�������� ����� ������ showEmployeeName, ������� ����� �������� ���������� � ���������� � �������: "���: name ��������: company�.
�������� ���������, ������� ����������� ���� � ���������� (� ��������� �������) ����� � �������� ����������.
������� ������ ������ Person, �������������� ��� ���������� � ���������� ���������� � �������� ����� display. 
����� � ����� ������� ����������� ���� � ���������� ���, �������, ������������ ��������.
������� ������ ������ Employee, �������������� ��� ���������� � ���������� ���������� � �������� �����  showEmployeeName.

������ ������ ���������:
������� ������:
����
25

�������� ������:
���: ���� �������: 25

������� ������:
����
34
SoftWare

�������� ������:
���: ���� ��������: SoftWare */
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

