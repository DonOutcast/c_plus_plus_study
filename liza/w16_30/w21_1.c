// #include <iostream>
// #include <string>
// struct Bank_card{
//     private:
//         int password;
//         int balance;
//     public:
//         char surname[20];
//         char name[20];
//         int card_number;
//     public:
//         void set_card(char n[], char[l], int b, int n, int p);
//         void show_balance(void);
//         void add_balance(int b);
        
// };
// void Bank_card::set_balance(int b){
//     balance = b;
// }
// void Bank_card::show_balance(void){
//     std::cout << "Balance: " << balance;
// }
// int main(){
//     struct Bank_card info;
//     info.
// }

#include <iostream>
#include <string>

struct card {
    private:
        int balance;
        int pin;
    
    public:
        std::string des;
        char name[10];
        char lastname[10];
        int number;

    
    public:
        void set_card(char n[], char l[], int b, int n, int p);
        void show_balance(void);
        void add_balance(int b);
        int get_balance(int b);
};
int card::get_balance(int b) {
    return balance - b;
}

void card::add_balance(int b) {
    balance += b;
}

void card::print_date(void) {
    std::cout << balance << std::endl;
}

void card::set_date(char n[], char l[], int b, int n, int p) {
        balance = b;
        pin = p;
        name = n;
        lastname = l;
        number = n;
}


int main() {
    return 0;
}