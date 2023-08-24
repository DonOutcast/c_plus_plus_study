#include <iostream>

class Currency_converter {
private:
    static double rate1;
    static double rate2;
    static double rate3;

public:
    static void set_rates(double r1, double r2, double r3) {
        rate1 = r1;
        rate2 = r2;
        rate3 = r3;
    }

    static double convert_rub(double amount, int currency_type) {
        switch (currency_type) {
            case 1:
                return amount / rate1;
            case 2:
                return amount / rate2;
            case 3:
                return amount / rate3;
            default:
                std::cout << "Wrong type of currency!" << std::endl;
                return 0;
        }
    }
};

double Currency_converter::rate1 = 60.5;
double Currency_converter::rate2 = 35.8;
double Currency_converter::rate3 = 0.85;

int main() {
    double amount;
    int currency_type;

    std::cout << "Enter amount in rub: ";
    std::cin >> amount;

    std::cout << "Enter the currency type: ";
    std::cin >> currency_type;

    if (currency_type < 1 || currency_type > 3) {
        std::cout << "Wrong type of currency!" << std::endl;
        return 0;
    }

    double converted_amount = Currency_converter::convert_rub(amount, currency_type);
    std::cout.precision(2);
    std::cout << std::fixed << converted_amount << std::endl;

    return 0;
}
