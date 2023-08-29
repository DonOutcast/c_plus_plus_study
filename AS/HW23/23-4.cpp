#include <iostream>
#include <cstring>

class Employee {
private:
    char fname[128];
    char lname[128];
    double salary;

public:
    Employee(const char* first, const char* last, double s) {
        strcpy(fname, first);
        strcpy(lname, last);
        salary = s;
    }

    double get_salary() {
        return salary;
    }

    ~Employee() {}
};

void average(double salary1, double salary2, double salary3) {
    double avg = (salary1 + salary2 + salary3) / 3;
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << "Average salary: " << avg << std::endl;
}

int main() {
    char first[128];
    char last[128];
    double salary;

    std::cout << "First name of the employee 1:" << std::endl;
    std::cin.getline(first, 128);
    std::cout << "Last name of the employee 1:" << std::endl;
    std::cin.getline(last, 128);
    std::cout << "Salary of the employee: 1" << std::endl;
    std::cin >> salary;
    std::cin.ignore();

    Employee emp1(first, last, salary);

    std::cout << "First name of the employee 2:" << std::endl;
    std::cin.getline(first, 128);
    std::cout << "Last name of the employee 2:" << std::endl;
    std::cin.getline(last, 128);
    std::cout << "Salary of the employee: 2" << std::endl;
    std::cin >> salary;
    std::cin.ignore();  

    Employee emp2(first, last, salary);

    std::cout << "First name of the employee 3:" << std::endl;
    std::cin.getline(first, 128);
    std::cout << "Last name of the employee 3:" << std::endl;
    std::cin.getline(last, 128);
    std::cout << "Salary of the employee: 3" << std::endl;
    std::cin >> salary;
    std::cin.ignore(); 

    Employee emp3(first, last, salary);

    average(emp1.get_salary(), emp2.get_salary(), emp3.get_salary());

    return 0;
}