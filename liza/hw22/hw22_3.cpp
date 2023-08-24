#include <iostream>
class Total_price{
    private:
        int price;
    public:
        static double max_price;
    public:
        void set_price(void);
        void check_price(void);
};
double Total_price::max_price = 1000;

int main(){
    Total_price total;
    total.set_price();
    total.check_price();

    return 0;
}
void Total_price::set_price(void){
    std::cout << "Price: ";
    std::cin >> price;
}
void Total_price::check_price(void){
    if (price > max_price){
        price = max_price;
    }
    std::cout << "Price: " << price << std::endl;
}
