/* Напишите три абстрактных типа данных магазин , продавец, покупатель. У магазина должны быть методы наличие товара , показ товара. 
У продавьца методы продать. У покупателя купить. Также нужно учитывать наличие денег у покупателя */
#include <iostream>
#include <string>
struct Market{
    private:
        int balance = 1000;
        int pin_cart = 4902;
    public:
        std::string product;
        int price;
        int quantity;
        int count;
    public:
        void check_pin(void);
        void enter_info_product(void);
        void print_info_product(void);
        void purchase(void);
};
void Market::purchase(void){
    std::cout <<"How much will you buy " <<product<<"?"<<std::endl;
    std::cin >>count;
    if (count <= quantity){
        std::cout <<"Your product will cost: "<< count*price <<std::endl;     
    }else{
        int answer = 0;
        std::cout <<"We don't have that much, sorry. I can offer "<<quantity<<".You 'll take it?"<<std::endl;
        
        while (1){
            std::cout <<"Enter 1 if Yes, 2 if No"<<std::endl;
            std::cin >> answer;
            if (answer == 1){
                count = quantity;
                std::cout <<"Your product will cost: "<< count*price <<std::endl;
                break;
            }else if(answer == 2){
                std::cout <<"All the best come again";
                count = 0;
                break;
            }else{
                std::cout <<"Error"<<std::endl;
            }    
        }
    }
}
void Market::check_pin(void){
    int enter_pin = 0;
    while (1){
        std::cout <<"Enter PIN: ";
        std::cin >>enter_pin;
        if (pin_cart == enter_pin){
            std::cout <<"PIN entered correctly"<<std::endl;
            if (balance >= count * price){
                balance -= count * price;
                std::cout <<"There is "<<balance<<" money on your balance.Thanks for the purchase.";
                break;
            }else{
                std::cout <<"Hot enough funds.Top up your balance and come back again.";
                break;
            }    
        }else{
            std::cout <<"Error"<<std::endl;
        }

    }
}
void Market::enter_info_product(void){
    std::cout << "Name product: ";
    std::cin >> product;
    std::cout << "Price product :";
    std::cin >> price;
    std::cout << "Quantity product :";
    std::cin >> quantity;
    std::cout << std::endl;
}
void Market::print_info_product(void){
    std::cout<<"Info product"<<std::endl<<"Product: " <<product<<std::endl<<"Price: "<<price<<std::endl<<"Quantity: "<<quantity<<std::endl;
}

int main(){
    struct Market info;
    info.enter_info_product();
    info.print_info_product();
    info.purchase();
    info.check_pin();
    return 0;
}
