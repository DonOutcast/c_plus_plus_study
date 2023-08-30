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
    void showEmployename()
    {
        display();
        std::cout << "\n";
        std::cout << company;
    }
};

int main()
{
    Person person(20, "Kirill");
    person.display();
    std::cout << "\n\n";
    Employe employe(20,"Kirill", "Boing");
    employe.showEmployename();

    return 0;
}