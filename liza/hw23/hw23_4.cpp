#include <iostream>
#include <cstring>
class Employee{
    private:
        char fname[128];
        char lname[128];
        double salary;
    public:
        Employee(char f[], char l[], double s){
            strcpy(fname, f);
            strcpy(lname, l);
            this -> salary = s;
        }
        double get_salary();
        ~Employee(){;}
};
void average(double salary_1, double salary_2, double salary_3){
    double result = (salary_1 + salary_2 + salary_3) / 3;
    printf("Average: %.2f\n", result);
}

int main(){
    char fname_1[128], lname_1[128];
    double salary_1;
    std::cout << "Employee 1: " << std::endl;
    std::cout << "Surname, name, salary: ";
    std::cin >> fname_1 >> lname_1 >> salary_1;
    Employee employee_1(fname_1, lname_1, salary_1);

    char fname_2[128], lname_2[128];
    double salary_2;
    std::cout << "Employee 2: " << std::endl;
    std::cout << "Surname, name, salary: ";
    std::cin >> fname_2 >> lname_2 >> salary_2;
    Employee employee_2(fname_2, lname_2, salary_2);

    char fname_3[128], lname_3[128];
    double salary_3;
    std::cout << "Employee 3: " << std::endl;
    std::cout << "Surname, name, salary: ";
    std::cin >> fname_3 >> lname_3 >> salary_3;
    Employee employee_3(fname_3, lname_3, salary_3);
    average(employee_1.get_salary(), employee_2.get_salary(), employee_3.get_salary());
    return 0;
}

double Employee::get_salary(){
    return salary;
}


