#include <iostream>
#include <cstring>
class Person{
    private:
        int age;
    protected:
        char name[128];
    public:
        Person(char n[], int age){
            std::strcpy(name, n);
            this -> age = age;
        }
        ~Person(){;}
        void display();

};

class Employee: public Person{
    private:
        char company[128];
    public:
        Employee(char n[], int age, char com[]) : Person(n, age){
            std::strcpy(company, com);
        }
        ~Employee(){;}
        void show_employee_name();
};
int main(){
    char name[128];
    int age;
    char company[128];
    std::cout << "First employee: " << std::endl;
    std::cout << "Name: ";
    std::cin.getline(name, 128);
    std::cout << "Age: ";
    std::cin >> age;
    std::cin.ignore();
    Person person(name, age);
    person.display();

    std::cout << "Second employee: " << std::endl;
    std::cout << "Name: ";
    std::cin.getline(name, 128);
    std::cout << "Age: ";
    std::cin >> age;
    std::cin.ignore();
    std::cout << "Company: ";
    std::cin.getline(company, 128);
    Employee employee(name, age, company);
    employee.show_employee_name();

    return 0;
}
void Person::display(){
    std::cout << "Name: " << name << "  Age: " << age << std::endl;
}
void Employee::show_employee_name(){
    std::cout << "Name: " << name << "  Company: " << company << std::endl;
}