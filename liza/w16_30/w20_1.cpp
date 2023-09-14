#include <iostream>
struct Products{
    char name[15];
    int price;
};
int main(){
    struct Products info;
    int card_number = 0, enter_card_number = 0;
    int sum = 0;
    int balance = 0;
    for(int i = 0; i < 3; i++){
        std::cout << "Name: ";
        std::cin >> info.name;
        std::cout << "Price: ";
        std::cin >> info.price;
        sum += info.price;
        std::cout << std:: endl;
    }
    std::cout << "Card number: ";
    std::cin >> card_number;
    std::cout << "Balance: ";
    std::cin >> balance;
    std::cout << "Enter the card number: ";
    std::cin >> enter_card_number;
    while(1){
        if (enter_card_number == card_number){
            std::cout << balance << std::endl;
            if (balance >= sum){
                std::cout << "Payment has passed" << std::endl;
                balance -= sum;
            } else {
                std::cout << "Insufficient funds" << std::endl;
            }
            break;
        } else {
            std::cout << "Enter the card number: ";
            std::cin >> enter_card_number;
        }
    }
    std::cout << "New balance: ";
    std::cin >> balance;
    return 0;
}