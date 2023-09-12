#include <iostream>

class Fraction {
    private:
        int numerator,denominator;
    public:
        Fraction(int num_new,int den_new) {
            this->numerator = num_new;
            this->denominator = den_new;
        }
        void print() {
            std::cout << "Fraction " << numerator << "/" << denominator << std::endl;
        }
        bool operator == (Fraction f) {
            return (this->numerator == f.numerator) && (this->denominator == f.denominator);
        }
           bool operator != (Fraction f) {
            return (this->numerator != f.numerator) && (this->denominator != f.denominator);
        }
           bool operator > (Fraction f) {
            return (this->numerator > f.numerator) && (this->denominator > f.denominator );
        }
           bool operator < (Fraction f) {
            return (this->numerator < f.numerator) && (this->denominator < f.denominator);
        }
           bool operator >= (Fraction f) {
            return (this->numerator >= f.numerator) && (this->denominator >= f.denominator);
        }
           bool operator <= (Fraction f) {
            return (this->numerator <= f.numerator) && (this->denominator <= f.denominator);
        }
        

        ~Fraction() {;}
    };

int main() {
    int num_1,den_1,num_2,den_2;
    std::cin >> num_1;
    std::cin >> den_1;
    std::cin >> num_2;
    std::cin >> den_2;
    Fraction fraction_1(num_1,den_1);
    Fraction fraction_2(num_2,den_2);
    fraction_1.print();
    fraction_2.print();
    std::cout << "== " << (fraction_1 == fraction_2) << std::endl;
    std::cout << "!= " << (fraction_1 != fraction_2) << std::endl;
    std::cout << "> " << (fraction_1 > fraction_2) << std::endl;
    std::cout << "< " << (fraction_1 < fraction_2) << std::endl;
    std::cout << ">= " << (fraction_1 >= fraction_2) << std::endl;
    std::cout << "<= " << (fraction_1 <= fraction_2) << std::endl;
    return 0;
}