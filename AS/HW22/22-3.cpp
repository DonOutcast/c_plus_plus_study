// Опишите класс Total_price, создайте поле price и статическое поле max_price, 
// создайте методы класса для установления значения поля price и метод, который 
// проверяет, не превышает ли price максимально допустимое значение max_price. 
// Если превышает, то присвоить price значение max_price. Напишите программу,
//  которая будет запрашивать ввод значения с клавиатуры (double), записывать его в
//   свойство прайс, инициализировать max_price значением 1000, вызывать метод проверки 
//   и выводить на экран значение поля price.

// Пример работы программы:
// Введите цену:1100 
// 1000
#include <iostream>

class Total_price {
private:
    double price;
    static double max_price;

public:
    void set_price(double value) {
        price = value;
    }

    void check_price() {
        if (price > max_price) {
            price = max_price;
        }
    }

    static void set_max(double value) {
        max_price = value;
    }

    double get_price() {
        return price;
    }
};

double Total_price::max_price = 1000;

int main() {

    Total_price total_price;
    double input_price;

    std::cout << "Input price: ";
    std::cin >> input_price;

    total_price.set_price(input_price);
    total_price.check_price();

    std::cout << total_price.get_price() << std::endl;

    return 0;
}

