#include <iostream>
#include <cstring>
class Student{
    private:
        char fname[128];
        char lname[128];
        int age;
    public:
        Student(char f[], char l[], int age){
            strcpy(fname, f);
            strcpy(lname, l);
            this -> age = age;
        }
        int get_age();
        void print_info();
        ~Student(){}

};
int main(){
    char lname_1[128], fname_1[128], lname_2[128], fname_2[128];
    int age_1, age_2;
    std::cout << "Student 1: " << std::endl;
    std::cout << "Name: ";
    std::cin.getline(lname_1, 128);
    std::cout << "Surname: ";
    std::cin.getline(fname_1, 128);
    std::cout << "Age: ";
    std::cin >> age_1;
    std::cin.ignore();
    std::cout << "Student 2: " << std::endl;
    std::cout << "Name: ";
    std::cin.getline(lname_2, 128);
    std::cout << "Surname: ";
    std::cin.getline(fname_2, 128);
    std::cout << "Age: ";
    std::cin >> age_2;

    Student student_1(fname_1, lname_1, age_1);
    Student student_2(fname_2, lname_2, age_2);

    if (student_1.get_age() > student_2.get_age()){
        student_1.print_info();
    } else {
        student_2.print_info();
    }
    return 0;
}
int Student::get_age(){
    return age;
}
void Student::print_info(){
    std::cout << lname << " " << fname << " " << age << " years" << std::endl;
}