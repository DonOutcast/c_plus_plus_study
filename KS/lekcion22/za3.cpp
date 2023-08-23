#include <iostream>

class Totalprice
{
    private:
    double price;
    public:
    static double max_price;
    void set_price();
    void set_maxprice();
};
double Totalprice :: max_price{1000};

int main()
{
    Totalprice totalprice;

    totalprice.set_price();
    totalprice.set_maxprice();

    return 0;
}
void Totalprice::set_price()
{
    std::cout << "vvedite price ";
    std::cin >> price; 
}
void Totalprice :: set_maxprice()
{
    if(price > max_price)
    {
        std::cout << max_price;
    }
    else
    {
        std::cout << price;
    }
}


