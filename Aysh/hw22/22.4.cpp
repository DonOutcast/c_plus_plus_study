#include <iostream>
#include <iomanip>

class Exchange {

    static float rate[];

    public:
    float forex(float rub,int currency_type) {
        return rub/rate[currency_type - 1];
    }

};
float Exchange::rate[3] = {60.5,35.8,0.85};

int main()  
{   
    Exchange e;
	float rub_1 = 0;
	int currency_type_1 = 0;
	std::cout << "Enter sum in roubles: "; 
	std::cin >> rub_1;
    std::cout << "Enter type of currency(1-3): "; 
    std::cin >> currency_type_1;  
	std::cout << std::fixed << std::setprecision(2) << e.forex(rub_1, currency_type_1) << std::endl;
}