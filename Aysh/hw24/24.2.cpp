#include <iostream>
#include <cstring>

class Person {
    private:
        int age;
    protected:
        char name[128];
    public:
        Person(int age_new,char name_new[]) {
            this->age = age_new;
            strcpy(name,name_new);
        }
        ~Person() {;}
        void display();
};
class Employee:public Person {
    private:
        char company[128];
    public:
        Employee(int age_new,char name_new[],char company_new[]):Person(age_new,name_new) {
            strcpy(company,company_new);
    }
       ~Employee() {;}
       void showEmployeeName();

};

int main() {
    int age_1;
    char name_1[128];
    char company_1[128];
    std::cout << "Enter name and age of the employee:" << std::endl;
    std::cin >> name_1;
    std::cin >> age_1;
    Person person(age_1,name_1);
    person.display();
    std::cout << "Enter name,age and companyname of the employee:" << std::endl;
    std::cin >> name_1;
    std::cin >> age_1;
    std::cin >> company_1;
    Employee employee(age_1,name_1,company_1);
    employee.showEmployeeName();
    return 0;
}
void Person::display() {
    std::cout << "Name: " << name << " " <<"Age: " << age << std::endl;
}
void Employee::showEmployeeName() {
    std::cout << "Name: " << name << " " <<"Company: " << company << std::endl;
}