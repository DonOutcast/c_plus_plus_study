#include <iostream>
#include <string>

struct Shop {
    
   


    public:
    int count_total;
    int price;
    std::string show_items;
    void avail_item(int c, std::string sh, int p);
    void show_item(void);
     

};
void Shop :: avail_item(int c, std :: string sh, int p)
{
    count_total = c;
    show_items = sh;
    price = p;
}
void Shop :: show_item(void) {
    std::cout << count_total << " " << show_items << " "<< price; 
}

struct Seller {
   

    public:
    int count_sold;
    int price_new;
    void sell_item(int cs,int pr_n);
    

};

void Seller::sell_item(int cs,int pr_n) {
    count_sold = cs;
    price_new = pr_n;
    
}

struct Buyer {
    private:
    int balance = 1000;

    public:
    int get_balance(int b);

};


int Buyer::get_balance(int b) {
    return balance - b;
}






int main() {
    struct Shop sh;
    struct Buyer buy;
    struct Seller sl;
    sh.avail_item(2,"laptop",100);
    sh.show_item();
    std::cout << std::endl;

    sl.sell_item(1,50);
    buy.get_balance(100);
    sh.show_item();
    return 0;
}