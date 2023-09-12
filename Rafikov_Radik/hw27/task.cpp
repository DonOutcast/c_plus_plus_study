#include <iostream>
class Eraction{
private:
    int numerator; 
    int denominator;
public:
    Eraction(int x,int y);
    ~Eraction();
    void print(){std::cout<<numerator<<"/"<<denominator<<std::endl;};
    bool operator == (Eraction info2){
        return this->numerator == info2.numerator && this->denominator == info2.denominator;
    }
    bool operator != (Eraction info2){
        return this->numerator != info2.numerator && this->denominator != info2.denominator;
    }
    bool operator > (Eraction info2){
        return this->numerator > info2.numerator && this->denominator < info2.denominator;
    }
    bool operator < (Eraction info2){
        return this->numerator < info2.numerator && this->denominator < info2.denominator;
    }
    bool operator >= (Eraction info2){
        return this->numerator >= info2.numerator && this->denominator >= info2.denominator;
    }
    bool operator <= (Eraction info2){
        return this->numerator <= info2.numerator && this->denominator <= info2.denominator;
    }
};
int main(){
    int x,y;
    std::cout <<"Enter numerator and denominator: "<<std::endl;
    std::cin >>x>>y;
    Eraction info1(x,y);
    std::cout <<"Enter numerator and denominator: "<<std::endl;
    std::cin >>x>>y;
    Eraction info2(x,y);
    info1.print();
    info2.print();
    std::cout <<"== "<<(info1 == info2)<<std::endl;
    std::cout <<"!= "<<(info1 != info2)<<std::endl;
    std::cout <<">  "<<(info1 > info2)<<std::endl;
    std::cout <<"<  "<<(info1 < info2)<<std::endl;
    std::cout <<">= "<<(info1 >= info2)<<std::endl;
    std::cout <<"<= "<<(info1 <= info2)<<std::endl;
    return 0;
}
Eraction::Eraction(int x,int y){
    this->numerator = x;
    this->denominator = y;
}

Eraction::~Eraction(){
    this->numerator = 0;
    this->denominator = 0;
}
