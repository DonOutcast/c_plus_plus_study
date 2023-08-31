// Создайте класс Person с конструктором, который получает в качестве параметров значения char [] и int и инициализирует ими поля name (protected) и age (private). Создайте метод класса display, который выводит на экран информацию в формате:  "Имя: name Возраст: age”.
// Создайте класс Employee, наследник класса Person. Создайте конструктор класса, который инициирует поле company(private) значением получаемого параметра. Создайте метод класса showEmployeeName, который будет выводить информацию о сотруднике в формате: "Имя: name Компания: company”.
// Напишите программу, которая запрашивает ввод с клавиатуры (в отдельных строках) имени и возраста сотрудника. Создает объект класса Person, инициализирует его введенными с клавиатуры значениями и вызывает метод display. 
// Далее в новых строках запрашивает ввод с клавиатуры имя, возраст, наименование компании. Создает объект класса Employee, инициализирует его введенными с клавиатуры значениями и вызывает метод  showEmployeeName.

// Пример работы программы:
// Входные данные:
// Иван
// 25

// Выходные данные:
// Имя: Иван Возраст: 25

// Входные данные:
// Петр
// 34
// SoftWare

// Выходные данные:
// Имя: Петр Компания: SoftWare


#include <iostream>
#include <cstring>

class Person {
protected:
    char name[128];
    int age;

public:
    Person(const char *name1, int age1) {
        strcpy(name, name1);
        age = age1;
    }

    void display() {
        std::cout << "Name: " << name << " Age: " << age << std::endl;
    }
};

class Employee : public Person {
private:
    char company[128];

public:
    Employee(const char *name1, int age1, const char *company1) : Person(name1, age1) {
        strcpy(company, company1);
    }

    void showEmployeeName() {
        std::cout << "Name: " << name << " Company: " << company << std::endl;
    }
};

int main() {
    char name[128];
    int age;
    char company[128];

    std::cout << "Enter the name and the age: " << std::endl;
    std::cin.getline(name, 128);
    std::cin >> age;
    std::cin.ignore();

    Person person(name, age);
    person.display();

    std::cout << "Enter the name, the age and  the company of the employee: " << std::endl;
    std::cin.getline(name, 128);
    std::cin >> age;
    std::cin.ignore();
    std::cin.getline(company, 128);

    Employee employee(name, age, company);
    employee.showEmployeeName();

    return 0;
}