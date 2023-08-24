#include <iostream>
#include <string>
class Car{
    public:
        std::string color;
        std::string brand;
        int number;
        Car(std::string color, std::string brand, int number);
        ~Car();
    
};
int main(){
    
    int number;
    std::cin >> number;
    Car avto("r", "Reno", number);
    std::cout << avto.color << " " << avto.brand << " " << avto.number << std::endl;
    return 0;
}
Car::Car(std::string color, std::string brand, int number){
    this->color = color;
    this->brand = brand;
    this->number = number;
}
Car::~Car(){
    this->color = {};
    this->brand = {};
    this->number = 0;
}
