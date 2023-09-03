#include <iostream>
#include<cstring>
class Person
{
    private:
    int age;
    protected:
    char name[128];
    public:
    Person(int age_p, const char *name_p)
    {
        age = age_p;
        std::strcpy(name, name_p);
    }
    void display(void)
    {
        std::cout << name<<"\n";
        std::cout << age;
    }
};
class Employe : public Person
{
    private:
    char company[128];
    public:
    Employe( int age_p,const char*name_p, const char*company_p) : Person(age_p, name_p)
    {
        std::strcpy(company, company_p);
    }
    void show_employee_name()
    {
        display();
        std::cout << "\n";
        std::cout << company;
    }
};

int main()
{
char name[128];
    int age;
    char company[128];
    std::cout << "First employee: " << std::endl;
    std::cout << "Name: ";
    std::cin.getline(name, 128);
    std::cout << "Age: ";
    std::cin >> age;
    std::cin.ignore();
    Person person(age, name);
    person.display();
    std::cout << "\n";

    std::cout << "Second employee: " << std::endl;
    std::cout << "Name: ";
    std::cin.getline(name, 128);
    std::cout << "Age: ";
    std::cin >> age;
    std::cin.ignore();
    std::cout << "Company: ";
    std::cin.getline(company, 128);
    Employe employee(age, name, company);
    employee.show_employee_name();

    return 0;
}