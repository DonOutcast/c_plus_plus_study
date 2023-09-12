#include <iostream>
class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        Fraction(int num, int den){
            this->numerator = num;
            this->denominator = den;
        }
        void print(){
            std::cout << "Fraction" << numerator << "/" << denominator << std::endl;
        }
        bool operator == (Fraction fract){
            return numerator * fract.denominator == fract.numerator * denominator;
        }
        bool operator != (Fraction fract){
            return !(numerator * fract.denominator == fract.numerator * denominator);
        }
        bool operator > (Fraction fract){
            return numerator * fract.denominator > fract.numerator * denominator;
        }
        bool operator < (Fraction fract){
            return numerator * fract.denominator < fract.numerator * denominator;
        }
        bool operator >= (Fraction fract){
            return numerator * fract.denominator >= fract.numerator * denominator;
        }
        bool operator <= (Fraction fract){
            return numerator * fract.denominator <= fract.numerator * denominator;
        }
};

int main(){
    int num_1, num_2, den_1, den_2;
    std::cout << "The first fraction: " << std::endl;
    std::cin >> num_1 >> den_1;
    std::cout << "The second fraction: " << std::endl;
    std::cin >> num_2 >> den_2;
    Fraction fract_1(num_1, den_1);
    Fraction fract_2(num_2, den_2);
    std::cout << "== " << (fract_1 == fract_2) << std::endl;
    std::cout << "!= " << (fract_1 != fract_2) << std::endl;
    std::cout << "> " << (fract_1 > fract_2) << std::endl;
    std::cout << "< " << (fract_1 < fract_2) << std::endl;
    std::cout << ">= " << (fract_1 >= fract_2) << std::endl;
    std::cout << "<= " << (fract_1 <= fract_2) << std::endl;

    return 0;

}

