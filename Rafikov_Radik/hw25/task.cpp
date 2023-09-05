/* Напишите программу стоматолог и пациент. Если в речи пациента будут признаки на боль то делаем немедленное лечение иначе отпускаем домой.
 Реализовать нужно в парадигме ООП . Должен быть общий класс people*/
#include <iostream>
#include <string>
#include <sstream>
class People{
private:
    int age;
    std::string name;
    std::string surname;
    std::string comment;
public:
    People(std::string name,std::string surname,int age);
    ~People();
    std::string get_name(){return name;};
    std::string get_surname(){return surname;};
    void set_commet (std::string comment){this->comment = comment;};
    friend void conclusion(People &people);
};
void conclusion(People &people){
    std::string comment = people.comment;
    int pos = comment.find("hurts");
    int pos1 = comment.find("dropped");
    int pos2 = comment.find("bleeding");
    if (pos > -1 || pos1 > -1 || pos2 > -1){
        std::cout <<people.get_name()<<" come to the reception."<<std::endl;
    }else{
        std::cout<<people.get_surname()<<" "<<people.get_name()<<" goodbye."<<std::endl;
    }
}
int main(){
    std::string name;
    std::string surname;
    std::string comment;
    int age;
    std::cout <<"Enter name: ";
    std::cin >>name;
    std::cout << "Enter surname: ";
    std::cin >>surname;
    std::cout <<"Enter age: ";
    std::cin >>age;
    People Patient(name,surname,age);
    std::cout <<"Hello "<< Patient.get_surname()<<" "<<Patient.get_name()<<"."<<std::endl;
    std::cout <<"What are you complaining about?"<<std::endl;
    std::getline(std::cin,comment);
    std::cout <<comment;
    Patient.set_commet(comment);
    conclusion(Patient);
    return 0;
}

People::People(std::string name,std::string surname,int age){
    this->name = name;
    this->surname = surname;
    this->age = age;
}

People::~People(){
    this->age = 0;
    this->name = "";
    this->surname = "";
    this->comment = "";
}


