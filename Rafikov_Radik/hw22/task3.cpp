/*������� ����� Total_price, �������� ���� price � ����������� ���� max_price,
�������� ������ ������ ��� ������������ �������� ���� price � �����, ������� ���������,
�� ��������� �� price ����������� ���������� �������� max_price.
���� ���������, �� ��������� price �������� max_price.
�������� ���������, ������� ����� ����������� ���� �������� � ���������� (double),
���������� ��� � �������� �����, ���������������� max_price ��������� 1000, 
�������� ����� �������� � �������� �� ����� �������� ���� price.

������ ������ ���������:
������� ����:1100 
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
