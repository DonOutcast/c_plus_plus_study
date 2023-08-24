/*ќпишите класс Total_price, создайте поле price и статическое поле max_price,
создайте методы класса дл€ установлени€ значени€ пол€ price и метод, который провер€ет,
не превышает ли price максимально допустимое значение max_price.
≈сли превышает, то присвоить price значение max_price.
Ќапишите программу, котора€ будет запрашивать ввод значени€ с клавиатуры (double),
записывать его в свойство прайс, инициализировать max_price значением 1000, 
вызывать метод проверки и выводить на экран значение пол€ price.

ѕример работы программы:
¬ведите цену:1100 
1000 */
#include <iostream>
class Total_price{
private:
    double price;
    double max_price = 1000;
public:
    void set();
    void check_of_max_price();
    void print();
};
int main(){
    Total_price info;
    info.set();
    info.check_of_max_price();
    info.print();
    return 0;
}
void Total_price::print(){
    std::cout << price;
}
void Total_price::set(){
    std::cout <<"Enter price: ";
    std::cin >> price;
}
void Total_price::check_of_max_price(){
    if (price > max_price){
        price = max_price;
    } 
}
