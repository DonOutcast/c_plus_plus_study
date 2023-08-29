#include <iostream>

class Currency_transfer{
    private:
        double money;
        static double kurs_1;
        static double kurs_2;
        static double kurs_3;
    public:
        void get_money(void);
        void conversion(void);
};
double Currency_transfer::kurs_1 = 60.5;
double Currency_transfer::kurs_2 = 35.8;
double Currency_transfer::kurs_3 = 0.85;
int main(){
    Currency_transfer transfer;
    transfer.get_money();
    transfer.conversion();

    return 0;
}
void Currency_transfer::get_money(void){
    std::cout << "Amount in rubles: ";
    std::cin >> money;
}
void Currency_transfer::conversion(void){
    int currency_type;
    std::cout << "Currency type: ";
    std::cin >> currency_type;
    if (currency_type == 1){
        printf("%.2f\n", money/kurs_1);
    } else if (currency_type == 2){
        printf("%.2f\n", money/kurs_2);
    } else if (currency_type == 3){
        printf("%.2f\n", money/kurs_3);
    } else {
        std::cout << "Incorrect kurs" << std::endl;
    }
}
