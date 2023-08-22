#include <iostream>
struct Store{
    private:
        char product[20];
    public:
        int quantity_of_goods;
        int price;
        int count;

    public:
        int product_availability(void);
        void show_the_products(void);
};
int Store::product_availability(void){
    if (quantity_of_goods > 1){
        return 1;
    } else {
        return 0;
    }
}
void Store::show_the_products(void){
    std::cout << "Products: " << std::endl;
    for (int i = 0; i < quantity_of_goods; i++){
        std::cout << product[i] << std::endl;
    }
}
struct Seller{
    private:
        struct Store *store;
    public:
        void sale_of_goods(void);
};
void Seller::sale_of_goods(void){
    if (store->product_availability()){
        if (store->quantity_of_goods >= 0){
            for (int i = 0; i < store->count; i++){
                store->quantity_of_goods --;
                std::cout << "Sold: " << store->count[i] << " products of " << store->product[i] << std::endl;
            }
        } else {
            std::cout << "Not enough products" << std::endl;
        }
    } else {
        std::cout << "There are no products" << std::endl;
    }
}
struct Buyer{
    private:
        struct Store *store;
        int balance;
    public:
        void buy_the_products(struct Seller seller);

};
void Buyer::buy_the_products(struct Seller seller){
    int cost = 0;
    for (int i = 0; i < store->quantity_of_goods; i++){
        cost += store->price[i] * store->count[i];
    }
    if (balance >= cost){
        balance -= cost;
        seller.sale_of_goods();
    } else {
        std::cout << "Insufficient funds" << std::endl;
    }
}
int main(){
    struct Store *store;
    struct Seller seller;
    struct Buyer buyer;
    std::cout << "Quantity of goods: ";
    std::cin >> store->quantity_of_goods;
    for (int i = 0; i < store->quantity_of_goods; i++){
        std::cout << "Product: ";
        std::cin >> store->product;
        std::cout << "Price: ";
        std::cin >> store->price;
        std::cout << "Count: ";
        std::cin >> store->count;
    }
    store->show_the_products();
    seller->sale_of_goods();
    buyer->buy_the_products();
    return 0;
    
}



