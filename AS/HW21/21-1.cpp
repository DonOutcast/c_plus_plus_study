#include <iostream>

struct Shop {
    char item [100];
    int quantity;
    int price;
};

struct Seller {
    void sell(Shop* shop, int quantity, int money) {
        if (shop->quantity >= quantity && money >= quantity * shop->price) {
            std::cout << "Seller is selling the item" << std::endl;
            std::cout << "Item: " << shop->item << std::endl;
            std::cout << "Price per item: " << shop->price << " dollars" << std::endl;
            std::cout << "Quantity: " << quantity << std::endl;
            std::cout << "Total price: " << quantity * shop->price << " dollars" << std::endl;
        } else {
            std::cout << "Item is not available or the buyer is lack of funds" << std::endl;
        }
    }
};

struct Customer {
    int money;

    void buy(Shop* shop, int quantity) {
        if (shop->quantity >= quantity && money >= quantity * shop->price) {
            std::cout << "Customer is buying the item" << std::endl;
            std::cout << "Item: " << shop->item << std::endl;
            std::cout << "Price of the item: " << shop->price << " dollars" << std::endl;
            std::cout << "Quantity: " << quantity << std::endl;
            std::cout << "Total price: " << quantity * shop->price << " dollars" << std::endl;
            money -= quantity * shop->price;
            shop->quantity -= quantity;
        } else {
            std::cout << "Unable to make the purchase" << std::endl;
        }
    }
};

int main() {
    Shop shop;
    Seller seller;
    Customer customer;

    std::cout << "Enter the item name: ";
    std::cin >> shop.item;
    std::cout << "Enter the quantity available: ";
    std::cin >> shop.quantity;
    std::cout << "Enter the price per item: ";
    std::cin >> shop.price;
    std::cout << "Enter the buyer's money: ";
    std::cin >> customer.money;
    std::cout << "Enter the quantity to purchase: ";
    int quantity;
    std::cin >> quantity;
   

    seller.sell(&shop, quantity, customer.money);
    customer.buy(&shop, quantity);

    return 0;
}