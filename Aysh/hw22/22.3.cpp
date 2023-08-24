#include <iostream>

class Total_price {
    int price;
    static int max_price;
    public:
    void set_price(double p);
    void check_price();
    void print_price();
   

};

 void Total_price::set_price(double p) {
    price = p;
}
 void Total_price::check_price() {
    if(price > max_price) {
        price = max_price;
    }
}
void Total_price::print_price() {
    std::cout << price << std::endl;
}

int Total_price::max_price = 1000;

int main() {
    Total_price tp;
    double new_price = 0;
    std::cout << "Enter price: ";
    std::cin >> new_price;
    tp.set_price(new_price);
    tp.check_price();
    tp.print_price();

    return 0;
}
