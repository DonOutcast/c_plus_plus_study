// // 1.  Создай класс Fraction (обыкновенная дробь). Добавь конструктор, 
// который будет принимать два целых числа и добавлять объекту атрибуты - 
// числитель и знаменатель. Добавь метод print, который будет возвращать 
// текстовое представление объекта в формате: «Дробь {числитель}/{знаменатель}», 
// например «Дробь 1/2». Переопредели методы сравнения ==, !=, >,  <, >=, <=. 
// Методы должны возвращать True или False.


// // Считай с клавиатуры четыре целых числа  - числитель и знаменатель первой
//  дроби и числитель и знаменатель второй дроби. Создай экземпляры класса Fraction с 
//  параметрами считанными с клавиатуры. Выведи результаты сравнения==, !=, >,  <, >=, 
//  <= этих дробей.

// // Входные данные:
// // Вводится четыре строки, каждая строка содержит целое число - числитель и 
// знаменатель первой дроби и числитель и знаменатель второй дроби.


// // Выходные данные:
// // Выводится 6 строк 1 или 0.


// // Пример ввода:
// // 1
// // 2
// // 2
// // 3

// // Пример вывода:
// // 0
// // 1
// // 0
// // 1
// // 0
// // 1

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
#include <iostream>
class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        Fraction(int numer, int denom){
            this->numerator = numer;
            this->denominator = denom;
        }
        void print(){
            std::cout << "Fraction" << numerator << "/" << denominator << std::endl;
        }
        bool operator == (Fraction fraction){
            return numerator * fraction.denominator == fraction.numerator * denominator;
        }
        bool operator != (Fraction fraction){
            return !(numerator * fraction.denominator == fraction.numerator * denominator);
        }
        bool operator > (Fraction fraction){
            return numerator * fraction.denominator > fraction.numerator * denominator;
        }
        bool operator < (Fraction fraction){
            return numerator * fraction.denominator < fraction.numerator * denominator;
        }
        bool operator >= (Fraction fraction){
            return numerator * fraction.denominator >= fraction.numerator * denominator;
        }
        bool operator <= (Fraction fraction){
            return numerator * fraction.denominator <= fraction.numerator * denominator;
        }
};

int main(){
    int num1, num2, den1, den2;
    std::cout << "Enter 1 fraction: " << std::endl;
    std::cin >> num1 >> den1;
    std::cout << "Enter 2 fraction: " << std::endl;
    std::cin >> num2 >> den2;
    Fraction f1(num1, den1);
    Fraction f2(num2, den2);
    std::cout << "== " << (f1 == f2) << std::endl;
    std::cout << "!= " << (f1 != f2) << std::endl;
    std::cout << "> " << (f1 > f2) << std::endl;
    std::cout << "< " << (f1 < f2) << std::endl;
    std::cout << ">= " << (f1 >= f2) << std::endl;
    std::cout << "<= " << (f1 <= f2) << std::endl;

    return 0;

}