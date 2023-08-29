// Опишите класс для хранения информации о студенте (поля fname, lname типа char[128], поле age типа int c доступом private). Создайте конструктор класса, который инициирует объекты класса получаемыми значениями. Создайте метод класса, который возвращает значение поля age объекта. Создайте метод print для вывода информации об объекте на экран в формате: "Имя Фамилия возраст лет". Создайте деструктор объектов класса.
// Напишите программу, которая будет запрашивать с клавиатуры (в отдельных строках) по очереди имя, фамилию, возраст двух студентов, полученными данными инициировать объекты класса. Программа должна вызвать метод print  у объекта с наибольшим значением поля age (старшего студента).

// Для присвоения полям имя и фамилия текстового значения используйте функцию копирования строки strcpy(строка_в_которую_копируем, строка_из_которой_копируем) из <cstring>.
// Пример работы программы:
// Входные данные:
// Иван
// Иванов
// 20
// Петр
// Петров
// 25
// Выходные данные:
// Петр Петров 25 лет

#include <iostream>
#include <cstring>

class Student {
private:
    char fname[128];
    char lname[128];
    int age;

public:
    Student(const char* first, const char* last, int student_age) : age(student_age) {
        std::strcpy(fname, first);
        std::strcpy(lname, last);
    }

    int get_age() const {
        return age;
    }

    void print() const {
        std::cout << "Name: " << fname << " " << lname << ", Age: " << age << " years" << std::endl;
    }

    ~Student() {}
};

int main() {
    char fname1[128], lname1[128], fname2[128], lname2[128];
    int age1, age2;

    std::cout << "Enter student 1 details:" << std::endl;
    std::cout << "First Name: " << std::endl;
    std::cin.getline(fname1, 128);
    std::cout << "Last Name: " << std::endl;
    std::cin.getline(lname1, 128);
    std::cout << "Age: " << std::endl;
    std::cin >> age1;
    std::cin.ignore();
 
    std::cout << "Enter student 2 details:" << std::endl;
    std::cout << "First Name: " << std::endl;
    std::cin.getline(fname2, 128);
    std::cout << "Last Name: " << std::endl;
    std::cin.getline(lname2, 128);
    std::cout << "Age: " << std::endl;
    std::cin >> age2;
    std::cin.ignore();


    Student student1(fname1, lname1, age1);
    Student student2(fname2, lname2, age2);

    if (student1.get_age() > student2.get_age()) {
        student1.print();
    } else {
        student2.print();
    }

    return 0;
}
