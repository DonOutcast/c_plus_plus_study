#include <iostream>
#include <string.h>

struct Shopping
{
    private:
    int kol;
    std::string pokaz;
    int price;
    int balance = 60;

    public:
    void set_shop(int kol_p, std::string pokaz_p, int price_p);
    void set_print(void);
    void set_pokupka(int kol_n,std:: string pokaz_n);
    void set_prodavec();
};
void Shopping :: set_shop(int kol_p, std :: string pokaz_p, int price_p)
{
    kol = kol_p;
    pokaz = pokaz_p;
    price = price_p;
}
void Shopping :: set_print(void)
{
    std::cout << kol<< " " << pokaz << " "<< price; 
}
void Shopping :: set_pokupka(int kol_n, std:: string pokaz_n)
{
    std::cout << kol_n << " "<< pokaz_n<< "\n";

    if(kol_n > 1)
    {
        price = kol_n * price;
    }
    if(balance >= price)
    {
        std::cout << "pokupka sovershen\n";
    }
    else
    {
        std::cout << "nedostatochno sredst\n";
    }
    kol -=kol_n;
    if(kol >=0)
    {
        if(balance <=price)
        {
            kol += kol_n;
            std::cout << "ostatok "<< kol<< "\n";
        }
        else
        {
            std::cout << "ostatok "<< kol << "\n";
        }
    }
    else
    {
        std::cout << "tak mnogo kupit nelza\n";
    }
}
void Shopping :: set_prodavec()
{
    if(balance >=price)
    {
        std::cout << "tovar proda\n";
    }
    else
    {
        std::cout << "tovar ne prodan\n";
    }
}
int main()
{
    struct Shopping var;
    std::cout << "store\n";
    
    var.set_shop(2, "toy", 20);
    var.set_print();
    std::cout << "\n";
    var.set_pokupka(2, "toy");
    var.set_prodavec();
    std::cout << "\n";

    var.set_shop(10, "ball", 30);
    var.set_print();
    std::cout << "\n";
    var.set_pokupka(3, "ball");
    var.set_prodavec();
    
    return 0;
}